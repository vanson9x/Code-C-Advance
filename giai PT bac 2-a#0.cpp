#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,x1,x2,delta;
    cout<<"\t\tGiai phuong trinh bac 2: ax^2+bx+c=0. Voi a#0";
    cout<<"\nNhap a,b,c: "; cin>>a>>b>>c;
    delta=pow(b,2)-4*(a*c);
   // cout<<delta<<"\n";
    if(delta<0)
        cout<<"PT vo nghiem !";
    else
    {
        if(delta==0)
        {
            x1=-b/2*a;
            cout<<"PT co nghiem kep !. x1=x2="<<x1;
        }
        else
            {
                x1=(-b+sqrt(delta))/2*a;
                x2=(-b-sqrt(delta))/2*a;
                cout<<"x1="<<x1;
                cout<<endl<<"x2="<<x2;
            }

    }
}
