#include <bits/stdc++.h>
using namespace std;

//my swap function
void sswap(int *a,int *b)
{
    int t = *b;
    *b = *a;
    *a = t;
}

int partition(int arr[],int start,int end)
{
    int i = start-1;
    int pivot = arr[end];
    for(int j=start;j<=end;j++)
    {
        if(arr[j]<=pivot)
        {
            sswap(&arr[++i],&arr[j]);
        }
    }
    return i;
}

void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
        int part = partition(arr,start,end);
        quicksort(arr,start,part-1);
        quicksort(arr,part+1,end);
    }
}

int main() {
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}

