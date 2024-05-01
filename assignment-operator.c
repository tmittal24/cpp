#include <stdio.h>
void compare(char a, char b);
int main()
{
    printf("Hello World!!!\n");

    char a = '1';
    int b = 1;

    char c;
    c = scanf("\n%c", &c);
    printf("input char is = \n", c);
    compare(a, c);
    return 0;
}

void compare(char a, char b)
{
    if (a == b)
        printf("Both are equal %c and %c\n", a, b);
    else
        printf("%c and %c are not equal\n", a, b);
}