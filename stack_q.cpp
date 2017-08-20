#include <bits/stdc++.h>
using namespace std;

class my_queue
{
    private:
        queue<int> q;
    public:
        void push(int x)
        {
            q.push(x);
            int len = q.size();
            for(int i=0;i<len;i++)
            {
                q.push(q.front());
                q.pop();
            }
        }
        void pop()
        {
            cout<<q.front()<<" ";
            q.pop();
        }
    
};

int main() {
	my_queue q;
	q.push(3);
	q.push(4);
	q.push(5);
	q.pop();
	return 0;
}

