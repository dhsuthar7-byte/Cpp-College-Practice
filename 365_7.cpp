#include<stdio.h>
int main()
{
    float i,p,r,n;
    printf("\n\tEnter the P(Initial money):");
    scanf("%f",&p);
    printf("\n\tEnter the R(Interest rate in decimal);");
    scanf("%f",&r);
    printf("\n\tEnter the N(Duration or number of time periods):");
    scanf("%f",&n);
    i=(p*r*n)/100;
    printf("\n\tNow interst is %f",i);
    return 0;
}