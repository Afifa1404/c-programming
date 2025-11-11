#include <stdio.h>
#include <stdlib.h>
void sayHello()
{
    printf("Hello student! you just called me back!\n");

}
void studentwork(void(*callbackfunc)())
{
    printf("student is doing homework...\n");
    callbackfunc();
}
int main()
{
    studentwork(sayHello);
    return 0;
}
