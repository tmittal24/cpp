#include <stdio.h>

int main()
{
    int i = 3;

    //Pointer, we know is a variable that contains address of another variable
    int *j= &i; // int *j would mean, the value at the address contained in j is an int.
   // j = &i;

    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    printf("Address of j = %u\n", &j);

    printf("Value of j = %u\n", j);
    printf("Value of i = %d\n", i);

    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);
    return 0;
}

/**
 * Example 1- 
 * The declaration float *s does not mean that s is going to contain a floating-point value. 
 * What it means is, s is going to contain the address of a floating-point value. 
 * 
 * Example 2- 
 * Similarly, char *ch means that ch is going to contain the address of a char value. 
 * Or in other words, the value at address stored in ch is going to be a char.
*/