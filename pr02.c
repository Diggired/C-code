// Напишите программу, читающую с клавиатуры целое число без знака и выводящее его в формате 000000 (минимум 6 символов).
#include <stdio.h>

int main(int argc, char* argv[])
{
    int a;
    scanf(" %i",&a);
    printf("%.6i",a);
    return 0;
}
