#include <iostream>
using namespace std;

struct node
{
    int val;
    node *next;
};

class stack
{
    private:
        node *top=NULL;
        int min = INT_MAX;
    public:
        void push(int x)
        {
            node *temp = new node;
            if(x<min)
            {
                temp->val = 2*x-min;
                min = x;
            }
            else
                temp->val = x;
            if(top==NULL)
            {
                temp->next = NULL;
                top = temp;
            }
            else
            {
                temp->next = top;
                top = temp;
            }
        }
        void pop()
        {
            node *p = top;
            if(top->val < min)
            {  
                cout<<min;
                min = 2*min-(top->val);
            }
            else
                cout<<top->data;
            top = top->next;
            delete(p);
        }
}

int main() {
	// your code goes here
	return 0;
}

