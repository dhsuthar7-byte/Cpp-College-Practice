#include <stdio.h>
typedef struct {int roll;char name[50];float physics,maths,chemistry,total;} StudentData;
int main(void){StudentData s;printf("Roll name physics maths chemistry: ");scanf("%d %49s %f %f %f",&s.roll,s.name,&s.physics,&s.maths,&s.chemistry);s.total=s.physics+s.maths+s.chemistry;printf("Roll: %d\nName: %s\nPhysics: %.2f\nMaths: %.2f\nChemistry: %.2f\nTotal: %.2f\n",s.roll,s.name,s.physics,s.maths,s.chemistry,s.total);return 0;}
