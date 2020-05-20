#include<stdio.h>
#include<string.h>
int main()
{ 
    int i,j,len=0;
   char s[1000],s1[100];
    printf("Enter  the string  ");
    scanf("%s", s);
    for(i=0;s[i]!='\0';i++)  
len++;
j=0;
for(i=len-1;i>=0;i--)
    { s1[j]=s[i]
j++;
	} s1[j]='\0';
    printf("reverse = %s\n",s1);
}

    