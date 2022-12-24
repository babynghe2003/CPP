
if !exists("g:os")
    if has("win64") || has("win32") || has("win16")
        let g:os = "Windows"
    else
        let g:os = substitute(system('uname'), '\n', '', '')
    endif
endif

" important option that should already be set!
set hidden

" available options:
" * g:split_term_style
" * g:split_term_resize_cmd
function! TermWrapper(command) abort
	if !exists('g:split_term_style') | let g:split_term_style = 'vertical' | endif
	if g:split_term_style ==# 'vertical'
		let buffercmd = 'vnew'
	elseif g:split_term_style ==# 'horizontal'
		let buffercmd = 'new'
	else
		echoerr 'ERROR! g:split_term_style is not a valid value (must be ''horizontal'' or ''vertical'' but is currently set to ''' . g:split_term_style . ''')'
		throw 'ERROR! g:split_term_style is not a valid value (must be ''horizontal'' or ''vertical'')'
	endif
	exec buffercmd
	if exists('g:split_term_resize_cmd')
		exec g:split_term_resize_cmd
	endif
	exec 'term ' . a:command
	exec 'setlocal nornu nonu'
	exec 'startinsert'
	
endfunction


autocmd FileType cpp command! -nargs=0 CompileAndRun call TermWrapper(printf('g++ -std=c++11 %s && ./a.out', expand('%')))
autocmd FileType cpp command! -nargs=1 -complete=file CompileAndRunWithFile call TermWrapper(printf('g++ -std=c++11 %s && ./a.out < %s', expand('%'), <q-args>))
autocmd FileType cpp nnoremap fw :CompileAndRun<CR>


" For those of you that like to use -o and a specific outfile executable
" (i.e., xyz.cpp makes executable xyz, as opposed to a.out
" This C++ toolkit gives you commands to compile and/or run in different types
" of terminals for your own preference.
augroup CppToolkit
	autocmd!
	autocmd FileType cpp nnoremap <leader>fb :!g++ %:r.cpp && ./a.out<CR>
	autocmd FileType cpp nnoremap <leader>fr :!./%:r.out<CR>
 
augroup END

" (or let g:split_term_resize_cmd = 'vertical resize 40')
" options
" choose between 'vertical' and 'horizontal' for how the terminal window is split
" (default is vertical)
"let g:split_term_style = 'horizontal'


" add a custom command to resize the terminal window to your preference
" (default is to split the screen equally)
"let g:split_term_resize_cmd = 'resize 6'
" (or let g:split_term_resize_cmd = 'vertical resize 40')
let g:split_term_resize_cmd = 'vertical resize 40'
set splitright


nnoremap cpf i#include <bits/stdc++.h><Esc>o#define ll long long<Esc>ousing namespace std;<Esc>ovoid solve() {<Esc>oint n;<Esc>ocin >> n;<Esc>ocout << n;<Esc>o}<Esc>o<CR>int main() {<Esc>oios::sync_with_stdio(false);<Esc>ocin.tie(nullptr);<Esc>oint t;<Esc>ocin >> t;<Esc>owhile (t--) {<Esc>osolve();<Esc>o}<Esc>oreturn 0;<Esc>o}

nnoremap cpif i#include <bits/stdc++.h><Esc>ousing namespace std;<Esc>o#define ll long long<Esc>ovoid indef(){<Esc>o#ifndef ONLINE_JUDGE<Esc>ofreopen("input.txt","r",stdin);<Esc>ofreopen("output.txt","w",stdout);<Esc>o#endif<Esc>o}<Esc>o<Esc>ovoid solve() {<Esc>oint n;<Esc>ocin >> n;<Esc>ocout << n;<Esc>o<Esc>o}<Esc>o <Esc>oint main() {<Esc>oios::sync_with_stdio(false);<Esc>ocin.tie(nullptr);<Esc>o<Esc>oindef();<Esc>o<Esc>oint t;<Esc>ocin >> t;<Esc>o<Esc>owhile (t--) {<Esc>osolve();<Esc>o}<Esc>o<Esc>oreturn 0;<Esc>o}
