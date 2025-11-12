#include <stdio.h>
#include <stdlib.h>

int square(int x)
{
    return x*x;
}
void apply(int*a,int n,int(*op)(int))
{
    for(int i=0;i<n;i++)
    {
        a[i]=op(a[i]);
    }
}
int main(void)
{
    int a[5]={1,2,3,4,5};
    apply(a,5,square);
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
