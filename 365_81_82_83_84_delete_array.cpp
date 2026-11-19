#include<stdio.h>
int main()
{
    int number[20],n,i,position,value;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter values:\n");
    for(i=0;i<n;i++) scanf("%d",&number[i]);
    for(i=0;i<n-1;i++) number[i]=number[i+1];
    n--;
    printf("Enter position to delete: ");
    scanf("%d",&position);
    for(i=position-1;i<n-1;i++) number[i]=number[i+1];
    n--;
    n--;
    printf("Enter value to delete: ");
    scanf("%d",&value);
    for(position=0;position<n;position++) if(number[position]==value) break;
    if(position<n)
    {
        for(i=position;i<n-1;i++) number[i]=number[i+1];
        n--;
    }
    printf("Array after deletion:\n");
    for(i=0;i<n;i++) printf("%d ",number[i]);
    return 0;
}
