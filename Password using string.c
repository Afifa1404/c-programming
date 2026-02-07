#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char password[20];
    int length,upper=0,number=0,special=0;
    printf("Enter password:");
    scanf("%s",password);
    length=strlen(password);
    for(int i=0;i<length;i++)
        {
          char ch=password[i];
          if(ch>='A'&&ch<='Z')
            upper++;
          else if(ch>='0'&&ch<='9')
            number++;
          else if(!((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')))
            special++;
       }
    if(upper&&number&&special)
        {
          printf("Valid Password\n");
          if(length>8)
           {
              printf("Password is strong\n");
           }
          else if(length=8)
            {
              printf("Password is moderate\n");
            }
          else if(length<8)
            {
              printf("Password is easy\n");
            }
        }
        else
            {
              printf("Invalid Password\n");
            }
    return 0;
}
