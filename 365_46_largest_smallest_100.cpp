#include<stdio.h>
int main()
{
    int i,num,largest,smallest;
    printf("Enter 100 numbers:\n");
    for(i=1;i<=100;i++)
    {
        scanf("%d",&num);
        if(i==1)
        {
            largest=num;
            smallest=num;
        }
        else if(num>largest)
        {
            largest=num;
        }
        else if(num<smallest)
        {
            smallest=num;
        }
    }
    printf("Largest = %d\nSmallest = %d\n",largest,smallest);
    return 0;
}
