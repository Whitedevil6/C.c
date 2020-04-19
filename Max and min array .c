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
    max=min=a[0];
    for(i=0;i<n;i++)
    { 
    if(a[i]>max)
    max=a[i];
    if(a[i]<min)
    min=a[i];
    }
    printf("\n min %d", min);
    printf("\n max %d", max);
   }