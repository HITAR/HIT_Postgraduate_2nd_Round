#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;


#define N 11 // grade is in [0,10]
#define M 3 // total students

double mean(int a[],int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }
    return n>0? (double)sum/n:-1;
}

void bubblesort(int a[],int n)
{
    for(int i=n-1; i>0; i--)
    {
        for(int j=n-1; j>n-i-1; j--)
        {
            if(a[j]<a[j-1])
            {
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }
}



int median(int a[],int n)
{
    bubblesort(a,n);
    if(n%2==0)
        return (a[n/2]+a[n/2-1])/2;
    else
        return a[n/2];
}

int mode(int a[],int n) //zhong shu
{
    int cnt[N]= {0}; //
    int maxcnt = 0,m_value = 0;
    for(int i=0; i<n; i++)
    {
        cnt[a[i]]++;
    }
    for(int i = 0; i<N; i++)
    {
        if(cnt[i]>maxcnt)
        {
            maxcnt = cnt[i];
            m_value = i;
        }
    }
    return m_value;

}


int main()
{
    int feedback[M] = {0};
	for(int i=0;i<M;i++)
       cin>>feedback[i];
//	int res = mode(feedback,M);
//	double res2 = mean(feedback,M);
//	cout<<res2;
    bubblesort(feedback,M);
    for(int i = 0; i<M; i++)
    {
        cout<<feedback[i]<<" ";
    }
    return 0;

}
