// Created date: 2021-10-17

#include <stdio.h>

struct employee
{
    char name[30];
    int age;
    float salary;
};

int main()
{
    {
        // Ex1 - creating struct variable and Initialization
        struct employee emp = {"John", 25, 35000.0};
        printf("Name: %s\n", emp.name);
        printf("Age: %d\n", emp.age);
        printf("Salary: %.2f\n", emp.salary);
    }

    {
        // Ex2 - Input from user
        struct employee emp;
        printf("Enter details:\n");
        printf("Name: ");
        scanf("%[^\n]%*c", emp.name);
        printf("Age: ");
        scanf("%d", &emp.age);
        printf("Salary: ");
        scanf("%f", &emp.salary);

        printf("\nEntered details are:\n");
        printf("Name: %s\n", emp.name);
        printf("Age: %d\n", emp.age);
        printf("Salary: %.2f\n", emp.salary);
    }

    { 
        // Ex3 - Array of structure
        struct employee emp[2];
        for (int i = 0; i < 2; i++)
        {
            printf("Enter details of employee %d:\n", i + 1);
            printf("Name: ");
            scanf("%[^\n]%*c", emp[i].name);
            printf("Age: ");
            scanf("%d", &emp[i].age);
            printf("Salary: ");
            scanf("%f", &emp[i].salary);
        }

       //
    }

    return 0;
}