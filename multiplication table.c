#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter a number to display its multiplication table\n");
    scanf("%d",&n);
    printf("Multiplication table of %d is as follows \n",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d \n",n,i,n*i);
    }
    return 0;
}
