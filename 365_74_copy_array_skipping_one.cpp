#include<stdio.h>
int main()
{
    int first[5],second[10]={0},i,j=0;
    printf("Enter 5 values:\n");
    for(i=0;i<5;i++) scanf("%d",&first[i]);
    for(i=0;i<5;i++)
    {
        second[j]=first[i];
        j=j+2;
    }
    printf("Second array:\n");
    for(i=0;i<10;i++) printf("%d ",second[i]);
    return 0;
}
