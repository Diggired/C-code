#include <stdio.h>

int main(int argc, char* argv[])
{
    char r;
    do
    {
        printf("#");
        scanf("%c",&r);
    }
    while (r != 'n');
    return 0;
}
