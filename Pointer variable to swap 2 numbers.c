#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    int *p1,*p2,temp;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("After swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
