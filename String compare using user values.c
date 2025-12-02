#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter two strings:\n");
    scanf("%s %s",s1,s2);
    int result=strcmp(s1,s2);
    printf("Result:%d\n",result);
    if(result==0)
    {
        printf("Lexicographically string %s and %s are equal",s1,s2);
    }
    else if(result>0)
    {
        printf("Lexicographically first string %s is greater than second string %s",s1,s2);
    }
    else if(result<0)
    {
        printf("Lexicographically second string %s is greater than first string %s",s2,s1);
    }
}
