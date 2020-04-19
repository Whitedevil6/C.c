 #include <stdio.h>
 
int main()
{
    int i, n, a[20], max, min;
    printf("number ");
    scanf("%d", &n);
    printf("entr array :\n" );
    for(i=0;i<n;i++)
    { 
    printf("ente nun %d:", i+1);
    scanf("%d", &a[i]);
    } 
    printf("\n\n neg ele ");
    for(i=0;i<n;i++)
     if(a[i]<0) 
    printf("\n%d", a[i]);
    printf("\n\n pos ele : \n");
    for(i=0;i<n;i++)
     if(a[i]>0)
     printf("\n %d", a[i]);
    }