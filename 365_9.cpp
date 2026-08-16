#include<stdio.h>
int main()
{
    float pi,a,b,c,d,e;
    pi=3.141592;
    printf("\n\t Enter the radius of circle:");
    scanf("%f",&a);
    b=pi*a*a;
    printf("\n\t Area of circle = %f",b);
    printf("\n\n\t Enter the height of tringle :");
    scanf("%f",&c);
    printf("\t Enter the base of tringle :");
    scanf("%f",&d);
    e=(0.5)*c*d;
    printf("\n\t area of trinagle = %f",e);
    return 0;
}