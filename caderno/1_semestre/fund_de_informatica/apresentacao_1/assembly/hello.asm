; nasm -f elf64 ./hello.asm -o ./hello.o && ls && ld ./hello.o -o ./hello && ls && echo -e "\n" && ./hello && echo -e "\n"

global _start

section .data
msg db  '  Hello, world!',0xa ;our dear string
len equ $ - msg               ;length of our dear string

section .text

; linker puts the entry point here:
_start:

; Write the string to stdout:

    mov edx,len ;message length
    mov ecx,msg ;message to write
    mov ebx,1   ;file descriptor (stdout)
    mov eax,4   ;system call number (sys_write)
    int 0x80    ;call kernel

; Exit via the kernel:

    mov ebx,0   ;process' exit code
    mov eax,1   ;system call number (sys_exit)
    int 0x80    ;call kernel - this interrupt won't return
