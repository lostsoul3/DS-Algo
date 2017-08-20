#include <bits/stdc++.h>
using namespace std;

class disjoint_set
{
    private:
        unordered_map<char,char> parent;
        unordered_map<char,int> rank;//to limit the depth
    public:
        disjoint_set()             //constructor
        {
            char universe = {'a','b','c','d','e'};
            for(char x:universe)
            {
                parent[x] = x;
                rank[x]=0;
            }
            parent['d'] = 'b';
            rank['b'] = 1;
        }
        char find(char item)
        {
            if(parent[item]==item)
                return item;
            else
                return find(parent[item]);
        }
        void union_set(char set_1,char set_2)
        {
            if(rank[set_1]>rank[set_2])
                parent[set_2] = set_1;
            else
                parent[set_1] = set_2;
        }
};

int main() {
	// your code goes here
	return 0;
}

