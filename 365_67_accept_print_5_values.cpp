#include<stdio.h>
int main()
{
    int number[5],i;
    printf("Enter 5 values:\n");
    for(i=0;i<5;i++) scanf("%d",&number[i]);
    printf("Values are:\n");
    for(i=0;i<5;i++) printf("%d ",number[i]);
    return 0;
}
