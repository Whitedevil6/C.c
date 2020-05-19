#include<stdio.h>
#include<string.h>
int main()
{
    int i; char s1[100], s2[1000 ];
    printf("entew str :");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    { s2[i]=s1[i];
    } s2[i]='\0';
    printf(" copied str.. %s",s2);
    

}
    
    