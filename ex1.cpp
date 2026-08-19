#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the value of A:");
    scanf("%d",&a);
    printf("\nEnter the value of B:");
    scanf("%d",&b);
    if(a>b)
        printf("\nA>B so A is largest and B is smallest");
    else if(a<b)
    {
        printf("B>A so B is largest and A is smallest");
    }
    else
        printf("\nA = B");
    return 0;
}
