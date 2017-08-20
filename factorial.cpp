#include <bits/stdc++.h>
using namespace std;

int factorial(vector<int> v,int n)
{
    if(n==0 || n==1)
    {
        v[n]=1;
        return v[n];
    }
    else
    {
        v[n] = n*factorial(v,n-1);
        return v[n];
    }
}

int main() {
	int n;
	n=8;
	vector<int> v(n+1,0);
	cout<<factorial(v,n);
	return 0;
}

