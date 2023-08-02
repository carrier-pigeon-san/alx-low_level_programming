section .data
    hello_string db "Hello, Holberton", 10, 0 ; 10 is the newline character

section .text
    global main
    extern printf

main:
    sub rsp, 8           ; Adjust the stack to align on a 16-byte boundary
    mov rdi, hello_string ; Load the address of the string to print into rdi
    xor rax, rax         ; Clear rax register (used to indicate the number of vector registers used)
    call printf          ; Call the printf function to print the string
    add rsp, 8           ; Restore the stack pointer

    ; Exit the program
    mov eax, 60          ; syscall: exit
    xor edi, edi         ; status: 0
    syscall             ; invoke syscall

