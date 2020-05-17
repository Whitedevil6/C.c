#include<stdio.h>

int fact(int n)
{
    int f;
    if(n==1)
     return 1;
    else 
    f=n*fact(n-1);
    return f;
}
main()
{ 
    int  n; 
    printf("entew number :");
    scanf("%d",&n);
     printf(" \n fact %d", fact(n));
}
    