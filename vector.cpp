#include <iostream>
#include <vector>

using namespace std;
vector <int> a;
int i,n;
//Nhap gia tri cho vao mang
void nhap()
{
    int x;
    cout<<"Nhap so luong mang: ";
    cin>>n;
    cout<<"Nhap tung ptu cho mang: "<<endl;
    for(i=0;i<n;i++)
      {
          cout<<"A["<<i+1<<"]=";
            cin>>x;
         a.push_back(x); // Tu dong them gia tri vao cuoi vector.
      }
}
//Hien cac gia tri trong mang
void hien()
{
    cout<<"\nCac phan tu vua nhap la: "<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
void implement(int &n)
{
    int l;
    l=a.at(2); //do dai cua vector
    cout<<"\nDo dai cua vector la: "<<l;
}
int main()
{
    nhap();
    hien();
    implement(n);
    hien();
    cout<<"\n\n\n\n";
   return 0;
}
