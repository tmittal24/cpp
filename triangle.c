// Print numbers from 1 to 10
#include <stdio.h>
void printSquare();
void printTriangle();

int main()
{
    printTriangle();
    return 0;
}


void printTriangle()
{
    int j;
    for (j = 1; j <= 5; j++)
    {
        int i;
        for (i = 1; i < 5-j; i++)
        {
            printf(" ");
        }
        printf("%c", '\n');
    }
}


void printSquare()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        int j;
        for (j = 0; j < 3; j++)
        {
            printf("%c", '*');
        }
        printf("%c", '\n');
    }
}
