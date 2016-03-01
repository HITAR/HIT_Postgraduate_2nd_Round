int CountWord(char *str)
{
	int cnt = 0;
	for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ' && str[i+1]==' ')
            cnt++;
    }
	return cnt+1;
}