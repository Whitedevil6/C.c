#include<stdio.h>

fibbo(int pre, int cur, int x)
{
       int temp;
    if(x==2)
    {
    exit(0);
    }
     temp=cur;
    cur=pre+cur;
    pre = temp;
    printf("%d", cur);
    fibbo(pre, cur,x-1);
}
main()
{ 
    int  n, pre=0, cur=1; 
    printf("entew number :");
    scanf("%d",&n);
     printf(" %d%d", pre, cur);
    fibbo(pre, cur, n);
}
    