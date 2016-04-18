#include"iostream"
#include"iomanip"
using namespace std;
int main()
{
    int i=0,j=0,n=0,tong=0;
    int a[100], b[100];
    int x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        tong=tong+a[i];
        b[j]=tong;
        j++;
    }
    cin>>x;
    cin>>y;
    tong=b[y]-b[x-1];
    cout<<tong;
    return 1;
}
