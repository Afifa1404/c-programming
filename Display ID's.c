#include <stdio.h>
#include <stdlib.h>
char name[20]="AFIFA";
int main()
{
    long long aadharID;
    char panID[15];
    printf("Enter Aadhar ID:");
    scanf("%lld",&aadharID);
    printf("Enter Pan ID:");
    scanf("%s",panID);
    printf("Name:%s\n",name);
    printf("Aadhaar ID:%lld\n",aadharID);
    printf("PAN ID:%s",panID);
    return 0;
}
