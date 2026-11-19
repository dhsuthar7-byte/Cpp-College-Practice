#include <stdio.h>
typedef struct {char name[50];int age,tests;float average;} Cricketer;
int main(void){Cricketer c[10],t;int i,j;for(i=0;i<10;i++){printf("Name age tests average: ");scanf("%49s%d%d%f",c[i].name,&c[i].age,&c[i].tests,&c[i].average);}for(i=0;i<9;i++)for(j=0;j<9-i;j++)if(c[j].average>c[j+1].average){t=c[j];c[j]=c[j+1];c[j+1]=t;}puts("Sorted by average runs:");for(i=0;i<10;i++)printf("%s %.2f\n",c[i].name,c[i].average);return 0;}
