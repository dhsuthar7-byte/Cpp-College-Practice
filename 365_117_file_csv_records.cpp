#include<stdio.h>

int main()
{
    FILE *fpw=NULL;
    int roll_number;
    char name[50],answer='y';
    fpw=fopen("students.csv","w");
    if(fpw==NULL)
    {
        printf("File cannot be created.\n");
        return 1;
    }
    fprintf(fpw,"Roll No,Name\n");
    while(answer=='y' || answer=='Y')
    {
        printf("Enter roll number: ");
        scanf("%d",&roll_number);
        printf("Enter name: ");
        scanf("%s",name);
        fprintf(fpw,"%d,%s\n",roll_number,name);
        printf("Do you want to enter more records (y/n): ");
        scanf(" %c",&answer);
    }
    fclose(fpw);
    printf("Data saved in students.csv\n");
    return 0;
}
