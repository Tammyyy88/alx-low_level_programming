section .data
    hello db 'Hello, Holberton', 0Ah ; '0Ah' represents a new line character

section .text
    global _start

_start:
    ; print "Hello, Holberton"
    push hello
    call printf
    add rsp, 8 ; clean up the stack

    ; exit the program
    mov eax, 0
    mov ebx, 0
    int 0x80
