#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int h=37,t=0,n;
int a[1000000],b[1000000],S;
char c[1000000];

int main(){
    int i,j;
    cin>>c;
    S=strlen(c);
    a[0]=c[0];
    for(i=1;i<S;++i)
    {
        a[i]=a[i-1]*h+c[i];
    }

    b[0]=c[S-1];

    for(i=1;i<S;++i)
    {
        b[i]=b[i-1]*h+c[S-i-1];
    }

    for(int i=0;i<S;i++)
        cout<<b[i]<<" ";
}
