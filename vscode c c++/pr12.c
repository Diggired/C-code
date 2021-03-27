// Нахождение факториала числа.
#include <stdio.h>

int main(int argc, char* argv[])
{
    long long int a,b;
    b=1;
    scanf("%lli",&a);
    if (a<0)
    printf("-");
    else if (a==0)
    printf("0");
    if (a>0)
    {
    for (int i=1;i<=a;i++)
    {
        b=b*i;
    } 
    printf("%lli",b);
    }
    return 0;
}
