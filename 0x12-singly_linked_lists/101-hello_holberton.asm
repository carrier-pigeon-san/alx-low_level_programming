section .data
    hello_string db "Hello, Holberton", 0

section .text
    global main

extern printf

main:
    sub rsp, 8 ; align the stack on a 16-byte boundary
    mov rdi, hello_string ; load the address of the string to print into rdi
    call printf ; call the printf function to print the string
    add rsp, 8 ; restore the stack pointer

    ; Exit the program
    mov eax, 60        ; syscall: exit
    xor edi, edi       ; status: 0
    syscall           ; invoke syscall

