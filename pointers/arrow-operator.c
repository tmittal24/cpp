// C program to show Arrow operator
// used in structure

#include <stdio.h>
#include <stdlib.h>

// Creating the structure
struct student
{
    char name[80];
    int age;
    float percentage;
};

// Creating the structure object
struct student *emp = NULL;

// Driver code
int main()
{
    int x;
    struct student s1;
    s1.age = 10;
    s1.percentage = 90.5;
    printf("Age = %d\n", s1.age);

    // Assigning memory to struct variable emp
    emp = (struct student *)malloc(sizeof(struct student));

    // Assigning value to age variable
    // of emp using arrow operator
    emp->age = 18;

    // Printing the assigned value to the variable
    printf("%d", emp->age);

    return 0;
}
