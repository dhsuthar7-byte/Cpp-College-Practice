#include<stdio.h>
#include<ctype.h>
int main()
{
    char string[100];
    int i,a=0,e=0,ii=0,o=0,u=0;
    printf("Enter a string: ");
    scanf(" %99[^\n]",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(tolower(string[i])=='a') a++;
        else if(tolower(string[i])=='e') e++;
        else if(tolower(string[i])=='i') ii++;
        else if(tolower(string[i])=='o') o++;
        else if(tolower(string[i])=='u') u++;
    }
    printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d\n",a,e,ii,o,u);
    return 0;
}
