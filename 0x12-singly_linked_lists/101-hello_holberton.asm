section .data
message db 'Hello, Holberton', 0xA ;	The message to be printed
section .text
	global _start

_start:
	;Write the message to standard output
	mov rax, 1
	mov rdi, 1	; System call number for write
	mov rsi, message	; Address of the message
	mov rdx, 16	; Length of the message
	syscall

	;
	mov rax, 60	; system call number for exit
	xor rdi, rdi	; Exit status 0
	syscall


