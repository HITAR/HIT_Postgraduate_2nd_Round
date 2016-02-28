#define N 10

void YHtriangle(int yh[][N],int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			if(j=0 || i==j)
				a[i][j] = 1;
			else 
				yh[i][j] = yh[i-1][j-1] + yh[i-1][j];

}
