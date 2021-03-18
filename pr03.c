// Напишите программу, читающую с клавиатуры вещественное число и выводящее его с точностью до 3 знака после запятой.
#include <stdio.h>

int main(int argc, char* argv[])
{
    float a;
    scanf(" %f",&a);
    printf("%.3f",a);
    return 0;
}
