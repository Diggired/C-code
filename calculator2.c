// / Здравствуйте,меня зовут Мешалкин Никита.Это мой личный проект,который я немного доработал, и представляет он из себя калькулятор,
// выполняющий уже не только 6 математических операций,но и умеющий работать с векторами и памятью.Так же реализован вывод результата
// и запрос на продолжение работы программы или её завершение.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    long long int d,f,res;
    double e,t;
    float a,b;
    char c,r;
    // Объявляем указатели.
    float *g,*h,*Res;
    // Так же добалчем переменную для размера векторв.
    int size;
    // Данные две переменные используются в операциях возведения в степень и нахождение факториала,как начальные значения 
    // в цикле for.
    res=1;
    f=1;
    do
    {
    // Я сделал код таким образом,что сначала надо ввести операцию,чтобы он отправил вас в нужный case и выполнил только то,
    // что в нём находится.Это позволяет более гибко использовать типы.В каждом кейсе прописана своя отдельная маленькая программка,
    // выполняющая какую-либо из операций,присвоенная ей.
    // s - это от слова sum(сумма); d - это от слова difference(разность); c - это от слова composition(произведение).
    printf("Enter the operation (+,-,*,/,!,^,s,d,c): ");
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
         case('s'):
         {
             printf("Enter the size of the vectors: ");
             scanf(" %i",&size);
             // Зарезервируем в нашей памяти ячейки под указатели.
             g = malloc(size*sizeof(int));
             h = malloc(size*sizeof(int));
             Res = malloc(size*sizeof(int));
             printf("Enter the first vector: ");
             // Создаём цикл,потому что нам неизвестно сколько у вектора будет значений.
             for (int i=0;i<size;i++)
                scanf(" %f",&g[i]);
             printf("Enter the second vecto: ");
             for (int i=0;i<size;i++)
                scanf(" %f",&h[i]);
             printf("The result of adding vectors: ");
             for (int i=0;i<size;i++)
                printf("%f ",g[i]+h[i]);
             printf("\n");
             // Очищаем ранее используемую память,чтобы она не накапливалась и ей могла пользоваться операционная система.
             free(g);
             free(h);
             free(Res);
             break;
         }
         // Все те же самые методы мы используем дальше,только меняем операцию между векторами.
          case('d'):
          {
              printf("Enter the size of the vectors: ");
             scanf(" %i",&size);
             g = malloc(size*sizeof(int));
             h = malloc(size*sizeof(int));
             Res = malloc(size*sizeof(int));
             printf("Enter the first vector: ");
             for (int i=0;i<size;i++)
                scanf(" %f",&g[i]);
             printf("Enter the second vecto: ");
             for (int i=0;i<size;i++)
                scanf(" %f",&h[i]);
             printf("Result of the vector difference: ");
             for (int i=0;i<size;i++)
                printf("%f ",g[i]-h[i]);
             printf("\n");
             free(g);
             free(h);
             free(Res);
             break;
          }
           case('c'):
           {
               printf("Enter the size of the vectors: ");
             scanf(" %i",&size);
             g = malloc(size*sizeof(int));
             h = malloc(size*sizeof(int));
             Res = malloc(size*sizeof(int));
             printf("Enter the first vector: ");
             for (int i=0;i<size;i++)
                scanf(" %f",&g[i]);
             printf("Enter the second vecto: ");
             for (int i=0;i<size;i++)
                scanf(" %f",&h[i]);
             printf("The result of the product of vectors: ");
             for (int i=0;i<size;i++)
                printf("%f ",g[i]*h[i]);
             printf("\n");
             free(g);
             free(h);
             free(Res);
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
