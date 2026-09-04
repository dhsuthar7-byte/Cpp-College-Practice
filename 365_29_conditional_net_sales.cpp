#include<stdio.h>

int main()
{
    float grosssales,discount,netsales;

    printf("Enter gross sales: ");
    scanf("%f",&grosssales);

    if (grosssales>20000)
        discount=0.15*grosssales;

    else if (grosssales>10000)
        discount=0.10*grosssales;

    else
        discount=0.05*grosssales;

    netsales=grosssales-discount;

    printf("Discount = %.2f\n",discount);
    printf("Net Sales = %.2f\n",netsales);

    return 0;
}