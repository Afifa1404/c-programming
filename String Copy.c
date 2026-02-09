#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char src[]="Welcome";
    char dest[20];
    strcpy (dest,src);
    printf("Copied String:%s",dest);
}
