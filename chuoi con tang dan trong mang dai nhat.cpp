#include<iostream>

using namespace std;

int main()
{
	int	n, a[100000], b[100000],t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];  b[i]=1;
    }
    int max=b[0];
    for(int i=0;i<n;i++)
        if(a[i]<a[i+1]) b[i+1]=b[i]+1;
    for(int i=0;i<n;i++)
        if(max<b[i]){
            max=b[i];   t=i;
        }
    for(int i=(t-max)+1; i<=t;i++)
        cout<<a[i]<<" ";
}
