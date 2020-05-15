#include<stdio.h>
main()
{ 
    int i,j,m,n,a[4][4],sum=0; 
    printf("entew mat \n");
    scanf("%d%d",&m,&n);
     printf("ebtre ele... \n");
    for(i=0 ;i<m;i++)
      for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0 ;i<m;i++)
for(j=0;j<n;j++)
sum =sum + a[i][j];
printf("\n sum of mat ele... %d",sum );
}