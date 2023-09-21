section .data
    hello: db "Hello, Holberton", 10, 0   ; Message to print (null-terminated string)

section .text
    global main

    extern printf

main:
    push rbp                ; Save the value of the base pointer on the stack
    mov rbp, rsp            ; Move the value of the stack pointer to the base pointer, creating a new stack frame

    lea rdi, [hello]       ; Load the memory address of the 'hello' string into the 'rdi' register (1st argument of printf)
    xor eax, eax            ; Clear the 'eax' register, which will be used to store the return value of 'printf'
    call printf             ; Call the 'printf' function to print the string

    mov rsp, rbp            ; Restore the stack pointer by moving the value of the base pointer back to the stack pointer
    pop rbp                 ; Restore the previous value of the base pointer from the stack
    xor eax, eax            ; Clear the 'eax' register to set the return value of 'main' to 0 (successful program execution)
    ret                     ; Return from the 'main' function


