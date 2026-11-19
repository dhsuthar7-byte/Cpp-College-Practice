#include<stdio.h>
int main()
{
    int number[20],n,i,value;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter values:\n");
    for(i=0;i<n;i++) scanf("%d",&number[i]);
    printf("Enter value to search: ");
    scanf("%d",&value);
    for(i=0;i<n;i++) if(number[i]==value) break;
    if(i<n) printf("Value found at position %d\n",i+1);
    else printf("Value not found\n");
    return 0;
}
