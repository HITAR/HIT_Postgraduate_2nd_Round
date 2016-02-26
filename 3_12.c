#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    // int a=12,b=3;
    // printf("%d\n", (float)(a*b)/2);
    int a = 0,len = 0;
    cin>>a;
    char s[100]= {0};
    char str[100]= {0};
    itoa(a,s,10);
    for(int i=0;;i++)
    {
        if(s[i]!='\0')
            len++;
        else break;
    }

    for(int i=0; i<len; i++)
    {
        str[i] = s[len-1-i];
    }
    int res = atoi(str);
    printf("%d",res);
    return 0;
}

