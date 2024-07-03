#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int a = 10;
    int *p = &a;
    int **q = &p;

    //pointer-variable = new data-type;
    int *x = new int;
    *x = 10;
    cout << "value of x = " << *x << endl;


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