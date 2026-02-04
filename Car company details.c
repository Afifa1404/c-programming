#include <stdio.h>
#include <stdlib.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Car
{
    char companyName[50];
    char model[50];
    float price;
    struct Date mfgDate;
};
int main()
{
struct Car cars[4];
for(int i=0;i<4;i++)
    {
        printf("Enter details for Car %d:\n",i+1);
        printf("Company Name: ");
        scanf("%s",cars[i].companyName);
        printf("Model: ");
        scanf("%s",cars[i].model);
        printf("Price: ");
        scanf("%f",&cars[i].price);
        printf("Manufacturing Date (dd mm yyyy): ");
        scanf("%d %d %d",&cars[i].mfgDate.day,&cars[i].mfgDate.month,&cars[i].mfgDate.year);
    }
printf("\n--- Car Details ---\n");
for (int i=0;i<4;i++)
    {
        printf("\nCar %d:\n",i+1);
        printf("Company Name: %s\n",cars[i].companyName);
        printf("Model: %s\n",cars[i].model);
        printf("Price: %.2f\n",cars[i].price);
        printf("Manufacturing Date: %02d-%02d-%04d\n",cars[i].mfgDate.day,cars[i].mfgDate.month,cars[i].mfgDate.year);
    }
    return 0;
}
