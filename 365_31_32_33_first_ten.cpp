#include<stdio.h>
int main()
{
    int i;
    printf("First 10 natural numbers:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
    }
    printf("\nFirst 10 odd numbers:\n");
    for(i=1;i<=20;i+=2)            //(i=0;i<10;i++)
    {
        printf("%d ",i);          //("%d",(2*i+1))
    }
    printf("\nFirst 10 even numbers:\n");
    for(i=2;i<=20;i+=2)          //(i=1;i<=10;i++)
    {
        printf("%d ",i);        //("%d",(2*i))
    }
    return 0;
}
