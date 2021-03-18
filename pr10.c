// Возведение числа в степень.
#include <stdio.h>

int main(int argc, char* argv[])
{
    int a,b,res;
    scanf(" %i",&a);
    scanf(" %i",&b);
    res=1;
    for (int i=0;i<b;i++)
        res=res*a;
        printf("%i^%i=%i",a,b,res);
    return 0;
}
