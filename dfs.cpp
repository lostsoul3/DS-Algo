#include <bits/stdc++.h>
using namespace std;

void dfs(map<int,vector<int>> g,int start)
{
    stack<int> s;int visited[g.size()]={0};vector<int> r;
    s.push(start);
    visited[start]++;
    while(!s.empty())
    {
        int top = s.top();r.push_back(top);
        s.pop();
        visited[top]++;
        for(int i=0;i<g[top].size();i++)
        {
            if(!visited[g[top][i]])
            {
                s.push(g[top][i]);
                visited[g[top][i]]++;
            }
        }
    }
    for(int i=0;i<r.size();i++)
    {
    	cout<<r[i]<<" ";
    }
    
}

int main() {
	map<int,vector<int>> g;
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    g[a].push_back(b);
	}
	dfs(g,0);
	return 0;
}

