#include <iostream>
#include <cstdio>

using namespace std;

/** Great Common Divisor
 *  solution: Euclid algorithm
 */

int gcd(int &a,int &b)
{
	int res = a % b ;
	if(res==0)
		return b;
	else
		res = gcd(b,res);
}


int main()
{
	int a=50,b=15;
	int res = gcd(a,b);
	cout<<res;
	return 0;
}