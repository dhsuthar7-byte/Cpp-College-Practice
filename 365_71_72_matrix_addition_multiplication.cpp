#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],sum[10][10],product[10][10];
    int rows,columns,i,j,k;
    printf("Enter rows and columns: ");
    scanf("%d%d",&rows,&columns);
    printf("Enter first matrix:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<columns;j++) scanf("%d",&first[i][j]);
    printf("Enter second matrix:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<columns;j++) scanf("%d",&second[i][j]);
    for(i=0;i<rows;i++)
        for(j=0;j<columns;j++)
            sum[i][j]=first[i][j]+second[i][j];
    printf("Addition of matrices:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++) printf("%d ",sum[i][j]);
        printf("\n");
    }
    for(i=0;i<rows;i++)
        for(j=0;j<columns;j++)
        {
            product[i][j]=0;
            for(k=0;k<columns;k++)
                product[i][j]=product[i][j]+first[i][k]*second[k][j];
        }
    printf("Multiplication of matrices:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++) printf("%d ",product[i][j]);
        printf("\n");
    }
    return 0;
}
