#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
int sum,avg;
printf ("Enter any three numbers\n");
scanf ("%d %d %d",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
printf("Sum of three numbers:%d\n",sum);
printf ("Average of three numbers:%d",avg);
return 0;
}
