#include <stdio.h>
#include <string.h>

#define MAX 20

int MinString(char s[][MAX],int n)
{
	char mini[MAX];
	int index = 0;
	strcpy(mini,s[0]);
	for(int i=1;i<n;i++)
	{
		if(strcmp(mini,s[i])>0)
		{
			strcpy(mini,s[i]);
			index = i;
		}
	}
	return index;
}

int main(int argc, char const *argv[])
{
	int _size;
	cout<<"please input the number of countries:"
	cin>>_size;
	char s[MAX][MAX];
	getchar();
	for(int i=0;i<_size;i++)
		gets(s[i]);
	int minm = MinString(s,_size);
	puts(s[minm]);
}



