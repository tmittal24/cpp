#include <stdio.h>

int main()
{
    printf("Hello World!!!\n");
    int x = (3 + 2 % 5);
    if (1)
        printf("%d", x);
    else
        printf("1 is false\n");

    int count = 5;
    for (size_t i = 0; i < count; i++)
    {
        printf("1 is false\n");
    }
    // variable = (condition) ? Expression2 : Expression3;
    int tertiary = (1) ? 2 : 3;
    printf("\n tertiary=%d", tertiary);
    return 0;
}
