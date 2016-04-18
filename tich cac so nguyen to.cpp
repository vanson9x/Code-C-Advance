#include "iostream"
using namespace std;
int main(){
    int n,a[1000],j=0,s;
    cout<<"Nhap so n=";
    cin>>n; s=n;
    for(int i=2;i<=n;i++)
    while(n%i==0){
        a[j]=i; j++;
        n/=i;
    }
    if(j==0)    cout<<n<<"="<<n;
    else{
        cout<<s<<"=";
    for(int i=0;i<j;i++)
        cout<<a[i]<<".";
    }
}
