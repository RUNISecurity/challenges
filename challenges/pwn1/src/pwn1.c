// gcc -o pwn pwn1.c -std=c99 -fno-stack-protector -no-pie
// aslr disabled

#include <stdio.h>
#include <stdlib.h>

void get_flag()
{
    printf("RUNISEC{pwn_1s_e4sy_1f_y0u_k0w_h0w_t0_pwn}");
    fflush(stdout);
}

int main(int argc, char *argv[])
{
    char buffer[60];

    printf("Enter your name: ");
    fflush(stdout);

    gets(buffer);

    printf("Hello, %s", buffer);
    fflush(stdout);

    return 0;
}