#include <stdio.h>

int main(int argc, char* argv[])
{
    long long int d,f;
    int A,B;
    float a,b,res;
    char c,r;
    res=1;
    do
    {
    printf("Enter the first number: ");
    scanf(" %f",&a);
    printf("Enter the second number: ");
    scanf(" %f",&b);
    printf("Enter the operation (+,-,*,/,!,^): ");
    scanf(" %c",&c);
    switch (c)
    {
        case '+':
        if ("int")
            printf("%i + %i = %i",A,B);
            else
            printf("%f + %f = %f\n",a,b,a+b);
            break;
        case '-':
            printf("%f - %f = %f\n",a,b,a-b);
            break;
        case '*':
            printf("%f * %f = %f\n",a,b,a*b);
            break;
        case '/':
            printf("%f / %f = %f\n",a,b,a/b);
            break;
        case '^':
        {
            for (float i=0;i<b;i++)
            res=res*a;
            printf("%f^%f = %f\n",a,b,res);
            break;
        }
        } 
        printf("Continue? (Y/N):"); 
        scanf(" %c",&r);
    }while (r == 'Y'); 
    return 0;    
}
