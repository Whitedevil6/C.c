#include<stdio.h>

swap(int *x, int *y)
{ 
    int temp; 
    temp = *x;
     *x=*y; 
    *y = temp;
}
main()
{ 
    int  b,a; 
    printf("entew number \n");
    scanf("%d%d",&a, &b);
     printf("\n before swap a=%d, b=%d \n", a, b);
    swap(&a,&b);
   printf("\n after swap a=%d, b=%d \n", a, b);
}
