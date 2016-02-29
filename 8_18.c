#include <stdio.h>

#define NS 51

void FactorialofBigNum(int a[],int n)
{
    a[1] = 1;
    int index = 1;
    // calculate i!: Every bit plus i
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=index; j++)
        {
            a[j] = a[j] * i;
        }
        for(int k=1; k<index; k++)
        {
            if(a[k]>=10)
            {
                //index++;
                a[k+1] += a[k] / 10;
                a[k] = a[k] % 10;
            }
        }
        //when the index + 1?
        while(a[index]>=10 && index<=NS-1)
        {
            a[index+1] = a[index] / 10;
            a[index] = a[index] % 10;
            index++;
        }
        if(index<=NS-1)
        {
            printf("%d! = ",i);
                for(int j = index; j>0; j--)
                    printf("%d",a[j]);
            cout<<endl;
        }
        else
        {
            cout<<"overflow"<<endl;
            exit(1);
        }

    }

}

