#include<stdio.h>
#include<string.h>
int main()
{
    char first[100],second[100];
    int result;
    printf("Enter first string: "); scanf(" %99[^\n]",first);
    printf("Enter second string: "); scanf(" %99[^\n]",second);
    result=strcmp(first,second);
    if(result>0) printf("First string is greater\n");
    else if(result<0) printf("Second string is greater\n");
    else printf("Both strings are same\n");
    return 0;
}
