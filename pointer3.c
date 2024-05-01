#include <stdio.h>

int main() {

    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("value of a = %d\n", a);
    printf("address1 of a %lu\n", &a);
    printf("value of a =  %lu\n", *(&a));
    printf("address2 of a %lu\n", p);
}