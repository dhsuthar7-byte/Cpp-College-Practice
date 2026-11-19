#include<stdio.h>

struct cricketer
{
    char name[50];
    int age;
    int test_matches;
    float average_runs;
};

int main()
{
    struct cricketer player[10],temp;
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter name, age, test matches and average runs: ");
        scanf("%s%d%d%f",player[i].name,&player[i].age,&player[i].test_matches,&player[i].average_runs);
    }
    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
            if(player[j].average_runs>player[j+1].average_runs)
            {
                temp=player[j];
                player[j]=player[j+1];
                player[j+1]=temp;
            }
    printf("Cricketers sorted by average runs:\n");
    for(i=0;i<10;i++)
        printf("%s %.2f\n",player[i].name,player[i].average_runs);
    return 0;
}
