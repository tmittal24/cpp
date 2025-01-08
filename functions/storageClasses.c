#include "stdio.h"

float pi1 = 3.14;
int indArea1(int a, int b);
void indArea2();

int main()
{
    auto int a = 10;
    static int b = 25;

    int c = indArea1(a, b);

    // printf("%d\n%d\n", a, b);
    printf("%d\n", c);
    return 0;
}

int indArea1(int a, int b)
{
    static int c = 25;
    int d = 25;
    a = 55;
    b = 66;
    // printf("%d\n%d\n", a, b);
    printf("-----------------------------------\n");
    return d;
}

void indArea2()
{
    printf("%f", pi1);
}