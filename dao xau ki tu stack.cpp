#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    char data;
    struct Node *Next;
};
struct stack
{
    Node *top;
};
void init_stack(stack &s)
{
  s.top=NULL;
}
int is_empty(stack &s)
{
    if(s.top==NULL)
        return 1;
    else
        return 0;
}
void push(stack &s, char x)
{
    Node *p;
    p=new Node;
    if(p==NULL)
    {
        printf("\nBo nho day: ");
        exit(0);
    }
    else
    {
        p->data=x;
        p->Next=s.top;
        s.top=p;
    }
}
char pop(stack &s)
{
    char tg;
	Node *p;
	if(is_empty(s)==1)
	{
		printf("\nStack rong: ");
		exit(1);
	}
	else
	{
		p=s.top;
		s.top=p->Next;
		tg=p->data;
		free(p);
	}
	return tg;
}
int main()
{
    char st[30];
    stack s;
    int i,n;
    init_stack(s);
    printf("xin moi nhap chuoi: ");
    gets(st);
    printf("\nChuoi dao nguoc la: ");
    n=strlen(st);
    for(i=0;i<n;i++)
    {
        push(s,st[i]);
    }
    for(i=0;i<n;i++)
        printf("%c",pop(s));
    return 1;
}
