#include<stdio.h>
#include<string.h>
int main()
{ 
    int i=0,vow=0;
    char s[100];
    printf("entew sfr");
    scanf("%s", s);
    for(i=0;s[i]!=0;i++)
    {
     if((s[i]=='A')||(s[i]=='E')||(s[i]=='I'))
    vow++;
    }
    printf("\n voe %d", vow);
    }