#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int age;
    char name[20];
    float total_marks;
};
int main()
{
    struct Student s[2];
    int i;
    float average;
    for(i=0;i<2;i++)
    {
        printf("Enter details for student%d:\n",i+1);
        printf("Name:");
        scanf("%s",s[i].name);
        printf("Age:");
        scanf("%d",&s[i].age);
        printf("Total Marks:");
        scanf("%f",&s[i].total_marks);
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        printf("Student:%d\n",i+1);
        printf("Name:%s\n",s[i].name);
        printf("Age:%d\n",s[i].age);
        printf("Total Marks:%.2f\n",s[i].total_marks);
        printf("\n");
    }
    average=(s[0].total_marks+s[1].total_marks)/2;
    printf("Average of Total Marks=%.2f\n",average);
    return 0;
}
