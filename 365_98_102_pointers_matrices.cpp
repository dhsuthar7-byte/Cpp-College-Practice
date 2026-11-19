#include<stdio.h>

int main()
{
    int choice,i,j;

    printf("Pointer exercise (1-5): ");
    scanf("%d",&choice);

    if(choice==1)
    {
        int first[10][10],second[10][10],rows,columns;
        printf("Enter rows and columns: ");
        scanf("%d%d",&rows,&columns);
        printf("Enter first matrix:\n");
        for(i=0;i<rows;i++)
            for(j=0;j<columns;j++)
                scanf("%d",&first[i][j]);
        printf("Enter second matrix:\n");
        for(i=0;i<rows;i++)
            for(j=0;j<columns;j++)
                scanf("%d",&second[i][j]);
        printf("Addition / Subtraction / Multiplication:\n");
        for(i=0;i<rows;i++)
        {
            for(j=0;j<columns;j++)
                printf("%d/%d/%d ",first[i][j]+second[i][j],first[i][j]-second[i][j],first[i][j]*second[i][j]);
            printf("\n");
        }
    }
    else if(choice==2)
    {
        int matrix[4][4],array[16],temp,index=0;
        printf("Enter 4 x 4 matrix:\n");
        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
                scanf("%d",&matrix[i][j]);
        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
            {
                array[index]=matrix[i][j];
                index++;
            }
        for(i=0;i<15;i++)
            for(j=0;j<15-i;j++)
                if(array[j]>array[j+1])
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
        printf("Sorted values:\n");
        for(i=0;i<16;i++)
            printf("%d ",array[i]);
    }
    else if(choice==3)
    {
        int array[9],*pointer,largest,smallest;
        pointer=array;
        printf("Enter 9 values:\n");
        for(i=0;i<9;i++)
            scanf("%d",pointer+i);
        largest=*pointer;
        smallest=*pointer;
        for(i=1;i<9;i++)
        {
            if(*(pointer+i)>largest)
                largest=*(pointer+i);
            if(*(pointer+i)<smallest)
                smallest=*(pointer+i);
        }
        printf("Largest = %d\nSmallest = %d\n",largest,smallest);
    }
    else if(choice==4)
    {
        char books[3][100];
        for(i=0;i<3;i++)
        {
            printf("Enter book %d: ",i+1);
            scanf("%s",books[i]);
        }
        printf("Book names:\n");
        for(i=0;i<3;i++)
            printf("%s\n",books[i]);
    }
    else if(choice==5)
    {
        char first[20],middle[20],last[20];
        printf("Enter first name: ");
        scanf("%s",first);
        printf("Enter middle name: ");
        scanf("%s",middle);
        printf("Enter last name: ");
        scanf("%s",last);
        printf("Initials = %c. %c. %s\n",first[0],middle[0],last);
    }
    else
        printf("Invalid choice\n");

    return 0;
}
