#include "tree_sitter/parser.h"

#include <stdio.h>
#include <wctype.h>

enum TokenType {
    RAW_TEXT,
    ERROR_SENTINEL
};

#define MAX(a, b) ((a) > (b) ? (a) : (b))

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// If this is an endraw statement, we should see `% endraw %}` ahead of us.
static bool scan_for_endraw(TSLexer *lexer) {
  int position = 0;
  // Ignoring whitespace, we expect to see these characters in this sequence.
  char chars[] = { '%', 'e', 'n', 'd', 'r', 'a', 'w', '%', '}' };
  while (!lexer->eof(lexer)) {
    if (iswspace(lexer->lookahead)) {
      advance(lexer);
      continue;
    }
    if (lexer->lookahead != chars[position]) {
      return false;
    }
    advance(lexer);
    position++;
    if (position > 8) {
      return true;
    }
  }
  return false;
}

static bool scan_for_raw_text(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    skip(lexer);
  }
  while (!lexer->eof(lexer)) {
    switch (lexer->lookahead) {
      case '{':
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '%') {
          if (scan_for_endraw(lexer)) {
            return true;
          }
        }
        break;
      default:
        advance(lexer);
        break;
    }
  }
  return false;
}

static bool scan(TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[ERROR_SENTINEL]) {
    return false;
  }
  if (valid_symbols[RAW_TEXT]) {
    return scan_for_raw_text(lexer);
  }
  return false;
}

bool tree_sitter_jinja2_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    return scan(lexer, valid_symbols);
}

void *tree_sitter_jinja2_external_scanner_create() {
  return NULL;
}
void tree_sitter_jinja2_external_scanner_destroy(void *p) {}
void tree_sitter_jinja2_external_scanner_reset(void *p) {}
unsigned tree_sitter_jinja2_external_scanner_serialize(void *p, char *buffer) {
  return 0;
}
void tree_sitter_jinja2_external_scanner_deserialize(void *p, const char *b, unsigned n) {}
