#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fpw=NULL;
    char line[200];
    fpw=fopen("lines.txt","w");
    if(fpw==NULL)
    {
        printf("File cannot be created.\n");
        return 1;
    }
    printf("Enter one line at a time. Enter END to stop.\n");
    while(1)
    {
        fgets(line,200,stdin);
        if(strcmp(line,"END\n")==0 || strcmp(line,"END")==0)
            break;
        fputs(line,fpw);
    }
    fclose(fpw);
    printf("Data written successfully.\n");
    return 0;
}
