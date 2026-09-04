#include<stdio.h>
int main()
{
    int number,temp,digit,count=0,sum=0,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    temp=number;
    printf("Separate digits in reverse order: ");
    while(temp>0)
    {
        digit=temp%10;
        printf("%d ",digit);
        count++;
        sum=sum+digit;
        reverse=reverse*10+digit;
        temp=temp/10;
    }
    printf("\nNumber of digits = %d\n",count);
    printf("Sum of digits = %d\n",sum);
    printf("Reverse number = %d\n",reverse);
    return 0;
}
