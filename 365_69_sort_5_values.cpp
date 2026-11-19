#include<stdio.h>
int main()
{
    int number[5],i,j,temp;
    printf("Enter 5 values:\n");
    for(i=0;i<5;i++) scanf("%d",&number[i]);
    for(i=0;i<4;i++)
        for(j=0;j<4-i;j++)
            if(number[j]>number[j+1])
            {
                temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
    printf("Ascending order:\n");
    for(i=0;i<5;i++) printf("%d ",number[i]);
    return 0;
}
