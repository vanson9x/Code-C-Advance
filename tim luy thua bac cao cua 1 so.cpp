#include"iomanip"
#include"stdio.h"
#include"cmath"
#include"iostream"
using namespace std;
int A[1000000]={0},n,x;
int lag;
int main()
{
    cout<<"Nhap 1 so nguyen n= ";
    cin>>n;
    cout<<"\nNhap x= ";
    cin>>x;
    for(int i=2;i<=sqrt(n);++i)
    {
        int j=i*i;
        if(A[j]!=1)
        {
            while(j<=n)
                {
                    A[j]=1;
                    j+=i;
                }
        }
    }
 for(int i=2;i<=n;++i)
    {
        if(A[i]==0)
        {
            if(x%i==0)
            {
                for(int a=2;a<sqrt(x);a++)
                {
                    if((float)pow(i,a)==(float)x)
                    {
                        lag=1;
                        cout<<i<<" ";
                        cout<<a;
                    }
                }
            }
        }
}
if(lag!=1)
        cout<<"0";
        return 1;
}
