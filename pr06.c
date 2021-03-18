// Напишите программу, читающую с клавиатуры вещественное число и выводящее его с точностью до 10 знака после запятой.
#include <stdio.h>

int main(int argc, char* argv[])
{
    double a;
    scanf(" %lf",&a);
    printf("%.10lf",a);
    return 0;
}
