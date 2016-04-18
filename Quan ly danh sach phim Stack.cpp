#include "iostream"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"

using namespace std;

struct date
{
    int ngay,  thang, nam;
    int gio, phut;
};
struct Movie
{
    string ten;
    date time;
    int sl_ve;
}m,m1;

struct Node
{
    Movie data;
    struct Node *Next;
};
struct stack
{
    Node *Top;
}s;
void init_stack()
{
    s.Top=NULL;
}
bool empty()
{
    if(s.Top==NULL)
        return 1;
    else
        return 0;
}
void push(Movie x)
{
    Node *p;
    p=new Node;
    if(p==NULL)
    {
        cout<<"Memory Full";
        exit(0);
    }
    else
    {
        p->data=x;
        p->Next=s.Top;
        s.Top=p;
    }
}
Movie Top()
{
    Movie x;
    Node *p;
    if(empty())
        cout<<"Stack Rong!";
    else
        {
            p=s.Top;
            s.Top=p->Next;
            x=p->data;
            delete(p);
        }
    return x;
}
void nhap(int n)
{
    char ten[100];
    cout<<"\n\t\tNhap thong tin cho tung bo phim:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n\tSTT:"<<i+1;
        cout<<"\n\tTen phim:";
        fflush(stdin);
        gets(ten);
        m.ten=ten;
        cout<<"\tNgay chieu <Dinh dang: Ngay Thang Nam>:";
        cin>>m.time.ngay>>m.time.thang>>m.time.nam;
        cout<<"\tGio chieu: <Dinh Dang: Gio Phut>: ";
        cin>>m.time.gio>>m.time.phut;
        cout<<"\tSo luong ve ban: ";
        cin>>m.sl_ve;
        push(m);
        cout<<"\n--------------------------------------------------------------------------------";
    }
}
void hien(int n)
{
    cout<<"\n\n\t--------------DANH SACH PHIM RAP HUONG-MOVIE------------------\n";
    for(int i=0;i<n;i++)
    {
        m=Top();
        cout<<"\n\tTen phim: "<<m.ten<<endl;
        cout<<"\tNgay chieu: "<<m.time.ngay<<"-"<<m.time.thang<<"-"<<m.time.nam<<endl;
        cout<<"\tGio chieu: "<<m.time.gio<<"h"<<m.time.phut<<"p"<<endl;
        cout<<"\tSo luong ve: "<<m.sl_ve<<" ve"<<endl;
        cout<<"\t----------------------------------------";
    }
}
int main()
{
    int n;
    cout<<"\n\t************************HUONG MOVIE STAR*************************\n";
    cout<<"\tNhap so luong phim: n= ";
    cin>>n;
    nhap(n);
    hien(n);
    cout<<"\n\n\n";
}
