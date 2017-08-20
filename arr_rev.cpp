#include <bits/stdc++.h>
using namespace std;

int arr[6] = {1,2,3,6,5,8};

void reverse(int s,int e)
{
    while(s<e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;s++;e--;
    }
}

int main() {
	
	int k;
	cin>>k;int n=6;
    reverse(0,k-1);
    reverse(k,n-1);
    reverse(0,n-1);
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
	return 0;
}

