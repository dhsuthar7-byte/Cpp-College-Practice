#include<stdio.h>
int main()
{
    int number,temp,digit,sum=0;
    printf("Enter a number: "); scanf("%d",&number);
    temp=number;
    while(temp>0){ digit=temp%10; sum=sum+digit*digit*digit; temp=temp/10; }
    if(number==sum) printf("Armstrong number\n");
    else printf("Not an Armstrong number\n");
    return 0;
}
