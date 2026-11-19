#include<stdio.h>
#include<string.h>
int main()
{
    char first[200],second[100];
    printf("Enter first string: ");
    scanf("%s",first);
    printf("Enter second string: ");
    scanf("%s",second);
    strcat(first,second);
    printf("Concatenated string = %s\n",first);
    return 0;
}
