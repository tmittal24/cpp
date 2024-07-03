// C program to show Arrow operator used in structure
#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
// Creating the structure
struct student
{
    char name[80];
    int age;
    float percentage;

    // Default constructor
    student()
    {
        // Initialize variables with default values
        age = 0;
        percentage = 0.0;
    }

    // Constructor with arguments
    student(char n[80], int a, float p)
    {
        strcpy(name, n);
        age = a;
        percentage = p;
    }

    // Destructor
    ~student()
    {
        cout << "Destructor called" << endl;
    }

    void tempMethod()
    {
        cout << "Method called" << endl;
    }
};

// Creating the structure object
struct student *emp = NULL;

// Driver code
int main()
{
    int x;
    x=10;


    // Example 1 = using . operator
    {
        struct student s1;
        s1.age = 10;
        s1.percentage = 90.5;
        printf("Age = %d\n", s1.age);
        s1.tempMethod();
    }

    // Example 2  = using -> operator with new
    {
        //(pointer_name)->(variable_name)
        struct student *s1 = new student;
        s1->age = 11;
        s1->percentage = 90.5;
        s1->tempMethod();
        printf("Age = %d\n", s1->age);
        /**
         * Difference between Dot(.) and Arrow(->) operator:
         * The Dot(.) operator is used to normally access members of a structure or union. The Arrow(->) operator exists to access the members of the structure or the unions using pointers
         */
    }

    //  Example 3  = using -> operator with malloc
    {
        // Assigning memory to struct variable emp
        struct student *emp = (struct student *)malloc(sizeof(struct student));
        // Assigning value to age variable of emp using arrow operator
        emp->age = 12;

        // Printing the assigned value to the variable
        printf("Age = %d\n", emp->age);
    }

    //  Example 4  = using {} for initialization
    {
        // Assigning memory to struct variable emp
        struct student emp1 = {"John", 13, 90.5};
        // Assigning value to age variable of emp using arrow operator
  

        // Printing the assigned value to the variable
        printf("Age = %d\n", emp1.age);
    }

    // Assigning memory to struct variable emp
    emp = (struct student *)malloc(sizeof(struct student));

    // Assigning value to age variable
    // of emp using arrow operator
    emp->age = 14;

    // Printing the assigned value to the variable
    printf("Age = %d\n", emp->age);

    return 0;
}
