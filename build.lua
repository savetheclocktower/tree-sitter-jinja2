-- Neovim plugin build script
-- See https://github.com/folke/lazy.nvim#-plugin-spec

require("tree-sitter-jinja2").register_parser()
vim.cmd("TSInstall! jinja2")
