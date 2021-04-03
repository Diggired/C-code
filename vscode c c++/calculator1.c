// / Здравствуйте,меня зовут Мешалкин Никита.Это мой личный проект,который я немного доработал, и представляет он из себя калькулятор,
// работающий с файлами.Программа осуществляет ввод из одного файла и вывод в другой файл.Реализован запрос на продолжение работы и ввод других файлов.
// Это тот же калькулятор,выполняющий 6 математическийх операций и работающий с векторами,только теперь ввод и вывод происходит в файлах.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    long long int d,f,res;
    double e,t;
    float a,b;
    char c,r,input[20],output[20]; // Ограничение на название файла до 20 символов.
    // Объявляем указатели.
    float *g,*h,*Res;
    // Так же добавляем переменную для размера векторв.
    int size;
    // Данные две переменные используются в операциях возведения в степень и нахождение факториала,как начальные значения 
    // в цикле for.
    res=1;
    f=1;
    do
    {
        printf("Enter the input \"name.txt\": ");
        scanf(" %s",&input);
        printf("Enter the output \"name.txt\": ");
        scanf(" %s",&output);
        FILE *in,*out; // Указатели для работы с файлами.
        in = fopen(input,"r"); // Открываем указанный файл для чтения.
        out = fopen(output,"a"); // Открываем указанный файл для добавления в него чего-то без удаления прошлого.
        // Я сделал код таким образом,что сначала надо ввести операцию,чтобы он отправил вас в нужный case и выполнил только то,
        // что в нём находится.Это позволяет более гибко использовать типы.В каждом кейсе прописана своя отдельная маленькая программка,
        // выполняющая какую-либо из операций,присвоенная ей.
        // s - это от слова sum(сумма); d - это от слова difference(разность); c - это от слова composition(произведение).
        while(feof(in) == 0)
        {
            fprintf(out,"Enter the operation (+,-,*,/,!,^,s,d,c): ");
            fscanf(in," %c",&c);
            fprintf(out,"%c\n",c);
            switch (c)
            {
                case '+':
                {
                    fprintf(out,"Enter the first number: "); // Данная функция работает так же,как и printf только с файлами. Первым параметром она принимает указатель для вывода в файл. 
                        fscanf(in," %f",&a); // Данная функция работает так же,как и scanf только с файлами. Первым параметром она принимает указатель для чтения из файла. 
                        fprintf(out,"%f\n",a); // Эта функция считывает из файла ввода значение и выводит его в файл вывода(сделано просто для красоты и понятности).
                    fprintf(out,"Enter the second number: ");
                        fscanf(in," %f",&b);
                        fprintf(out,"%f\n",b);
                    fprintf(out,"%f + %f = %f\n",a,b,a+b);
                    fprintf(out,"\n");
                    break;
                }
                case '-':
                {
                    fprintf(out,"Enter the first number: ");
                        fscanf(in," %f",&a);
                        fprintf(out,"%f\n",a);
                    fprintf(out,"Enter the second number: ");
                        fscanf(in," %f",&b);
                        fprintf(out,"%f\n",b);
                    fprintf(out,"%f - %f = %f\n",a,b,a-b);
                    fprintf(out,"\n");
                    break;
                }
                case '*':
                {
                    fprintf(out,"Enter the first number: ");
                        fscanf(in," %f",&a);
                        fprintf(out,"%f\n",b);
                    fprintf(out,"Enter the second number: ");
                        fscanf(in," %f",&b);
                        fprintf(out,"%f\n",b);
                    fprintf(out,"%f * %f = %f\n",a,b,a*b);
                    fprintf(out,"\n");
                    break;
                }
                case '/':
                {
                    fprintf(out,"Enter the first number: ");
                        fscanf(in," %lf",&e);
                        fprintf(out,"%lf\n",e);
                    fprintf(out,"Enter the second number: ");
                        fscanf(in," %lf",&t);
                        fprintf(out,"%lf\n",t);
                    fprintf(out,"%lf / %lf = %lf\n",e,t,e/t);
                    fprintf(out,"\n");
                    break;
                }
                case '^':
                {
                    fprintf(out,"Enter the first number: ");
                        fscanf(in," %lli",&d);
                        fprintf(out,"%lli\n",d);
                    fprintf(out,"Enter the second number: ");
                        fscanf(in," %lli",&f);
                        fprintf(out,"%lli\n",f);
                    for (long long int i=0;i<f;i++)
                    res=res*d;
                    fprintf(out,"%lli^%lli = %lli\n",d,f,res);
                    fprintf(out,"\n");
                    break;
                }
                case '!':
                {
                    fprintf(out,"Enter a number: ");
                    fscanf(in," %lli",&d);
                    fprintf(out,"%lli\n",d);
                    if (d<0)
                        fprintf(out,"-\n");
                    else if (d==0)
                        fprintf(out,"0\n");
                    if (d>0)
                    {
                        for (long long int i=1;i<=d;i++)
                    {
                        f=f*i;
                    } 
                        fprintf(out,"%lli! = %lli\n",d,f);
                        fprintf(out,"\n");
                    }
                    break;
                }
                case('s'):
                {
                    fprintf(out,"Enter the size of the vectors: ");
                    fscanf(in," %i",&size);
                    fprintf(out,"%i\n",size);
                    // Зарезервируем в нашей памяти ячейки под указатели.
                    g = malloc(size*sizeof(int));
                    h = malloc(size*sizeof(int));
                    Res = malloc(size*sizeof(int));
                    fprintf(out,"Enter the first vector:\n");
                    // Создаём цикл,потому что нам неизвестно сколько у вектора будет значений.
                    for (int i=0;i<size;i++)
                        {
                            fscanf(in," %f",&g[i]);
                            fprintf(out,"%f\n",g[i]);
                        }
                    fprintf(out,"Enter the second vector:\n");
                    for (int i=0;i<size;i++)
                        {
                            fscanf(in," %f",&h[i]);
                            fprintf(out,"%f\n",h[i]);
                        }
                    fprintf(out,"The result of adding vectors:\n");
                    for (int i=0;i<size;i++)
                        fprintf(out,"%f + %f = %f\n",g[i],h[i],g[i]+h[i]);
                    fprintf(out,"\n");
                    // Очищаем ранее используемую память,чтобы она не накапливалась и ей могла пользоваться операционная система.
                    free(g);
                    free(h);
                    free(Res);
                    break;
                }
                // Все те же самые методы мы используем дальше,только меняем операцию между векторами.
                case('d'):
                {
                    fprintf(out,"Enter the size of the vectors: ");
                    fscanf(in," %i",&size);
                    fprintf(out,"%i\n",size);
                    g = malloc(size*sizeof(int));
                    h = malloc(size*sizeof(int));
                    Res = malloc(size*sizeof(int));
                    fprintf(out,"Enter the first vector:\n");
                    for (int i=0;i<size;i++)
                        {
                            fscanf(in," %f",&g[i]);
                            fprintf(out,"%f\n",g[i]);
                        }
                    fprintf(out,"Enter the second vector:\n");
                    for (int i=0;i<size;i++)
                        {
                            fscanf(in," %f",&h[i]);
                            fprintf(out,"%f\n",h[i]);
                        }
                    fprintf(out,"Result of the vector difference:\n");
                    for (int i=0;i<size;i++)
                        fprintf(out,"%f - %f = %f\n",g[i],h[i],g[i]-h[i]);
                    fprintf(out,"\n");
                    free(g);
                    free(h);
                    free(Res);
                    break;
                }
                case('c'):
                {
                    fprintf(out,"Enter the size of the vectors: ");
                    fscanf(in," %i",&size);
                    fprintf(out,"%i\n",size);
                    g = malloc(size*sizeof(int));
                    h = malloc(size*sizeof(int));
                    Res = malloc(size*sizeof(int));
                    fprintf(out,"Enter the first vector:\n");
                    for (int i=0;i<size;i++)
                        {
                            fscanf(in," %f",&g[i]);
                            fprintf(out,"%f\n",g[i]);
                        }
                    fprintf(out,"Enter the second vector:\n");
                    for (int i=0;i<size;i++)
                        {
                            fscanf(in," %f",&h[i]);
                            fprintf(out,"%f\n",h[i]);
                        }
                    fprintf(out,"The result of the product of vectors:\n");
                    for (int i=0;i<size;i++)
                        fprintf(out,"%f * %f = %f\n",g[i],h[i],g[i]*h[i]);
                    fprintf(out,"\n");
                    free(g);
                    free(h);
                    free(Res);
                    break;
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
            } 
        }
        fclose(in); // Данная функция закрывает используемые файлы,чтобы не тратить ресурсы компьютера.
        fclose(out);
        printf("Continue? (y/n):");
        scanf(" %c",&r);
            
    }while (r == 'y');
    return 0;    
}
