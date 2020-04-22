 #include <stdio.h>
 
int main()
{
    int i,j, n, a[20], max,temp, min;
    printf("number ");
    scanf("%d", &n);
    printf("entr array :\n" );
    for(i=0;i<n;i++)
    { 
    printf("ente nun %d:", i+1);
    scanf("%d", &a[i]);
    }
     max=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
       if(a[i]>a[j]) 
        { 
           temp=a[i];
           a[i]=a[j];
            a[j]=temp;
         }
   }
    printf("ascending \n");
    for(i=0;i<n;i++)
    { 
    printf("%d:", a[i]);

    }
     min=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       if(a[i]<a[j]) 
        { 
           temp=a[i];
           a[i]=a[j];
            a[j]=temp;
         }
   }
printf("\n des... \n");
    for(i=0;i<n;i++)
    {
    printf("%d :", a[i]);
   }
    }