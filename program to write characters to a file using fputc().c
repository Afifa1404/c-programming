#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("charfile.txt","w");
    if(fp==NULL){
        printf("unable to open file!\n");
        return 1;
    }
    fputc('A',fp);
    fputc('\n',fp);
    fputc('B',fp);
    fclose(fp);
    printf("characters return successfully\n");
    return 0;
}
