#include<stdio.h>
int main()
{
    int number,i,count,sum=0,total=0;
    printf("Prime numbers between 1 and 500:\n");
    for(number=2;number<=500;number++)
    {
        count=0;
        for(i=1;i<=number;i++) if(number%i==0) count++;
        if(count==2){ printf("%d ",number); sum=sum+number; total++; }
    }
    printf("\nSum = %d\nNumber of primes = %d\n",sum,total);
    return 0;
}
