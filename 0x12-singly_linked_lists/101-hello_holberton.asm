    section     .data
msg db 'Hello, Holberton!',0
len equ $-msg

section     .text
global      _start

_start:
    ; write message to stdout
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80

    ; exit
    mov eax, 1
    xor ebx, ebx
    int 0x80
