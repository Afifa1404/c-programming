#include <stdio.h>
#include <stdlib.h>
void inputArray(int*arr,int n);
void displayArray (const int*arr,int n);
int sumArray (int*arr,int n);
int countpositive(int*arr,int n);
int countnegative (int*arr,int n);

int main()
{
    int arr[100];
    int n,sum,pos_C,neg_C;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    inputArray(arr,n);
    printf("\nArray elements are:");
    displayArray(arr,n);
    sum=sumArray(arr,n);
    printf("\nsum of all elements =%d",sum);
     int posCount=countpositive(arr,n);
     int negCount=countnegative(arr,n);
    printf("\nNumber of positive elements =%d", posCount);
    printf("\nNumber of negative elements =%d\n",negCount);
    return 0;
}
void inputArray(int*arr,int n)
{
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n; i++)
    {
        scanf("%d",arr +i);
    }
}
void displayArray(const int*arr,int n)
   {
       for(int i=0;i<n;i++)
       {
           printf("%d",*(arr+i));
       }
   }
int sumArray(int*arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=*(arr+i);
    }
    return sum;
}
int countpositive (int*arr,int n)
{
    int cnt = 0;
for (int i = 0; i < n; i++) {
    if (*(arr + i) > 0) cnt++;
}
    return cnt;
}
int countnegative(int*arr,int n)
{
    int cnt = 0;
for (int i = 0; i < n; i++) {
    if (*(arr + i) > 0) cnt++;
}
    return cnt;
}


