#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n: "); scanf("%d",&n);
    printf("Natural numbers:\n");
    for(i=1;i<=n;i++) printf("%d ",i);
    printf("\nOdd numbers:\n");
    for(i=1;i<=2*n;i+=2) printf("%d ",i);
    printf("\nEven numbers:\n");
    for(i=2;i<=2*n;i+=2) printf("%d ",i);
    return 0;
}
