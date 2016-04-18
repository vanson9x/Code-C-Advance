#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct StackNode
{
	int data;
	struct StackNode *Next;
};
struct Stack
{
	StackNode *top;
};
void initStack(Stack *s) // khởi tạo danh sách rỗng
{
	s->top=NULL;
}
int isEmpty(Stack *s) // kiểm tra rỗng
{
	if(s->top==NULL)
	return 1;
	else
	return 0;
}
void push(Stack *s, int x) //thêm phần tử
{
	StackNode *p;
	printf("Nhap x= ");
	scanf("%d", &x);
	p=new StackNode;
	if(p==NULL)
	{
		printf("\n Bo nho day");
		exit(1);
	}
	else
	{
		p->data=x;
		p->Next=s->top;
		s->top=p;
	}
}
int pop(Stack *s) //lay noi dung
{
	int tg;
	StackNode *p;
	if(isEmpty(s)==1)
	{
		printf("\nStack rong: ");
		exit(1);
	}
	else
	{
		p=s->top;
		s->top=p->Next;
		tg=p->data;
		free(p);
	}
	return tg;
}
int top(Stack *s) // lấy ra phần tử đầu (Top)
{
	int tg;
	if(isEmpty(s)==1)
	{
		printf("\nBo nho k du:");
		exit(1);
	}
	else
	{
		tg=s->top->data;
	}
}
main()
{
        Stack *s;
        int x;
        push(s,x);
        return 1;
}
