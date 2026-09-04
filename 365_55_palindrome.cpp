#include<stdio.h>
int main()
{
    int number,temp,digit,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    temp=number;
    while(temp>0)
    {
        digit=temp%10;
        reverse=reverse*10+digit;
        temp=temp/10;
    }
    if(number==reverse)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");
    return 0;
}
