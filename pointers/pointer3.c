#include <stdio.h>

int main()
{

    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("value of a = %d\n", a);
    printf("address of a = %lu\n", &a);
    printf("value of a =  %d\n", *(&a));
    printf("address of a = %lu\n", p);
    printf("value at pointer p = %d\n", *p);

    printf("\n-------------------\n");
    *p = 20;

    printf("value of a = %d\n", a);
    printf("address of a = %lu\n", &a);
    printf("value of a =  %lu\n", *(&a));
    printf("address of a = %lu\n", p);
    printf("value at pointer p = %d\n", *p);

    printf("\n-------------------\n");
}