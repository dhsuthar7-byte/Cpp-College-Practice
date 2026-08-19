#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the value of A:");
    scanf("%d",&a);
    printf("\nEnter the value of B:");
    scanf("%d",&b);
    printf("\nEnter the value of C:");
    scanf("%d",&c);
    if((a>b)&&(a>c))
        printf("\n A=%d is largest.",a);
    else if((b>a)&&(b>c))
        printf("\n B=%d is largest.",b);
    else
        printf("\n C=%d is largest.",c);
    return 0;
}
