#include<stdio.h>
#include<string.h>
main()
{ 
    char *s1, *s2; 
    printf("entew str :");
    scanf("%s",s1);
    printf("rever str %s", strrev(s1));
     printf(" \length %d", strlen(s1));
    printf("upp %s", strupr(s1));
    printf("loe %s", strlwr(s1));
    strcpy(s2, s1);
    printf(" copied.. %s", s2);
}
    