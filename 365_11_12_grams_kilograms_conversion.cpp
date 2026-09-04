#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("\n\tEnter grams:");
    scanf("%f",&a);
    b=a/1000;
    printf("\n\tKg=%f",b);
    printf("\n\tEnter Kg:");
    scanf("%f",&a);
    b=a*1000;
    printf("\n\tGram=%f",b);
    return 0;
}