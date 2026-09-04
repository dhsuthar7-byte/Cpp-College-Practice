#include<stdio.h>
int main()
{
    int i,sum=0;
    
    printf("Numbers divisible by 5:\n");

    for(i=1;i<=100;i++) 
        if(i%5==0) 
            printf("%d ",i);
    
    for(i=1;i<=100;i++) 
        if(i%3==0) 
            sum=sum+i;
    
    printf("\nSum of numbers divisible by 3 = %d\n",sum);

    return 0;
}
