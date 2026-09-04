#include<stdio.h>
int main()
{
    int n,i,first=1,second=1,next;
    printf("Enter n: "); scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",first);
        next=first+second; first=second; second=next;
    }
    return 0;
}
