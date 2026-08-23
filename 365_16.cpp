#include<stdio.h>
int main()
{
    float a,b,c,largest,smallest;
    printf("Enter three values: ");
    scanf("%f %f %f",&a,&b,&c);
    if (a>=b && a>=c)
        largest=a;
    else if (b>=a && b>=c)
        largest=b;
    else
        largest=c;

    if (a<=b && a<=c)
        smallest=a;
    else if (b<=a && b<=c)
        smallest=b;
    else
        smallest=c;
    printf("Largest = %.2f\n",largest);
    printf("Smallest = %.2f\n",smallest);
    return 0;
}
