#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char password[6];
    char Password[]="Affu@14";
    int length=strlen(Password);
    printf("Username:Afifa14 \n");
    printf("Enter Password: ");
    scanf("%s",password);
    if(strlen(password)!=length)
    {
        printf("Password length is incorrect");
    }
    else
    {
        if(strcmp(password,Password)==0)
        {
            printf("Password is correct\n");
        }
        else
        {
            printf("Password is incorrect\n");
        }
    }
    return 0;
}
