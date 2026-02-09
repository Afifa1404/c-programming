#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int choice;
    printf("Enter string 1:");
    scanf("%s",str1);
    printf("Enter string 2:");
    scanf("%s",str2);
    printf("Choose choice:\n");
    printf("1.To find Length\n");
    printf("2.For concatenation\n");
    printf("3.To copy\n");
    printf("4.To compare\n");
    printf("Enter choice(1,2,3,4):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Length of str1:%lu\n",strlen(str1));
            break;
        case 2:
            strcat(str1,str2);
            printf("After concatenation:%s\n",str1);
            break;
        case 3:
            strcpy(str2,str1);
            printf("Copied string(str2):%s\n",str2);
            break;
        case 4:
            printf("Comparison result:%d\n",strcmp(str1,str2));
            break;
        default:
            printf("Invalid choice!\n");
    }
}
