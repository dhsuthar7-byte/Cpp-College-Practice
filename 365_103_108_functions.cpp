#include<stdio.h>

long power(int a,int b)
{
    long answer=1;
    int i;
    for(i=1;i<=b;i++)
        answer=answer*a;
    return answer;
}

int leap_year(int year)
{
    if(year%400==0 || (year%4==0 && year%100!=0))
        return 1;
    return 0;
}

long factorial(int number)
{
    if(number<=1)
        return 1;
    return number*factorial(number-1);
}

void swap_value(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Values inside function: %d %d\n",a,b);
}

void minimum_maximum(int array[],int n,int *minimum,int *maximum)
{
    int i;
    *minimum=array[0];
    *maximum=array[0];
    for(i=1;i<n;i++)
    {
        if(array[i]<*minimum) *minimum=array[i];
        if(array[i]>*maximum) *maximum=array[i];
    }
}

float add(float a,float b) { return a+b; }
float subtract(float a,float b) { return a-b; }
float multiply(float a,float b) { return a*b; }
float divide(float a,float b) { return a/b; }

int main()
{
    int choice,a,b,year,n,i,array[100],minimum,maximum;
    float first,second;
    printf("Function Programs\n1.Power 2.Leap year 3.Factorial 4.Swap\n");
    printf("5.Minimum maximum 6.Calculator\nEnter choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter base and power: ");
        scanf("%d%d",&a,&b);
        printf("Answer = %ld\n",power(a,b));
    }
    else if(choice==2)
    {
        printf("Enter year: ");
        scanf("%d",&year);
        if(leap_year(year)==1) printf("Leap year\n");
        else printf("Not a leap year\n");
    }
    else if(choice==3)
    {
        printf("Enter number: ");
        scanf("%d",&n);
        printf("Factorial = %ld\n",factorial(n));
    }
    else if(choice==4)
    {
        printf("Enter two values: ");
        scanf("%d%d",&a,&b);
        swap_value(a,b);
        printf("Original values: %d %d\n",a,b);
    }
    else if(choice==5)
    {
        printf("Enter number of values: ");
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&array[i]);
        minimum_maximum(array,n,&minimum,&maximum);
        printf("Minimum = %d\nMaximum = %d\n",minimum,maximum);
    }
    else if(choice==6)
    {
        printf("Enter two numbers: ");
        scanf("%f%f",&first,&second);
        printf("Addition = %.2f\n",add(first,second));
        printf("Subtraction = %.2f\n",subtract(first,second));
        printf("Multiplication = %.2f\n",multiply(first,second));
        printf("Division = %.2f\n",divide(first,second));
    }
    return 0;
}
