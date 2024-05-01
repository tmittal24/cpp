#include <stdio.h>
int main()
{
    int x = 1;
    int a, b;
    a = x++;
    printf("a = %d, b = %d, x = %d", a, b, x);
    printf("\n");
    b = ++x;
    printf("a = %d, b = %d, x = %d", a, b, x);
}