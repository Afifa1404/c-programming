#include <stdio.h>
#include <stdlib.h>
int main()
{
char tb;
printf("Timetable \n");
printf("Enter which period(1,2,3,4)\n");
scanf("%c",&tb);

switch(tb)
{
case '1':
printf("Subject is C programming language \n");
printf("Timings is 09:00-10:00\n");
break;

case '2':
printf("Subject is Linux \n");
printf("Timings is 10:00-11:00\n");
break;

case '3':
printf("Subject is Computer Organization \n");
printf("Timings is 11:45-12:45 \n");
break;

case '4':
printf("Subject is Computational mathematics \n");
printf("Timings is 12:45-1:45 \n");
break;

default:
printf ("Invalid input (Please enter(1,2,3 or 4)) \n");
}
return 0;
}
