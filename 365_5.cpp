#include<stdio.h>
int main()
{
    double b,kb,mb,gb;
    printf("\n\tEnter the value of byte:");
    scanf("%lf",&b);
    kb=b/1024;
    printf("\n\t%lf",kb);
    mb=b/(1024*1024);
    printf("\n\t%lf",mb);
    gb=b/(1024*1024*1024);
    printf("\n\t%lf",gb);
    return 0;
}