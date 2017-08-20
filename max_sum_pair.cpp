//Maximum sum pair 

#include <iostream>
using namespace std;

int main() {
	int arr[]={4,5,1,6,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int first = arr[0]>arr[1]?arr[0]:arr[1];
	int second = arr[0]>arr[1]?arr[1]:arr[0];
	for(int i=2;i<n;i++)
	{
	    if(first<arr[i])
	        first = arr[i];
	   else 
	   {
	       if(second<arr[i])
	        second = arr[i];
	   }
	}
	cout<<first<<" "<<second;
	return 0;
}

