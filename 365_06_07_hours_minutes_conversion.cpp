#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("\n\tEnter the hour:");
    scanf("%f",&a);
    b=a*60;
    printf("\n\t %f min",b);
    printf("\n\tEnter the min:");
    scanf("%f",&c);
    d=c/60;
    printf("\n\t %f hr",d);
    return 0;
}
