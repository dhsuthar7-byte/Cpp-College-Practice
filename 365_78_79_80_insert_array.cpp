#include<stdio.h>
int main()
{
    int number[20],n,i,value,position;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter values:\n");
    for(i=0;i<n;i++) scanf("%d",&number[i]);
    printf("Enter value for beginning: ");
    scanf("%d",&value);
    for(i=n;i>0;i--) number[i]=number[i-1];
    number[0]=value;
    n++;
    printf("Enter position and value: ");
    scanf("%d%d",&position,&value);
    for(i=n;i>=position;i--) number[i]=number[i-1];
    number[position-1]=value;
    n++;
    printf("Enter value for last position: ");
    scanf("%d",&value);
    number[n]=value;
    n++;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++) printf("%d ",number[i]);
    return 0;
}
