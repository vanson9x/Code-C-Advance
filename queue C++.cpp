#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	stack<int> ST;
	int a,b,c;
	int dem=0;
	cin>>a>>b;
	do
	{
		ST.push(a%b);
		dem++;
		a=a/b;
	}while(a>0);
	for(int i=0;i<dem;i++)
	{
		c=ST.top();
		cout<<c;
		ST.pop();
	}
		
}
