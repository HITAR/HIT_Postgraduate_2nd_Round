#include <stdio.h>
#include <string.h>

void InsertAlphaToString1(char *s)
{
    char str[NS];
    char *t = str; //pointer t must point to an address in the memory.
    strcpy(t,s);   //so that s can be copied to t
    for(;*t!='\0';t++,s++)
    {
        *s = *t;
        s++;
        *s = ' ';
    }
    *s = '\0';
}

void InsertAlphaToString2(char s[])
{
    char dst[100];
    int i,j;
    strcpy(dst,s);
    for(i=0,j=0; s[i]!='\0'; i++)
    {
        s[j++] = dst[i];
        s[j++] = ' ';

    }
    s[j] = '\0';

}

int main()
{
	 char s[60];
    gets(s);
    InsertAlphaToString2(s);
    puts(s);
    InsertAlphaToString1(s);
    puts(s);
    return 0;
}


