#include <bits/stdc++.h>
using namespace std;

class my_queue
{
    private:
        stack <int> enquestack, dequestack;
    public:
        void push(int x)
        {
            if(dequestack.empty())  
                dequestack.push(x);
            else
            {
                enquestack.push(x);
            }
        }
        int pop()
        {
            if(dequestack.size()>1)  
            {
                int top = dequestack.top();
                dequestack.pop();
                return top;
            }
            int curr = dequestack.top();
            dequestack.pop();
            while(!enquestack.empty())
            {
                dequestack.push(enquestack.top());
                enquestack.pop();
            }
            cout<<curr<<" ";
            return curr;
        }
    
};

int main() {
	my_queue mq;
	mp.push(3);
	mp.push(4)
	mp.pop();
	return 0;
}

