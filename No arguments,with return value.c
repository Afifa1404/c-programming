#include <stdio.h>
#include <stdlib.h>
int getNumber()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    return num;
}

int main()
{
    int n= getNumber();
    printf("you entered :%d,n");
    return 0;
}
