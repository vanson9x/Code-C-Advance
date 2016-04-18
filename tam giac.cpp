#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Nhap 3 canh tam giac: ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b)
    {
        if(pow(a,2)+pow(b,2)==pow(c,2)||pow(b,2)+pow(c,2)==pow(a,2)||pow(a,2)+pow(c,2)==pow(b,2))
            cout<<"Day la tam giac vuong";
        else
        {
            if(a==c && b==c && a==b)
                cout<<"Day la tam giac deu !";
            else
            {
                if(a==b||b==c||a==c)
                    cout<<"Day la tam giac can !";
                else
                    cout<<"Day la tam giac thuong !";
            }
        }
    }
    else
        cout<<"Khong phai la hinh tam giac !";
}
