#include"iostream"
#include"cmath"
using namespace std;

bool kt(int x)
{
    if(sqrt(x)*sqrt(x)==x) return 1;
    return 0;
}
void so_cp()
{
	int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++)
		cin>>a[i];
    cout<<"Cac so chinh phuong la: ";
    for(int i=0;i<n;i++)
        if(kt(a[i]))
			cout<<a[i]<<" ";
}
int main()
{
    so_cp();
    return 0;
}
