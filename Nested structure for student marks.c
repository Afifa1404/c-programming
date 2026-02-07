#include <stdio.h>
#include <stdlib.h>
struct subject
{
    int m1;
    int m2;
    int m3;
    float total;
};
struct student
{
    int id;
    char name[20];
    struct subject marks;
};
int main()
{
    struct student s1={101,"Affu",{90,85,92,90+85+92}};
    printf("Name:%s\n",s1.name);
    printf("Marks:-\n%d\n%d\n%d\n",s1.marks.m1,s1.marks.m2,s1.marks.m3);
    printf("Total marks:%.2f",s1.marks.total);
    return 0;
}
