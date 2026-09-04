#include<stdio.h>
int main()
{
    int i,num,positive=0,negative=0,zero=0;
    printf("Enter 200 values:\n");
    for(i=1;i<=200;i++)
    {
        scanf("%d",&num);
        if(num>0) positive++;
        else if(num<0) negative++;
        else zero++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d\n",positive,negative,zero);
    return 0;
}
