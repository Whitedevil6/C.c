 #include <stdio.h>
 
int main()
{
    int i,j, n,m, a[5][5];
    printf("number order : \n ");
    scanf("%d%d",&m,&n);
    printf("entr matrix ele.. \n" );
    for(i=0;i<m;i++)
         for(j=0;j<n;j++)
          scanf("%d", &a[i][j]);
        for(i=0;i<m;i++)
        { 
           
    for(j=0;j<n;j++)
    printf("%d :", a[i][j]);
      printf("\n");
    }
   }