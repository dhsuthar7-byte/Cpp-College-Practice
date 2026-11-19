#include<stdio.h>
#include<string.h>
int main()
{
    char first[100],second[100];
    int result;
    printf("Enter first string: ");
    scanf("%s",first);
    printf("Enter second string: ");
    scanf("%s",second);
    result=strcmp(first,second);
    if(result>0) printf("First string is greater\n");
    else if(result<0) printf("Second string is greater\n");
    else printf("Both strings are same\n");
    return 0;
}
