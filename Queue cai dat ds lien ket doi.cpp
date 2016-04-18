#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Node
{
		int info;
		struct Node *Next, *Pre;
};
struct Queue
{
	Node *Rear, *Front;
}q;
void initQueue(Queue *q)
{
	q->Rear=NULL;
	q->Front=NULL;
}
int isEmpty(Queue q)
{
	return (q.Rear==NULL);
}
int put(Queue &q, int x)
{
	Node *p;
	p=new Node;
	if(p==NULL)
	{
		printf("\nKhong du bo nho: ");
		exit(1);
	}
	else
	{
		p->info=x;
		p->Next=NULL;
		p->Pre=NULL;
		p->Next=q->Rear;
		q->Rear->Pre=p;
		q->Rear=p;
	}
}
int Get(Queue &p)
{
	Node *p;
	int x;
	if(q->Rear==NULL)
	{
		printf("\nKhong thuc hien duoc. ");
		exit(1);
	}
	else
	{
		p=q->Front; x=p->infor;
		q->Front=q->Front->Pre;
		q.Front->Next=NULL;
		free(p);
		return x;
	}
}
main()
{

}
