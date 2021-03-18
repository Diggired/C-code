// Напишите программу, читающую с клавиатуры два числа и выводящее их произведение с точностью до 8 знаков после запятой.
#include <stdio.h>

int main(int argc, char* argv[])
{
    float a;
    float b;
    scanf(" %f",&a);
    scanf(" %f",&b);
    printf("%.8f",a*b);
    return 0;
}
