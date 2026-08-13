#include<stdio.h>
int main()
{
    float c,f;
    printf("\n\tEnter °C:");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("\n\t%f°F",f);
    printf("\n\tEnter °F:");
    scanf("%f",&f);
    c=((5/9)*(f-32));
    printf("\n\t%f°F",c);
    return 0;
}