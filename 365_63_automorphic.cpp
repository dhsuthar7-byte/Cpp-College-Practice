#include<stdio.h>
int main()
{
    int number,temp,place=1,square;
    printf("Enter a number: "); scanf("%d",&number);
    temp=number;
    while(temp>0){ place=place*10; temp=temp/10; }
    square=number*number;
    if(square%place==number) printf("Automorphic number\n");
    else printf("Not an automorphic number\n");
    return 0;
}
