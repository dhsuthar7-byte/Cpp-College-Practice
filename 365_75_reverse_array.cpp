#include<stdio.h>
int main()
{
    int number[5],n,i;
    printf("Enter number of elements (maximum 5): ");
    scanf("%d",&n);
    printf("Enter values:\n");
    for(i=0;i<n;i++) scanf("%d",&number[i]);
    printf("Reverse array:\n");
    for(i=n-1;i>=0;i--) printf("%d ",number[i]);
    return 0;
}
