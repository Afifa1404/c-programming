#include <stdio.h>
#include <stdlib.h>
   int main()
{
    int i,j,space;
    for(i=1;i<=9;i++)
     {
       for(space=9;space>i;space--)
       {
            printf(" ");
       }
       for(j=1;j<=i;j++)
       {
            printf("%d",i);
            if(j<i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
