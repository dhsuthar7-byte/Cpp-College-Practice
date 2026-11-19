#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char string[100],lower[100],upper[100],toggle[100];
    int i;
    printf("Enter a string: ");
    scanf("%s",string);
    printf("Length = %d\n",(int)strlen(string));
    strcpy(lower,string);
    strcpy(upper,string);
    strcpy(toggle,string);
    for(i=0;lower[i]!='\0';i++) lower[i]=tolower(lower[i]);
    for(i=0;upper[i]!='\0';i++) upper[i]=toupper(upper[i]);
    for(i=0;toggle[i]!='\0';i++)
    {
        if(islower(toggle[i])) toggle[i]=toupper(toggle[i]);
        else if(isupper(toggle[i])) toggle[i]=tolower(toggle[i]);
    }
    printf("Lower case = %s\n",lower);
    printf("Upper case = %s\n",upper);
    printf("Toggle case = %s\n",toggle);
    return 0;
}
