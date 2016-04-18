#include "iostream"
using namespace std;

struct Node{
    int data;
    Node *next;
};
struct stack{
    Node *Top;
}s;
void khoitao()
{
    s.Top=NULL;
}
bool is_empty()
{
    return s.Top==NULL?1:0;
}
void push(int x)
{
    Node *p;
    p=new Node;
    p->data=x;
    p->next=s.Top;
    s.Top=p;
}
int pop()
{
    int x;
    Node *p;
    p=s.Top;
    s.Top=p->next;
    x=p->data;
    delete(p);
    return x;
}
int main()
{
    khoitao();
    push(4);
    push(5);
    push(1);
    push(9);
    while(!is_empty())
        cout<<pop()<<" ";
    return 0;
}
