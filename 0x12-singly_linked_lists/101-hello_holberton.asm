section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0  ; 10 represents the ASCII value for newline

section .text
    extern printf

global main
main:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf
    pop rbp
    ret
