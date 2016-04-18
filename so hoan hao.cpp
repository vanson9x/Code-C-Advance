// nhap mot so tu ban phim xet xem so do co phai la so hoan hao hay khong
#include<iostream>
using namespace std;
main()
{
    int n,i,s=0;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s==n)
        cout<<n<<" la so hoan hao";
    else
        cout<<n<<" khong la so hoan hao";
}
