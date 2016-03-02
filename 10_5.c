void DeleteAlphaFromWord_v1(char *s,char c)
{
    char *ptr1 = s,*ptr2=s;
    for(; *ptr1!='\0'; ptr1++)
    {
        if(*ptr1!=c)
        {
            *ptr2 = *ptr1;
            ptr2++;
        }
    }
    *ptr2 = '\0';
}

void DeleteAlphaFromWord_v2(char s[],char c)
{
   int i,j;
   for(i=0,j=0;s[j]!='\0';j++)
   {
       if(s[j]!=c)
       {
           s[i++] = s[j];
       }
   }
   s[i] = '\0';
}