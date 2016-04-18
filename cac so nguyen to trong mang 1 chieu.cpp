#include "iostream"
#include "cmath"

using namespace std;

int kt(int x)
{
        for(int i=2;i<=sqrt(x);i++)
            if(x%i==0) return 0;
    return 1;
}
int main()
{
    int n,a[100000];
    cout<<" Nhap so luong phan tu mang n= "; cin>>n;
    cout<<"\n Nhap tung phan tu. \n";
    for(int i=0;i<n;i++)
    {
        cout<<" A["<<i<<"]= ";
        cin>>a[i];
    }
    cout<<"\n Cac so nguyen to trong mang la: \n";
    for(int i=0;i<n;i++)
        if(kt(a[i]) && a[i]>1)
            cout<<" "<<a[i];
    return 0;
}
