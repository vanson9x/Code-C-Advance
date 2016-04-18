#include"iomanip"
#include"iostream"
using namespace std;
int main()
{
    int a,b,n,i=0,tg,min;
    cin>>a;
    cin>>b;
    if(a>b)
        min=b;
    else
        min=a;
        cout<<min<<endl;
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            tg=i;
    }
    cout<<tg;
}
