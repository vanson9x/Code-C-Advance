#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
typedef node *pnode;
struct queue
{
    pnode h,t;
};

void init(queue &q)
{
    q.h=q.t=NULL;
}

int isempty (queue q)
{
    if(q.h==NULL)
        return 1;
    return 0;
}

void put(queue &q, int x)
{
    if(isempty(q))
    {
        q.h =new node;
        q.h->data=x;
        q.h->next=q.t;
        q.t=q.h;
        return;
    }
    q.t->next=new node;
    q.t=q.t->next;
    q.t->data=x;
    q.t->next=NULL;
}

int get(queue &q)
{
    pnode p;
    int x;
    p=q.h;
    q.h=p->next;
    if(isempty(q))
    {
        q.t=NULL;
    }
    x=p->data;
    delete p;
    return x;
}

int main()
{

    queue q;
    init (q);
    int n,i,x;
    cout <<"Nhap so phan tu can dua vao queue: ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout <<"Nhap phan tu thu "<<i+1<< ": ";
        cin >> x;
        put(q,x);
    }
    cout <<"Cac phan tu trong queue la: ";
    while (isempty(q) ==0)
       cout << get(q) <<" ";
}
