#include<stdio.h>
#include<string.h>
int main()
{
    char first[200],second[100];
    printf("Enter first string: "); scanf(" %199[^\n]",first);
    printf("Enter second string: "); scanf(" %99[^\n]",second);
    strcat(first,second);
    printf("Concatenated string = %s\n",first);
    return 0;
}
