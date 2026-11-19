#include<stdio.h>
#include<string.h>
int main()
{
    char string[100],reverse[100],temp;
    int i;
    printf("Enter a string: ");
    scanf("%s",string);
    strcpy(reverse,string);
    for(i=0;i<(int)strlen(reverse)/2;i++)
    {
        temp=reverse[i];
        reverse[i]=reverse[strlen(reverse)-1-i];
        reverse[strlen(reverse)-1-i]=temp;
    }
    printf("Reverse string = %s\n",reverse);
    if(strcmp(string,reverse)==0) printf("Palindrome string\n");
    else printf("Not a palindrome string\n");
    return 0;
}
