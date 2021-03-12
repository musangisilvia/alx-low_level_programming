; -----------------------------------------------------------------------------------
; writes Hello, Holberton to the console using system calls. Runs on 64-bit Linux
; To assemble and run:
;
;      nasm -felf64 100-hello_holberon.asm && ld hello.o && ./a.out
; -----------------------------------------------------------------------------------

section .text
global main

main:
	push	rbp
	mov	rbp, rsp
	sub	rsp, 32
	mov	rax, 1
	mov	rdi, 1
	mov 	rsi, message
	mov	rdx, 17
	syscall
	mov	rax, 60
	xor	rdi, rdi
	syscall

	section .data
message: db	"Hello, Holberton", 10
