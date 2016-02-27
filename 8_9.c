#include <stdio.h>

int mean(int a[],int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += a[i];
	}
	return n>0? sum/n:-1;
}

int median(int a[],int n)
{
	numsort(a,n);
	if(n%2==0)
		return (a[n/2]+a[n/2-1])/2;
	else
		return a[n/2];
}

int mode(int a[],int n) //zhong shu
{
	int cnt[n]={0};
	for(int i=0;i<n;i++)
	{
		cnt[a[i]]++;
	}
	
}


int main()
{
	int feedback[40] = {0};

	return 0;
}
