#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("\n\t For square Enter the side:");
    scanf("%d",&a);
    b=4*a;
    c=a*a;
    printf("\n\t Perimeter = %d & Area = %d",b,c);
    printf("\n\n\t For Rectangle Enter the first side:");
    scanf("%d",&d);
    printf("\t For Rectangle Enter the second side:");
    scanf("%d",&e);
    f=2*(d+e);
    g=d*e;
    printf("\n\t Perimeter = %d & Area = %d",f,g);
    return 0;
}