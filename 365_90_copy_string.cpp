#include<stdio.h>
#include<string.h>
int main()
{
    char first[100],second[100];
    printf("Enter a string: ");
    scanf("%s",first);
    strcpy(second,first);
    printf("Copied string = %s\n",second);
    return 0;
}
