// Написать программу, читающую символ с клавиатуры и выводящий его обратно 2 раза. Каждый раз символ выводится на новой строке.
#include <stdio.h>

int main(int argc, char* argv[])
{
    char A;
    scanf(" %c",&A);
    printf("%c\n",A);
    printf("%c",A);
    return 0;
}
