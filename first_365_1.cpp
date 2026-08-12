#include<stdio.h> //header file
int main()       //function
{                 /*Program to add two number*/
    int a,b,c,c1,c2;
    float c3;
    printf("\n\tEnter the two number:");
    scanf("%d %d",&a,&b);                   //input
    c=a+b;                                  //add 2 nos.
    printf("%d + %d = %d\n",a,b,c);
    c1=a-b;
    printf("%d - %d = %d\n",a,b,c1);
    c2=a*b;
    printf("%d * %d = %d\n",a,b,c2);
    c3=a/b;
    printf("%d / %d = %f\n",a,b,c3);
    return 0;
}
