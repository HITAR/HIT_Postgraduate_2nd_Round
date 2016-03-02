void StringReverse(char s[])
{
	int i,j;
	char tmp;
	int len = strlen(s);
	for(j=0,i=len-1;j<i;j++,i--) // not s[j]!='\0'
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}