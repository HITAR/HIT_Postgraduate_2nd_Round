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


void insertsort(int a[],int n)
{
    int j = 0;
    for(int i=1; i<n; i++)
    {
        int tmp = a[i];
        for(j=i-1; j>=0 && tmp<a[j]; j--)
            a[j+1] = a[j];
        a[j+1] = tmp;
    }
}

void selectsort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int mini = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[mini])
                mini = j;
        }
        if(mini!=i)
            swap(a[i],a[mini]);
    }
}


int partition(int a[],int low,int high)
{
    int pivot = a[low];
    while(low<high)
    {
        while(low<high && a[high]>=pivot)
            high--;
        a[low] = a[high];
        while(low<high && a[low]<=pivot)
            low++;
        a[high] = a[low];
    }
    a[low] = pivot;
    return low;
}

void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot = partition(a,low,high);
        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);
    }
}


