#include<stdio.h>
int main()
{
    int matrix[4][4],i,j;
    printf("Enter 4 x 4 matrix:\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++) scanf("%d",&matrix[i][j]);
    printf("Transpose matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++) printf("%d ",matrix[j][i]);
        printf("\n");
    }
    return 0;
}
