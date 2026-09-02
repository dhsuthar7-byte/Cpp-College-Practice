#include<stdio.h>
int main()
{
    int n,m=0,sum=0;
    printf("Enter N:");
    scanf("%d",&n);
    /*while(m<n)
    {
        m=m+1;
        sum=sum+m;
    };
    printf("Sum : %d\n",sum);
    */
    for(m=0;m<=n;m++)
    {
        sum=sum+m;
    }
    printf("Sum : %d\n",sum);

    int b;
    for(b=1;b<=10;b++)
    {
        printf("%d\n",b);
    };
    int i;
    for(i=1;i<=10;i+=2)
    {
        printf("%d\n",i);
    };
    int a;
    for(a=0;a<=10;a+=2)
    {
        printf("%d\n",a);
    };
    return 0;
}
