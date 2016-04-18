#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Nhap 3 so a,b,c: ";
    cin>>a>>b>>c;
    cout<<"Max="<<max(max(a,b),c)<<endl;
    cout<<"Min="<<min(min(a,b),c);
}
