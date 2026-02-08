#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix[3][3];
    int sum=0;
    printf("Enter elements of 3x3 matrix:\n");
    for(int i=0;i< 3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
       sum+= matrix[i][i];
    }
     printf("\nSum of main diagonal elements=%d\n",sum);
    return 0;
}
