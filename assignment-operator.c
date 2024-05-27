#include <stdio.h>
void compare(int a, int b);
int main()
{
    printf("Hello World!!!\n");

    int a = 1;
    int b = 1;

    int c = 0;
    int x = scanf("%d", &c);
    printf("input value given by user is =%d\n", c);
    printf("address of c where input is stored is == %u\n", &c);
    printf("scanf method retun value is =%d\n", x);
    printf("\n");
    compare(a, c);
    return 0;
}

void compare(int a, int c)
{
    if (a == c)
        printf("Both are equal %d and %d\n", a, c);
    else
        printf("%d and %d are not equal\n", a, c);
}
