/*
A child can run 1,2,3 steps at a time. count no. of ways a child can run.
*/

#include <bits/stdc++.h>
using namespace std;

int countways(int n,vector<int> m)
{
    if(n<0)
        return 0;
    else if(n==0)
        return 1;
    else if(m[n]>-1)
        return m[n];
    else
    {
        m[n] = countways(n-1,m)+countways(n-2,m)+countways(n-3,m);
        return m[n];
    }
}

int main() {
	int n;
	cin>>n;
	vector<int> m;
	for(int i=0;i<=n;i++)
	{
		m.push_back(-1);
	}
	cout<<countways(n,m);
	return 0;
}

