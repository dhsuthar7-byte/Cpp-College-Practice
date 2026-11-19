#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int i;
    printf("Enter a string: ");
    scanf(" %99[^\n]",string);
    printf("Characters vertically:\n");
    for(i=0;string[i]!='\0';i++) printf("%c\n",string[i]);
    printf("Reverse characters vertically:\n");
    for(i=strlen(string)-1;i>=0;i--) printf("%c\n",string[i]);
    return 0;
}
