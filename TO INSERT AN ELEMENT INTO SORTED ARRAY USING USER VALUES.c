#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100],i,n,value;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
        {
           scanf("%d",&arr[i]);
        }
    printf("Enter the value that should be inserted in the sorted array: \n");
     scanf("%d",&value);
    for(i=n-1;i>=0&&arr[i]>value;i--)
    {
      arr[i+1]=arr[i];
    }
      arr[i+1]=value;
      n++;
    printf("Arayy after insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
