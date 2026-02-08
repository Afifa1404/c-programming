#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    int id;
    char name[20];
    int sem;
    char branch[30];
    char dept[20];
};
int main()
{
    int n,i;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct Student s[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter details for student %d:\n",i+1);
        printf("ID: ");
        scanf("%d",&s[i].id);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Semester: ");
        scanf("%d",&s[i].sem);
        printf("Branch: ");
        scanf("%s",s[i].branch);
        printf("Department: ");
        scanf("%s",s[i].dept);
    }
    printf("\n%-5s %-15s %-10s %-15s %-15s\n","ID","Name","Semester","Branch","Department");
    for(i=0;i<n;i++)
    {
        printf("%-5d %-15s %-10d %-15s %-15s\n",s[i].id,s[i].name,s[i].sem,s[i].branch,s[i].dept);
    }
    return 0;
}
