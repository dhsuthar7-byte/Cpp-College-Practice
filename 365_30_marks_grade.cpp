#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,total,average;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f",&sub1,&sub2,&sub3);

    total=sub1+sub2+sub3;
    average=total/3;

    printf("Total = %.2f\n",total);
    printf("Average = %.2f\n",average);

    if (sub1<35 || sub2<35 || sub3<35)
        printf("Result: Fail (scored less than 35 in a subject)\n");

    else if (average>=70)
        printf("Result: Distinction\n");

    else if (average>=60)
        printf("Result: First Class\n");

    else if (average>=50)
        printf("Result: Second Class\n");

    else if (average>=35)
        printf("Result: Third Class\n");

    else
        printf("Result: Fail\n");

    return 0;
}
