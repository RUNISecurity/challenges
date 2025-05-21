// gcc -o pwn pwn1.c -g -no-pie

#include <stdio.h>
#include <stdlib.h>

void get_flag()
{
    system("cat flag.txt");
}

int main(int argc, char *argv[])
{

    return 0;
}