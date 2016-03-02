char* MyStrcpy(char *dst,char *src)
{
	int i = 0;
	while(src[i]!='\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst; // head-point is still point to the head.
}

int MyStrlen(char *s)
{
	int i = 0;
	while(s[i]!='\0')
		i++;
	return i;
}

void ar_strcat(char dst[],char src[])
{
	int len = strlen(dst);
	int i;
	for(i=0;src[i]!='\0';i++)
		dst[len+i] = src[i];
    dst[len+i] = '\0';
}

char* MyStrcat(char *dst,char *src)
{
	char *ptr = dst; // store the head address
	while(*dst!='\0')
        dst++;
	while(*src!='\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
    return ptr;
}
