#include<stdio.h>
int main()
{
    int number,i,sum=0;
    printf("Enter a number: "); scanf("%d",&number);
    for(i=1;i<=number/2;i++) if(number%i==0) sum=sum+i;
    if(sum==number) printf("Perfect number\n");
    else printf("Not a perfect number\n");
    return 0;
}
