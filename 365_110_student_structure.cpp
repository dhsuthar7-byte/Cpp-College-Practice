#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

int main()
{
    struct student student[10];
    int number,i,roll;

    printf("Enter number of students: ");
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        printf("Enter roll number, name, course, major and minor: ");
        scanf("%d%s%s%s%s",&student[i].roll,student[i].name,student[i].course,student[i].major,student[i].minor);
    }
    printf("Student names:\n");
    for(i=0;i<number;i++)
        printf("%s\n",student[i].name);
    printf("Enter roll number to search: ");
    scanf("%d",&roll);
    for(i=0;i<number;i++)
        if(student[i].roll==roll)
            break;
    if(i<number)
        printf("%d %s %s %s %s\n",student[i].roll,student[i].name,student[i].course,student[i].major,student[i].minor);
    else
        printf("Student not found\n");
    return 0;
}
