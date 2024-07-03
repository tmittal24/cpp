// C Program to demonstrate how to use union
#include <stdio.h>

// union template or declaration
union myCustomUnion
{
    int member1;
    char member2;
    float member3;
};


// driver code
int main()
{

    {
        // defining a union variable
        union myCustomUnion var1;

        // initializing the union member
        var1.member1 = 15;
        printf("\nThe value stored in member1 = %d", var1.member1);
    }

    {
        // defining a union variable
        union myCustomUnion *var1 = new union myCustomUnion;

        // initializing the union member
        var1->member1 = 16;
        printf("\nThe value stored in member1 = %d", var1->member1);
    }

    return 0;
}