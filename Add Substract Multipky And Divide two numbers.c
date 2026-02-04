#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    int sum, difference,multiplication,division;
    printf("Enter any two numbers:\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    difference=a-b;
    multiplication=a*b;
    division=a/b;
    printf("Sum,difference,multiplication and division of two numbers are respectively:\n%d\n%d\n%d\n%d",sum,difference,multiplication,division);
    return 0;
}
