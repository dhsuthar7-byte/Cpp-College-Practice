#include<stdio.h>
int main()
{
    int number[10],i,j,count;
    printf("Enter 10 values:\n");
    for(i=0;i<10;i++) scanf("%d",&number[i]);
    for(i=0;i<10;i++)
    {
        count=0;
        for(j=0;j<10;j++) if(number[i]==number[j]) count++;
        for(j=0;j<i;j++) if(number[i]==number[j]) break;
        if(j==i) printf("Frequency of %d = %d\n",number[i],count);
    }
    return 0;
}
