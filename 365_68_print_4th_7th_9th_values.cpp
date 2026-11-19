#include<stdio.h>
int main()
{
    int number[10],i;
    printf("Enter 10 values:\n");
    for(i=0;i<10;i++) scanf("%d",&number[i]);
    printf("4th value = %d\n",number[3]);
    printf("7th value = %d\n",number[6]);
    printf("9th value = %d\n",number[8]);
    return 0;
}
