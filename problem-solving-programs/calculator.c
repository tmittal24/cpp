// inlude    //header files
#include <stdio.h>

// method declations
int add(int a1, int b1);
int sub(int a2, int b2);
int multiply(int a3, int b3);
int divide(int a4, int b4);

// main
int main()
{
    int a;
    int b;
    char d; 
    int c;
    printf("enter command - ");

    scanf("%d %c %d", &a, &d, &b);
    if (d == '+')

        c=add(a, b);
    else if (d == '-')
        c=sub(a, b);
    else if (d == '*')
        c=multiply(a, b);
    else  (d == '/');
        c=divide(a, b);

    printf("%d", c);
    
}

// add
int add(int a1, int b1)
{
    int c = a1 + b1;
    //printf("%d", c);
    return c;
}

// sub
int sub(int a2, int b2)
{
    int c = a2 - b2;
    //printf("%d", c);
     return c;
    

}

// multiply
int multiply(int a3, int b3)
{
    int c = a3 * b3;
    //printf("%d", c);
     return c;
}

// divide
int divide(int a4, int b4)
{
    int c = a4 / b4;
   // printf("%d", c);
    return c;
}