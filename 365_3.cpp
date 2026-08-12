#include<stdio.h>
int main()
{
    int a,b;
    float c,d,e,f;
    printf("\n\t Enter the $:");
    scanf("%d",&a);
    b=a*48;
    printf("\n\t Rs.%d",b);
    printf("\n\t Enter the Rs.:");
    scanf("%f",&c);
    d=c/48;
    printf("\n\t $ %f",d);
    printf("\n\t Enter the $:");
    scanf("%f",&e);
    f=e*(48/70);
    printf("\n\t %fpound",f);
    return 0;
}
