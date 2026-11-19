#include<stdio.h>

struct customer
{
    long account_number;
    char name[50];
    float balance;
};

int main()
{
    struct customer customer[10];
    int number,i,code;
    long account_number;
    float amount;

    printf("Enter number of customers: ");
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        printf("Enter account number, name and balance: ");
        scanf("%ld%s%f",&customer[i].account_number,customer[i].name,&customer[i].balance);
    }
    printf("Customers with balance below Rs. 100:\n");
    for(i=0;i<number;i++)
        if(customer[i].balance<100)
            printf("%ld %s\n",customer[i].account_number,customer[i].name);
    printf("Enter account number: ");
    scanf("%ld",&account_number);
    printf("Enter amount: ");
    scanf("%f",&amount);
    printf("Enter 1 for deposit or 0 for withdrawal: ");
    scanf("%d",&code);
    for(i=0;i<number;i++)
        if(customer[i].account_number==account_number)
            break;
    if(i==number)
        printf("Account not found\n");
    else if(code==1)
    {
        customer[i].balance=customer[i].balance+amount;
        printf("Balance = %.2f\n",customer[i].balance);
    }
    else if(amount>customer[i].balance)
        printf("The balance is insufficient for the specified withdrawal\n");
    else
    {
        customer[i].balance=customer[i].balance-amount;
        printf("Balance = %.2f\n",customer[i].balance);
    }
    return 0;
}
