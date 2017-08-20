#include <iostream>
using namespace std;

struct node
{
    int val;
    node *next;
};

class my_stack
{
    private : 
        node *top;
    public:
        void push(int x)
        {
            node *temp = new node;
            temp->val = x;
            if(top==NULL)
            {
                top = temp;
                top->next = NULL;
            }
            else
            {
                temp->next = top;
                top = temp;
            }
        }
        void pop()
        {
            if(top==NULL)
                cout<<"Stack is empty";
            else
            {
                node *temp = top;
                top = top->next;
                delete(temp);
            }
        }
        void showstack()
        {
            Node *q;
            q=top;
         
            if(top==NULL){
                cout<<"Stack is empty!!";
            }
            else{
                while(q!=NULL)
                {
                    cout<<q->data<<" ";
                    q=q->next;
                } 
            }
        }
};

int main() {
	my_stack m;
	m.push(3);
	m.push(4);
	m.push(5);
	m.pop();
	m.showstack();
	return 0;
}

