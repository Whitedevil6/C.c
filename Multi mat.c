#include<stdio.h>
main()
{ 
    int i,j,m, k,a[4][4], b[4][4],c[4][4]; 
    printf("entew mat \n");
    scanf("%d",&m);
     printf("ebtre ele... \n");
    for(i=0 ;i<m;i++)
      for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
printf("entr 2 ele mat... \n");
for(i=0 ;i<m;i++)
for(j=0;j<m;j++)
 scanf("%d", &b[i][j]);
for(i=0 ;i<m;i++)
for(j=0;j<m;j++) 
{
    c[i][j]=0;
     for(k=0;k<m;k++)
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
   printf("resyky mat \n");
   for(i=0;i<m;i++)
{ 
   for(j=0;j<m;j++)
   printf("%d",c[i][j]);
    printf("\n");
}
}