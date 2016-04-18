#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	tt:
	system("cls");
	int n,s=1,p=0;
	char a;
	cout<<"Nhap so nguyen n= ";
	cin>>n;
	for(int i=1;i<=n;i++)
		p=p+i;
	for(int i=2;i<=n;i=i+2)
		s=s*i;
	cout<<"Tong cac so tu 1 den "<<n<<" la: "<<p;
	cout<<"\nTich cac so chan tu 1 den "<<n<<" la: "<<s;
	cout<<"\n\t\tBan co muon tiep tuc khong ?. Y/N";
	cout<<"\nSelect: "; cin>>a;
	if(a=='Y' || a=='y')
	{
		goto tt;
	}
	else
	cout<<"\n\t\t\tTHANKS !";
}
