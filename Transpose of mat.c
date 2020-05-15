#include<stdio.h>
main()
{ 
    int i,j,m,n, b,a[4][4]; 
    printf("entew mat \n");
    scanf("%d%d",&m, &n);
     printf("ebtre ele... \n");
    for(i=0 ;i<m;i++)
      for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
{    for(j=0;j<m;j++)
   printf("%d", a[j][i]);
   printf("\n");
}
}