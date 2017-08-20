#include <bits/stdc++.h>
using namespace std;

void powerset(vector<int> arr, int n)
{
    int p_set_size = pow(2,n);
    int counter,j;
    for(counter=0;counter<p_set_size;counter++)
    {
        for(j=0;j<n;j++)
        {
            if(counter & (1<<j))
            {
                cout<<arr[j];
            }
        }
        cout<<endl;
    }
}

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	int n = v.size();
	powerset(v,n);
	return 0;
}

