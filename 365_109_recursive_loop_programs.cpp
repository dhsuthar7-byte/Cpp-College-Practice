#include<stdio.h>

int factorial(int);
int sum_of_numbers(int);
int gcd(int,int);
int sum_of_digits(int);
void fibonacci(int,int,int);
void binary(int);

int main()
{
    int choice,number,number2;
    printf("Recursive Programs\n");
    printf("1.Factorial 2.Sum of natural numbers 3.GCD 4.Sum of digits\n");
    printf("5.Fibonacci series 6.Decimal to binary\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        printf("Factorial = %d\n",factorial(number));
    }
    else if(choice==2)
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        printf("Sum = %d\n",sum_of_numbers(number));
    }
    else if(choice==3)
    {
        printf("Enter two numbers: ");
        scanf("%d%d",&number,&number2);
        printf("GCD = %d\n",gcd(number,number2));
    }
    else if(choice==4)
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        printf("Sum of digits = %d\n",sum_of_digits(number));
    }
    else if(choice==5)
    {
        printf("Enter number of terms: ");
        scanf("%d",&number);
        fibonacci(number,1,1);
    }
    else if(choice==6)
    {
        printf("Enter a decimal number: ");
        scanf("%d",&number);
        binary(number);
    }
    return 0;
}

int factorial(int number)
{
    if(number==0) return 1;
    return number*factorial(number-1);
}

int sum_of_numbers(int number)
{
    if(number==0) return 0;
    return number+sum_of_numbers(number-1);
}

int gcd(int number1,int number2)
{
    if(number2==0) return number1;
    return gcd(number2,number1%number2);
}

int sum_of_digits(int number)
{
    if(number==0) return 0;
    return number%10+sum_of_digits(number/10);
}

void fibonacci(int terms,int first,int second)
{
    if(terms==0) return;
    printf("%d ",first);
    fibonacci(terms-1,second,first+second);
}

void binary(int number)
{
    if(number==0) return;
    binary(number/2);
    printf("%d",number%2);
}
