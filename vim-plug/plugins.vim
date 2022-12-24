" auto-install vim-plug
if empty(glob('~/.config/nvim/autoload/plug.vim'))
  silent !curl -fLo ~/.config/nvim/autoload/plug.vim --create-dirs
        \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
  "autocmd VimEnter * PlugInstall
  "autocmd VimEnter * PlugInstall | source $MYVIMRC
endif

call plug#begin('~/.config/nvim/autoload/plugged')

" Better Syntax Support
Plug 'sheerun/vim-polyglot'
" File Explorer
Plug 'scrooloose/NERDTree'
" Icons
Plug 'ryanoasis/vim-devicons'

" Auto pairs for '(' '[' '{'
Plug 'jiangmiao/auto-pairs'
Plug 'joshdick/onedark.vim'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'frazrepo/vim-rainbow'
Plug 'sonph/onehalf'
Plug 'tomasr/molokai'
Plug 'sainnhe/sonokai'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
Plug 'Yggdroot/indentLine'
Plug 'github/copilot.vim'
Plug 'preservim/nerdcommenter'
Plug 'sonph/onehalf', { 'rtp': 'vim' }
Plug 'enricobacis/vim-airline-clock'
call plug#end()

"" Map phím tắt Ctrl + P
nnoremap <silent> <C-S-p> :Files<CR>

"" Tìm file trong project, nhưng bỏ mấy thư mục như node_modules ra, để tìm nhẹ hơn.
set wildmode=list:longest,list:full
set wildignore+=*.o,*.obj,.git,*.rbc,*.pyc,__pycache__
let $FZF_DEFAULT_COMMAND =  "find * -path '*/\.*' -prune -o -path '**/node_modules/**' -prune -o -path 'node_modules/**' -prune -o -path 'target/**' -prune -o -path 'dist/**' -prune -o  -type f -print -o -type l -print 2> /dev/null"

command! -bang -nargs=* Rg call fzf#vim#grep("rg --column --line-number --no-heading --color=always --smart-case ".shellescape(<q-args>), 1, {'options': '--delimiter : --nth 4..'}, <bang>0)

"" Map phím "\f" để tìm nội dung, tương tự như "Ctrl + Shift + F" trên VSCode nhé
nnoremap <silent> <Leader>f :Rg<CR>
nnoremap <leader>n :NERDTreeFocus<CR>
nnoremap <C-n> :NERDTree<CR>
nnoremap <C-t> :NERDTreeToggle<CR>

nmap <C-_>   <Plug>NERDCommenterToggle
vmap <C-_>   <Plug>NERDCommenterToggle<CR>gv

set hlsearch

autocmd FileType cpp vnoremap <C-u> :s/^\/\///<Enter>
" Start NERDTree and leave the cursor in it.
autocmd VimEnter * NERDTree | wincmd p
" Exit Vim if NERDTree is the only window remaining in the only tab.
autocmd BufEnter * if tabpagenr('$') == 1 && winnr('$') == 1 && exists('b:NERDTree') && b:NERDTree.isTabTree() | quit | endif
set encoding=UTF-8

noremap <F3> :Autoformat<CR>
noremap <C-f> :Autoformat<CR>

au FileType c,cpp,objc,objcpp call rainbow#load()
let g:rainbow_active = 1

let g:rainbow_load_separately = [
      \ [ '*' , [['(', ')'], ['\[', '\]'], ['{', '}']] ],
      \ [ '*.tex' , [['(', ')'], ['\[', '\]']] ],
      \ [ '*.cpp' , [['(', ')'], ['\[', '\]'], ['{', '}']] ],
      \ [ '*.{html,htm}' , [['(', ')'], ['\[', '\]'], ['{', '}'], ['<\a[^>]*>', '</[^>]*>']] ],
      \ ]

let g:rainbow_guifgs = ['RoyalBlue3', 'DarkOrange3', 'DarkOrchid3', 'FireBrick']
let g:rainbow_ctermfgs = ['lightblue', 'lightgreen', 'yellow', 'red', 'magenta']

colorscheme onedark
"let g:airline_theme = 'onedark'

let g:indentLine_concealcursor = 'inc'
let g:indentLine_conceallevel = 2
let g:indentLine_char = '|'

syntax on
set nospell
set mouse=a
set autoindent
set wrap
set laststatus=2
if !has('gui_running')
  set t_Co=256
endif

autocmd TextChanged,TextChangedI <buffer> silent write
set number
set clipboard=unnamedplus

set autowrite

if !exists('g:airline_symbols')
  let g:airline_symbols = {}
endif

set hidden

set nobackup
set nowritebackup
let g:airline_powerline_fonts = 1
set guifont=MesloLGS\NF:s12

source $HOME/.config/nvim/vim-plug/cp.vim
source $HOME/.config/nvim/vim-plug/py.vim
source $HOME/.config/nvim/vim-plug/coc-setting.vim

let g:python3_host_prog="/usr/bin/python3"

if !exists('g:airline_symbols')
  let g:airline_symbols = {}
endif


" powerline symbols
let g:airline_left_sep = ''
let g:airline_left_alt_sep = ''
let g:airline_right_sep = ''
let g:airline_right_alt_sep = ''
let g:airline_symbols.branch = ''
let g:airline_symbols.colnr = ' ℅:'
let g:airline_symbols.readonly = ''
let g:airline_symbols.linenr = '|'
let g:airline_symbols.maxlinenr = ' ☰  '
let g:airline_symbols.dirty='⚡'

let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#hunks#enabled=0
let g:airline#extensions#hunks#coc_git = 1

let g:airline_section_z = airline#section#create_right(['Ln %3l','Col%3v'])
