#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    float physics;
    float maths;
    float chemistry;
    float total;
};

int main()
{
    struct student student;
    printf("Enter roll number: ");
    scanf("%d",&student.roll);
    printf("Enter name: ");
    scanf("%s",student.name);
    printf("Enter physics marks: ");
    scanf("%f",&student.physics);
    printf("Enter maths marks: ");
    scanf("%f",&student.maths);
    printf("Enter chemistry marks: ");
    scanf("%f",&student.chemistry);
    student.total=student.physics+student.maths+student.chemistry;
    printf("Roll number = %d\n",student.roll);
    printf("Name = %s\n",student.name);
    printf("Physics = %.2f\n",student.physics);
    printf("Maths = %.2f\n",student.maths);
    printf("Chemistry = %.2f\n",student.chemistry);
    printf("Total = %.2f\n",student.total);
    return 0;
}
