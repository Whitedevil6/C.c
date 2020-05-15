#include<stdio.h>
main()
{ 
    int i,j,m,a[4][4],sum=0; 
    printf("entew mat \n");
    scanf("%d",&m);
     printf("ebtre ele... \n");
    for(i=0 ;i<m;i++)
      for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
for(i=0 ;i<m;i++)
for(j=0;j<m;j++)
 if(i==j)
sum =sum + a[i][j];
printf("\n sum of mat ele... %d",sum );
}