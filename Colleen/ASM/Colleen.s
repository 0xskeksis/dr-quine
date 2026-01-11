section .text
global main
main:
	xor		rax, rax
	xor		rdi, rdi
	xor		rsi, rsi
	xor		rdx, rdx

	inc		rax
	mov		dil, 0
	mov		rsi, msg
	mov		dl, len

	syscall
	mov rax, 60
	syscall

section .data
	msg	db "Hello World"
	len        equ $ -msg
