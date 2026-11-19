#include<stdio.h>
int main()
{
    int amount,notes;
    printf("Enter amount: ");
    scanf("%d",&amount);
    notes=amount/500; printf("500 notes = %d\n",notes); amount=amount%500;
    notes=amount/200; printf("200 notes = %d\n",notes); amount=amount%200;
    notes=amount/100; printf("100 notes = %d\n",notes); amount=amount%100;
    notes=amount/50; printf("50 notes = %d\n",notes); amount=amount%50;
    notes=amount/20; printf("20 notes = %d\n",notes); amount=amount%20;
    notes=amount/10; printf("10 notes = %d\n",notes); amount=amount%10;
    notes=amount/5; printf("5 notes = %d\n",notes); amount=amount%5;
    notes=amount/2; printf("2 notes = %d\n",notes); amount=amount%2;
    printf("1 notes = %d\n",amount);
    return 0;
}
