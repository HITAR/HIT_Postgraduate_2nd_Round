#include <stdio.h>
#include <string.h>

void PrintNum(char s[],char table[][10])
{
	int pos = 0;
	bool flag = false;
	for(int i=0;i<7 && !flag;i++)
	{
		if(strcmp(table[i],s)==0)
		{
			pos = i;
			flag = true;
		}
	}
	if(flag)
        printf("Table[%d] is %s",pos,table[pos]);
    else
        printf("Not find.\n");

}



int main()
{
	char table[][10] = {"Sunday","Monday","Tuesday",
	"Wednesday","Thursday","Friday","Saturday"};
	char s[10];
	printf("Please enter a string:");
	scanf("%s",s);
    PrintNum(s,table);
	return 0;
}