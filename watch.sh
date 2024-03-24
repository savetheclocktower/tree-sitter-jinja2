#!/usr/bin/env bash

pnpm exec nodemon -x "tree-sitter generate && npx tree-sitter test"
