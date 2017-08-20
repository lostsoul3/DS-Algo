#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {12, 11, 10, 5, 7, 2, 6};
	int min,flag=0;
	vector<int> r;
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++)
	{
	    if(arr[i]<arr[i+1])
	    {
	        min = i;r.push_back(arr[min]);flag=1;
	        break;
	    }
	}
	if(!flag)
	    cout<<"-1"<<endl;
	for(int i=min+1;i<n;i++)
	{
	    if(arr[i]>arr[min])
	    {
	        r.push_back(arr[i]);
	        min = i;
	    }
	}
	for(int i=0;i<r.size();i++)
	    cout<<r[i]<<" ";
	return 0;
}

