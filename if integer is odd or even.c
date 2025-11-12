#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    if  (n%2==0)
    {
        printf("%d is an even integer.");
    }
    else
    {
        printf("%d is an odd integer.");
   	}
   	 return 0;
}
