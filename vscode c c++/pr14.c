// Написать программу на языке си, обеспечивающую выбор операции из списка возможных. 
// Пользователь должен ввести два числа и одну из базовых математических операций: +, -, *, /  
// Программа печатает на экране полученное математическое выражение, заменяя знак операции на её строковое название (числа отделяются от названия пробелами).  
// Например: ввод "1", "2" и "*", в консоль выводится  "1 multiply by 2". 
// При вводе любой другой операции должно выводиться "nop".
// + plus
// - minus
// * multiply by
// / divide by
#include <stdio.h>

int main(int argc, char* argv[])
{
    int a,b;
    char c;
    scanf(" %i",&a);
    scanf(" %i",&b);
    scanf(" %c",&c);
    switch (c)
    {
        case '+':
            printf("%i plus %i",a,b);
            break;
        case '-':
            printf("%i minus %i",a,b);
            break;
        case '*':
            printf("%i multiply by %i",a,b);
            break;
        case '/':
            printf("%i divide by %i",a,b);
            break;
        default:
            printf("nop");
    } 
    return 0;   
}
