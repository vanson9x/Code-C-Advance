#include"iostream"
#include"iomanip"
#include"stdlib.h"
using namespace std;
void input(int a[], int n)
{
    int i;
    cout<<"\nNhap tung phan tu vao mang."<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
}
void output(int a[], int n)
{
    cout<<"\nCac phan tu trong mang la."<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
float tbc(int a[], int n)
{
    int s=0;
    float S;
    for(int i=0;i<n;i++)
        s=s+a[i];
    S=(float)s/n;
    return S;
}
void hiensole(int a[], int n)
{
    cout<<"Cac so le trong mang la: "<<endl;
    for(int i=0;i<n;i++)
    if(a[i]%2!=0)
    cout<<a[i]<<" ";
    cout<<endl;
}
int demsoam(int a[], int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
        if(a[i]<0)
        dem++;
    return dem;
}
int max1(int a[], int n)
{
    int max1=a[0];
    for(int i=0;i<n;i++)
        if(max1<a[i])
        max1=a[i];
    return max1;
}
bool kt_dx(int a[], int n)
{
    int i,j;
    for(i=0,j=n-1;i<n/2;j--,i++)
    {
        if(a[i]==a[j])
        return 1;
        else
            return 0;
    }
}
void sapxep(int a[], int n)
{
        int i,j,tg;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            if(a[i]>a[j])
            {
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
}
int menu()
{
    int c;
    cout<<"\n\t\t\t\t****MENU****";
    cout<<endl<<"1.Nhap phan tu vao mang."<<endl;
    cout<<"2.Hien mang."<<endl;
    cout<<"3.Tinh trung binh cong."<<endl;
    cout<<"4.In ra man hinh cac so le."<<endl;
    cout<<"5.Dem so phan tu am."<<endl;
    cout<<"6.In ra phan tu lon nhat."<<endl;
    cout<<"7.Kiem tra mang co doi xung."<<endl;
    cout<<"8.Sap xep mang tang dan."<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"\nSelect: "; cin>>c;
    return c;
}
int main()
{
    int n,c,a[100];
    float S;
    cout<<"\t*************** Cac thao tac tren mang 1 chieu ******************"<<endl;
    cout<<"Nhap so luong phan tu mang: n= "; cin>>n;
    tt:
    c=menu();
       system("cls");
    switch(c)
    {
        case 1: input(a,n); goto tt; break;
        case 2: output(a,n); goto tt; break;
        case 3: cout<<"Tinh Tbc="<<tbc(a,n)<<endl; goto tt; break;
        case 4: hiensole(a,n); goto tt; break;
        case 5: cout<<"Mang co "<<demsoam(a,n)<<" so am !"<<endl; goto tt; break;
        case 6: cout<<"Phan tu lon nhat la: "<<max1(a,n)<<endl; goto tt; break;
        case 7: if(kt_dx(a,n)==1) cout<<"Chuoi doi xung !"<<endl;
                else cout<<"Chuoi khong doi xung !"<<endl;
                goto tt; break;
        case 8: sapxep(a,n); cout<<"Sau khi sap xep !"<<endl; output(a,n); goto tt; break;
        case 0:cout<<"\n\n\n\n\n\n"; cout<<"\t\t\t\tTHANK YOU!"; cout<<"\n\n\n\n\n"; exit(0);
    }
    return 0;
}
