#include<stdio.h>
int main()
{
    int n,i,natural=0,odd=0,even=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        natural=natural+i;
    }
    for(i=1;i<=2*n;i+=2)
    {
        odd=odd+i;
    }
    for(i=2;i<=2*n;i+=2)
    {
        even=even+i;
    }
    printf("Sum of natural numbers = %d\n",natural);
    printf("Sum of odd numbers = %d\n",odd);
    printf("Sum of even numbers = %d\n",even);
    return 0;
}
