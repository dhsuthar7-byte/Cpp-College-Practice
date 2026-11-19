#include<stdio.h>

int main()
{
    FILE *fpr=NULL;
    char file_name[50],line[200];
    printf("Enter file name: ");
    scanf("%s",file_name);
    fpr=fopen(file_name,"r");
    if(fpr==NULL)
    {
        printf("Sorry, I cannot open the file.\n");
        return 1;
    }
    while(fgets(line,200,fpr)!=NULL)
        printf("%s",line);
    fclose(fpr);
    return 0;
}
