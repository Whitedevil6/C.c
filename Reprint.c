 #include <stdio.h>
 
int main()
{
    int i, n, a[20];
    printf("number ");
    scanf("%d", &n);
    printf("entr array :\n" );
    for(i=0;i<n;i++)
    { 
    printf("ente nun %d:", i+1);
    scanf("%d", &a[i]);
    } 
    for(i=0;i<n;i++) 
    printf("\n ele %d:%d", i+1,a[i]);
}