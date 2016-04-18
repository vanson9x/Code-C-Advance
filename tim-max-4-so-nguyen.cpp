#include<iostream>
using namespace std;

int MAX(int x, int y)
{
    if(x>=y)
        return x;
    else
        return y;
}
main()
{
    int a,b,c,d,max;
    cin>>a>>b>>c>>d;
    max=MAX(a,b);
    max=MAX(max,c);
    max=MAX(max,d);
    cout<<"\nMax cua 4 so la: "<<max;
}
