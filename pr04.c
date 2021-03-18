// Напишите программу, читающую с клавиатуры одно целое число,
// затем одно вещественное и выводящее их сумму с точностью до 5 знака после запятой.
#include <stdio.h>

int main(int argc, char* argv[])
{
    int a;
    float b;
    scanf(" %i",&a);
    scanf(" %f",&b);
    printf("%.5f",a+b);
    return 0;
}
