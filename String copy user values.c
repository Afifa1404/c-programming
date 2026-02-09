#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char src[100];
    char dest[100];
    printf("Enter the string:");
    scanf("%s",src);
    strcpy(dest,src);
    printf("Copied string:%s",dest);
}
