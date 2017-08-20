#include <bits/stdc++.h>
using namespace std;

int arr[6] = {3,6,5,8,1,2};

void reverse(int s,int e)
{
    while(s<e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;s++;e--;
    }
}

int rotate_binary_search(int A[],int n, int target)
{
    /*int lo=0,hi=n-1;
    //find the index of the smallest element
    while(lo<hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid]>arr[hi]) lo = mid+1;
        else hi = mid;
    }
    int min = lo;//lo==hi is the index of the smallest value
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        int realmid = (min+mid)%n;
        if(arr[realmid]==target) return realmid;
        if(arr[realmid]<target) lo = mid+1;
        else hi = mid-1;
    }
    return -1;*/
    int lo=0,hi=n-1;
        // find the index of the smallest value using binary search.
        // Loop will terminate since mid < hi, and lo or hi will shrink by at least 1.
        // Proof by contradiction that mid < hi: if mid==hi, then lo==hi and loop would have been terminated.
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(A[mid]>A[hi]) lo=mid+1;
            else hi=mid;
        }
        // lo==hi is the index of the smallest value and also the number of places rotated.
        int rot=lo;
        lo=0;hi=n-1;
        // The usual binary search and accounting for rotation.
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int realmid=(mid+rot)%n;
            if(A[realmid]==target)return realmid;
            if(A[realmid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return -1;
}


int main() {
	
	int k;
	cin>>k;int n=6;
    reverse(0,k-1);
    reverse(k,n-1);
    reverse(0,n-1);
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<rotate_binary_search(arr,6,2);
	return 0;
}

