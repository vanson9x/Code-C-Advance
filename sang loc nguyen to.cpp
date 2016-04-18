#include<iomanip>
#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;
int A[1000000]={0},n,x;
int j;
int main()
{
    A[0]=A[1]=1;
    cin>>n;
    for(int i=2;i<=sqrt(n);++i)
    {
         j=i*i;
        if(A[j]!=1)
        {
            while(j<=n)
                {
                    A[j]=1;
                    j=j+i;
                }
        }
    }
 for(int i=x;i<=n;++i)
    {
        if(A[i]==0) cout<<i<<" ";
    }
}
