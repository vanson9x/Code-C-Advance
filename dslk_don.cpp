#include"iostream"
#include"stdlib.h"

using namespace std;

struct Node
{
    int data; // du lieu data thuoc kieu int(so nguyen).
    struct Node *Next; // con tro Next(Linked cua tung node).
};
struct LIST // Dinh nghia 1 List.
{
    Node *Head; //Nut dau
    Node *Tail; // Nut cuoi
}l; // khai bao 1 bien l co kieu List.
void init(LIST &l) //khoi tao danh sach rong.
{
    l.Head=l.Head=NULL;
}
Node *get_node(int x) //Khoi tao 1 node moi.
{
    Node *p; //khai bao 1 con tro p co kieu Node da dinh nghia o tren.
    p=new Node; // xin cap phat vung nho cho node.
    if(p==NULL) // neu List o tren rong. Chua co phan tu nao.
    {
        cout<<"Khoi tao k node k thanh cong !. Memory Full";
        exit(0); // thoat chuong trinh.
    }
    p->data=x; //dua con tro toi vi tri data cua Node va gan cho no = gia tri cua x.
    p->Next=NULL;
    return p; //tra ve gia tri p(node).
}
void creat_list(LIST &l) //Tao danh sach cac nut. Thay the cho mang(Array).
{
    int x;
    // Nhap x cho den khi x==1 thi dung lai.
    do
    {
        cin>>x;
        Node *p; // khai bao 1 con tro p co kieu node
        p=get_node(x); // Lay gia tri duoc tra ve o ham get_node gan vao p.
        if(l.Head==NULL)    l.Head=l.Tail=p; // neu list k chua phan tu nao thi no se la node dau va cung la node cuoi
        else
        {
            l.Tail->Next=p; // node moi se o sau node cuoi cua list.
			l.Tail=p; // nut moi se lam nut cuoi.
        }
    }while(x!=1); // lap lai neu nhu x con khac 1.
}
void insert_first(LIST &l) //chen 1 gia tri vao dau danh sach.
{
    Node *p; int x;
    cout<<"Nhap gia tri can them vao dau danh sach x= ";
    cin>>x;
    p=get_node(x);
    if(l.Head==NULL) l.Head=p;
    else
    {
        p->Next=l.Head;
        l.Head=p;
    }
}
void insert_last(LIST &l) //chen vao cuoi danh sach.
{
    Node *p;
    int x;
    cout<<"Nhap gia tri can chen vao cuoi danh sach x= ";
    cin>>x;
    p=get_node(x);
    if(l.Tail==NULL) l.Tail=p;
    else
    {
        l.Tail->Next=p;
        l.Tail=p;
    }
}
void delete_first(LIST &l) //Xoa node dau danh sach
{
    Node *p;
    cout<<"Danh sach sau khi xoa phan tu dau la: \n";
    p=l.Head;
    l.Head=p->Next;
    free(p); //giai phong bo nho.
}
void delete_last(LIST &l) //Xoa phan tu cuoi cung cua danh sach
{
    if(l.Head==NULL) return; //Neu danh sach rong thi thoat khoi CT.
        Node *p = l.Head; //khai bao con tro gan vs node dau danh sach.
        Node *r = l.Tail; //khai bao con tro gan vs node cuoi danh sach.
    if(p==r) //neu danh sach chi co 1 phan tu.
    {
        l.Head=l.Tail=NULL;
        free(p);
    }
    else //Neu k p chay den node cuoi cung.
    {
        while(p->Next!=r)   p = p->Next;
        p->Next = NULL; //p tro den Null.
        l.Tail = p; //Node can cuoi.
        free(r); //Xoa node cuoi ban dau
    }
}
void out_list(LIST l) //hien list
{
    Node *p;
    for(p=l.Head;p;p=p->Next)
        cout<<p->data<<" ";
}
int main()
{
    cout<<"Nhap cac phan tu la so nguyen cho toi khi x=1 thi dung lai.\n";
    creat_list(l);
   // insert_first(l);
  // insert_last(l);
  //delete_first(l);
 //delete_last(l);
 cout<<"Cac phan tu vua nhap la: \n";
    out_list(l);
    return 0;
}
