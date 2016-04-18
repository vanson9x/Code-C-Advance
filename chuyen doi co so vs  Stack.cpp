#include<stido.h>
#include<conio.h>
#include<stdlib.h>

void initStack(Stack *s) //khoi tao Stack
{
	s->top=-1;
	return ;
}
main()
{
	int n,b,du;
	stack *s;
	initStack(s);
	printf("\nNhap n= "); scanf("%d", &n);
	printf("\nNhap b= "); scanf("%d", &b);
	while(n!=0)
	{
		du=n%b;
		push(s,du);
		n=n/b;
	}
	printf("\nin ket qua: \n");
	while(isEmpty(s)!=1)
	{
		du=pop(s);
		printf("%d", du);
	}
	getch();
}
