// Калькулятор.
#include <stdio.h>

int main(int argc, char* argv[])
{
    long long int d,f,res;
    double e,t;
    float a,b;
    char c,r;
    // Данные две переменные используются в операциях возведения в степень и нахождение факториала,как начальные значения 
    // в цикле for.
    res=1;
    f=1;
    do
    {
    // Я сделал код таким образом,что сначала надо ввести операцию,чтобы он отправил вас в нужный case и выполнил только то,
    // что в нём находится.Это позволяет более гибко использовать типы.В каждом кейсе прописана своя отдельная маленькая программка,
    // выполняющая какую-либо из операций,присвоенная ей.
    printf("Enter the operation (+,-,*,/,!,^): ");
    scanf(" %c",&c);
    switch (c)
    {
        case '+':
        {
            printf("Enter the first number: ");
                scanf(" %f",&a);
            printf("Enter the second number: ");
                scanf(" %f",&b);
            printf("%f + %f = %f\n",a,b,a+b);
            break;
        }
        case '-':
        {
            printf("Enter the first number: ");
                scanf(" %f",&a);
            printf("Enter the second number: ");
                scanf(" %f",&b);
            printf("%f - %f = %f\n",a,b,a-b);
            break;
        }
        case '*':
        {
            printf("Enter the first number: ");
                scanf(" %f",&a);
            printf("Enter the second number: ");
                scanf(" %f",&b);
            printf("%f * %f = %f\n",a,b,a*b);
            break;
        }
        case '/':
        {
            printf("Enter the first number: ");
                scanf(" %lf",&e);
            printf("Enter the second number: ");
                scanf(" %lf",&t);
            printf("%lf / %lf = %lf\n",e,t,e/t);
            break;
        }
        case '^':
        {
            printf("Enter the first number: ");
                scanf(" %lli",&d);
            printf("Enter the second number: ");
                scanf(" %lli",&f);
            for (long long int i=0;i<f;i++)
            res=res*d;
            printf("%lli^%lli = %lli\n",d,f,res);
            break;
        }
        case '!':
        {
            printf("Enter a number: ");
            scanf("%lli",&d);
            if (d<0)
                printf("-\n");
            else if (d==0)
                printf("0\n");
            if (d>0)
            {
                for (long long int i=1;i<=d;i++)
            {
                f=f*i;
            } 
                printf("%lli! = %lli\n",d,f);
            }
            break;
        }
        }
        // Вы могли заметить,что эти две переменные уже были описаны в начале программы,но не спешите делать поспешных выводов,
        // данный финт ушами сделан для корректной работы операций возведения в степень и нахождения факториала числа.
        // Смысл закдючается в том,что после каждого прохода цикла while,значение снова возвращается к 1,что позволяет избавиться от 
        // такого свойства,как накапливание.Без повтора этих переменныъх в конце кода,нахождение,например,факториала числа 5 
        // каждый раз будет выдавать разные ответы,так как мы не обнуляем переменные,а они сохраняют в себе предыдыдущие значения.
        f=1;
        res=1;
        // Данный кусочек кода выводит строку и вводит какой-то символ,чтобы мы могли дать понять циклу while стоит ли повотрить 
        // прохождение по коду сначала или лучше закончить выполнение программы.     
        printf("Continue? (y/n):"); 
        scanf(" %c",&r);
    }while (r == 'y'); 
    return 0;    
}
