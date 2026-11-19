#include <stdio.h>
#include <string.h>

int main(void){
 int q,i,j,a[3][3],*p=&a[0][0],max,min,n; char books[3][100],*names[20],line[300],*word;
 printf("Pointer exercise (1-5): ");scanf("%d",&q);getchar();
 if(q==1){int x[10][10],y[10][10],r,c;printf("rows columns: ");scanf("%d%d",&r,&c);for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&x[i][j]);for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&y[i][j]);for(i=0;i<r;i++){for(j=0;j<c;j++)printf("%d/%d/%d ",x[i][j]+y[i][j],x[i][j]-y[i][j],x[i][j]*y[i][j]);puts("");}}
 else if(q==2){int m[4][4],out[16],k=0,t;for(i=0;i<4;i++)for(j=0;j<4;j++)scanf("%d",&m[i][j]);for(i=0;i<4;i++)for(j=0;j<4;j++)out[k++]=m[i][j];for(i=0;i<15;i++)for(j=0;j<15-i;j++)if(out[j]>out[j+1]){t=out[j];out[j]=out[j+1];out[j+1]=t;}for(i=0;i<16;i++)printf("%d ",out[i]);}
 else if(q==3){for(i=0;i<9;i++)scanf("%d",p+i);max=min=*p;for(i=1;i<9;i++){if(*(p+i)>max)max=*(p+i);if(*(p+i)<min)min=*(p+i);}printf("Largest=%d Smallest=%d",max,min);}
 else if(q==4){for(i=0;i<3;i++){printf("Book %d: ",i+1);fgets(books[i],100,stdin);books[i][strcspn(books[i],"\n")]=0;}for(i=0;i<3;i++)puts(books[i]);}
 else if(q==5){printf("Number of names: ");scanf("%d",&n);getchar();for(i=0;i<n;i++){int count=0,k;printf("Name: ");fgets(line,sizeof line,stdin);line[strcspn(line,"\n")]=0;word=strtok(line," ");while(word&&count<20){names[count++]=word;word=strtok(NULL," ");}for(k=0;k<count-1;k++)printf("%c. ",names[k][0]);if(count)puts(names[count-1]);}}
 return 0;
}
