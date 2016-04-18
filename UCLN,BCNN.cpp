#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,a,b,c=0;
    cout<<"Nhap 2 so nguyen a va b: ";
    cin>>a>>b;
    for(i=min(a,b);i>=0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<"UCLN la: "<<i;
            break;
        }
    }
    for(i=min(a,b);i<=a*b;i=i+min(a,b))
    	if(i>=max(a,b) && i%max(a,b)==0)
    	 {
		 	cout<<"\nBCNN la: "<<i;
		 	break;
		 }
}
