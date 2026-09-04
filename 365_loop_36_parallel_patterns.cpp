#include<stdio.h>
int main()
{
    int i,j;
    printf("Pattern A\n");
    for(i=1;i<=5;i++) printf("%d %d\n",i,6-i);

    printf("Pattern B\n");
    for(i=1;i<=3;i++)
        for(j=1;j<=2;j++) printf("%d %d\n",i,6-i);
    return 0;
}
