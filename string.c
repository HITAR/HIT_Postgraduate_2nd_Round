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
