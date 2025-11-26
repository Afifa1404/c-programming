#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char name[50];
    float salary;
} Employee;

int main()
{
    Employee emp[3];
    int i;

    printf("Enter details of 3 employees:\n");

    for(i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf(" Employee Details\n");
    for(i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID     : %d\n", emp[i].id);
        printf("Name   : %s\n", emp[i].name);
        printf("Salary : %.2f\n", emp[i].salary);
    }

    return 0;
}
