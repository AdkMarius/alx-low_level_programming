; print 'Hello, Holberton' with assembly language

bits 64

section .data
	message db 'Hello, Holberton', 10

section .text
	global _start
	_start:
		mov rax, 1
		mov rdi, 1
		mov rsi, message
		mov rdx, 17
		syscall

		mov rax, 60
		mov rdi, 0
		syscall
