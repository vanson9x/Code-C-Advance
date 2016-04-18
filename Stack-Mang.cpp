#include<stdio.h>
#include<conio.h>
void push(int a[], int &n, int x)
{
	a[n]=x;
	n++;
}
int pop(int a[], int &n)
{
	if(n==0)
		return -1;
		int x=a[n-1];
		n--;
	return x;
}
void hien(int a[], int n)
{
	while(n>0)
	{
		int x=pop(a,n);
		printf("%d \n",x);
	}
}
main()
{
	int a[10], n=0;
	push(a,n,33);
	push(a,n,45);
	push(a,n,51);
	push(a,n,28);
	push(a,n,10);
	pop(a,n);
	hien(a,n);
	getch();
	return 1;
}
