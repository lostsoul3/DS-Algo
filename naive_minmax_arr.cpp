#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> r;
	int i=0,j=n-1;
	while(i<j)
	{
	    r.push_back(arr[j]);
	    r.push_back(arr[i]);
	    i++;j--;
	}
	if(i==j)
	    r.push_back(arr[i]);
	for(int i=0;i<r.size();i++)
	    cout<<r[i]<<" ";
	return 0;
}

