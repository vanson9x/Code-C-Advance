#include "iostream"
#include "cmath"
using namespace std;

bool kiemtra(int x)
{
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0 && x!=2)
            return 1;
    return 0;
}

int main()
{
    int a[10000], n, i,max=0;
    cout<<"Nhap so luong phan tu mang: n= ";
    cin>>n;
    cout<<"\n\t\tNhap tung phan tu cho mang:\n";
    for(i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>1 && !kiemtra(a[i]))
            if(a[i]>max)
                max=a[i];
    }
    cout<<"so nguyen to lon nhat trong mang la: "<<max;
    return 0;
}
