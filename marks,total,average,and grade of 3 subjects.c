#include <stdio.h>
#include <stdlib.h>

int main()
{
   float m1,m2,m3,total,avg;
   char grade;
   printf("Enter the marks of three subjects\n");
   scanf("%f %f %f",&m1,&m2,&m3);
   total=m1+m2+m3;
   avg=total/3;
   printf("The total marks is:%.2f \n",total);
   printf("The average is:%.2f \n",avg);
   if(avg>=90)
   {
       grade='A';
   }
   else if(avg>=80)
   {
       grade='B';
   }
   else if(avg>=70)
   {
       grade='C';
   }
   else if(avg>=60)
   {
       grade='D';
   }
   else if(avg>=50)
   {
       grade='E';
   }
   else
   {
       grade='F';
   }
   printf("Grade=%c",grade);
   if(avg>=50||m1>=50||m2>=50||m3>=50)
   {
       printf("\nResult is PASS");
   }
   else
   {
       printf("\nResult is FAIL");
   }
   return 0;
}
