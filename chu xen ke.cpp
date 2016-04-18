#include "iostream"
#include "string"
using namespace std;

int hoa(int x)
{
    if(x>=97)
        return x-=32;

}
int thuong(int y)
{
    if(y<97)
        return y+=32;
}
int main()
{
    int n;
    string a;
    getline(cin,a);
    n=a.size();
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            a[i]=hoa(a[i]);
        else
            a[i]=thuong(a[i]);
    }
    cout<<a;
}
