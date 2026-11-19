#include<stdio.h>

int main()
{
    FILE *fpr=NULL;
    char file_name[50],previous=' ';
    int character;
    int lines=0,words=0,characters=0,spaces=0;
    printf("Enter file name: ");
    scanf("%s",file_name);
    fpr=fopen(file_name,"r");
    if(fpr==NULL)
    {
        printf("Sorry, I cannot open the file.\n");
        return 1;
    }
    character=fgetc(fpr);
    while(character!=EOF)
    {
        characters++;
        if(character=='\n') lines++;
        if(character==' ') spaces++;
        if(character!=' ' && character!='\n' && character!='\t')
        {
            if(previous==' ' || previous=='\n' || previous=='\t') words++;
        }
        previous=character;
        character=fgetc(fpr);
    }
    fclose(fpr);
    printf("Lines = %d\nWords = %d\nCharacters = %d\nSpaces = %d\n",lines,words,characters,spaces);
    return 0;
}
