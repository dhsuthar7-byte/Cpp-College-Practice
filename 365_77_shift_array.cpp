#include<stdio.h>
int main()
{
    int number[10],result[10],i,position;
    char side;
    printf("Enter 10 values:\n");
    for(i=0;i<10;i++) scanf("%d",&number[i]);
    printf("Enter shift position: ");
    scanf("%d",&position);
    printf("Enter L for left or R for right: ");
    scanf(" %c",&side);
    for(i=0;i<10;i++) result[i]=0;
    if(side=='R' || side=='r')
        for(i=0;i<10-position;i++) result[i+position]=number[i];
    else
        for(i=position;i<10;i++) result[i-position]=number[i];
    printf("Shifted array:\n");
    for(i=0;i<10;i++) printf("%d ",result[i]);
    return 0;
}
