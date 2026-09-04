#include<stdio.h> //header file
int main()        //function
{                 /*Program to add two number*/
    int c,c1,c2;
    float a,b,c3;
    printf("\n\tEnter the two number:");
    scanf("%f %f",&a,&b);                   //input
    c=a+b;                                  //add 2 nos.
    printf("%f + %f = %d\n",a,b,c);
    c1=a-b;
    printf("%f - %f = %d\n",a,b,c1);
    c2=a*b;
    printf("%f * %f = %d\n",a,b,c2);
    c3=a/b;
    printf("%f / %f = %f\n",a,b,c3);
    return 0;
}
