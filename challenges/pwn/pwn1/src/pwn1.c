// gcc -o pwn pwn1.c -std=c99 -g -fno-stack-protector -no-pie

#include <stdio.h>
#include <stdlib.h>

void get_flag()
{
    printf("RUNISEC{n0w_1_G3ts_1t}");
}

int main(int argc, char *argv[])
{
    setvbuf(stdout, NULL, _IONBF, 0);

    char buffer[64];
    printf("Enter your name: ");
    gets(buffer);
    printf("Hello, %s", buffer);

    return 0;
}