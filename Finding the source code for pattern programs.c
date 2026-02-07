#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[]="Afifa";
    int i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
    return 0;
}
