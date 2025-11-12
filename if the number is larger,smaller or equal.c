#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Enter the 2 numbers \n");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is greater than %d",num1,num2);
    }
    else if(num1<num2)
    {
        printf("%d is smaller than %d",num1,num2);
    }
    else if(num1=num2)
    {
        printf("%d and %d are equal",num1,num2);
    }
    return 0;
}
