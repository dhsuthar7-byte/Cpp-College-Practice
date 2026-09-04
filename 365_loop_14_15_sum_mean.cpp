#include<stdio.h>
int main()
{
    int i,n; float value,sum=0;
    printf("Enter 10 values:\n");
    for(i=1;i<=10;i++){ scanf("%f",&value); sum=sum+value; }
    printf("Sum of 10 values = %.2f\nMean = %.2f\n",sum,sum/10);
    sum=0;
    printf("Enter n: "); scanf("%d",&n);
    printf("Enter %d values:\n",n);
    for(i=1;i<=n;i++){ scanf("%f",&value); sum=sum+value; }
    printf("Sum = %.2f\nMean = %.2f\n",sum,sum/n);
    return 0;
}
