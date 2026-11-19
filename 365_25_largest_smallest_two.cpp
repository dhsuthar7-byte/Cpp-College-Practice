#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter two values: ");
    scanf("%f %f",&a,&b);
    if(a>b)
    {
        printf("Largest = %.2f\n",a);
        printf("Smallest = %.2f\n",b);
    }
    else if(b>a)
    {
        printf("Largest = %.2f\n",b);
        printf("Smallest = %.2f\n",a);
    }                                //Largest=(a>b)?a:b;
                                     //Smallest=(a<b)?a:b;
    else
    {
        printf("Both values are equal: %.2f\n",a);
    }
    return 0;
}
