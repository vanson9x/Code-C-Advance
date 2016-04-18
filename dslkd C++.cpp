#include<iostream>
#include<conio.h>
using namespace std;
struct list{
    int info;
    list *next;
};
//1.tao nut
list* createnode(int x){
    list *p = new list;
    p->info = x;
    return p;
}
//2.chen mot phan tu vao cuoi danh sach
void insertlast(list* &phead,list *q){
    if(phead==NULL){
      phead = q;
      phead->next = NULL;
    }
    else insertlast(phead->next,q);
}
//3.chen mot phan tu vao dau danh sach
void insertfirst(list* &phead,list *p){
    p->next = phead;
    phead = p;
}
//4.nhap cac gia tri cho danh sach lien ket
void nhap(list* &phead,int n){
    int x;
    for(int i=0;i<n;i++){
        cout<<"\t+ Node "<<i+1<<": ";
        cin>>x;
        insertlast(phead,createnode(x));
    }
}
//5.noi hai dang sach lien ket don
list* noi(list *phead,list *qhead){
    list *aa =new list;
    aa = NULL;
    while(phead!=NULL){
        insertlast(aa,createnode(phead->info));
       phead = phead->next;
    }
    while(qhead!=NULL){
        insertlast(aa,createnode(qhead->info));
        qhead = qhead->next;
    }
    return aa;
}
//6.xap xep tang dan
void sort(list* &phead){
    list *p,*q;
   p = phead;
    int a;
    while(p!=NULL){
      a = p->info;
      q = p;
        while(q!=NULL){
         if(a>q->info){
               a = a + q->info;
               q->info = a - q->info;
               a = a - q->info;
           }
           q = q->next;
        }
        p->info = a;
        p = p->next;
    }
}
//7.hien ca phan tu trong danh sach ra man hinh
void show(list *phead){
    while(phead!=NULL){
        cout<<phead->info<<" ";
        phead = phead->next;
    }
}
//8.xoa phan tu co gia tri x trong danh sach
void xoa(list* &phead,int x){
    int i = 0;
    list *p,*q;
    p = phead;
    while(p!=NULL){
       if(p->info==x) i++;
        p = p->next;
    }
    if(i==0){
       cout<<"  + Phan tu " <<x<<" khong co trong dang sach";
      cout<<"\n    nen khong xoa no duoc";
    }
   else{
       p = phead;
       if(p->info==x){
           phead = p->next;
           delete p;
       }
       else{
           p = phead;
          while(p!=NULL&&p->info!=x) p = p->next;
          if(p->next==NULL){
              q = phead;
              while(q->next!=p) q = q->next;
              q->next = NULL;
            delete p;
          }
          else{
              q = phead;
              while(q->next!=p) q = q->next;
              q->next= p->next;
              delete p;
          }
       }
   }
}
//9.xoa toan bo cac phan tu trong danh sach
void clear(list* &phead){
    list *p;
    while(phead!=NULL){
        p = phead;
        phead = phead->next;
        delete p;
    }
}
//10.tim phan tu trong danh sach
void search(list *phead,int x){
    list *vitri = new list;
    vitri = NULL;
    int i,j;
    i = j = 0;
    while(phead!=NULL){
        j++;
        if(phead->info==x){
          i++;
          insertlast(vitri,createnode(j));
        }
        phead = phead->next;
    }
    cout<<"  + Co "<<i<<" phan tu co gia tri "<<x
       <<" trong danh sach";
   if(i>0){
       cout<<"\n  + Vi tri: ";
        show(vitri);
   }
}
//11.dem so phan tu trong danh sach
int dem(list *phead){
    int i= 0;
    while(phead!=NULL){
        i++;
        phead = phead->next;
    }
    return i;
}
//12.chen 1 phan tu co gia tri x vao danh sach
void insert(list* &phead,int x){
    int m,n;
    m = dem(phead);
    cout<<"  + Hien danh sach co "<<m<<" phan tu";
    cout<<"\n  + Vi tri can chen: ";
  nhaplai:
    cin>>n;
    if(n>m){
       cout<<"\n  + Danh sach hien tai chi co "<<m;
      cout<<" phantu \n  + Nhap lai: ";
      goto nhaplai;
    }
    list *ab = phead;
    cout<<"  + Them vao truoc hay sau phan tu o vi tri thu "<<n;
    cout<<"\n\t-> Them vao truoc an phim 't'.";
    cout<<"\n\t-> Them vao sau an phim 's'.";
    cout<<"\n\t-> Them vao: ";
    char a;
  nhap:
   cin>>a;
    if(a=='t'||a=='s'){
        if(a=='t'){
            if(n==1) insertfirst(phead,createnode(x));
            else{
                list *q,*p = phead;
                int i= 0;
               while(i<n-1){
                   ab = ab->next;
                    i++;
               }
               while(p->next!=ab) p = p->next;
               q = createnode(x);
               p->next = q;
                q->next = ab;
            }
        }
        else{
            int i = 0;
            while(i<n){
                i++;
                ab = ab->next;
            }
            if(ab->next==NULL) insertlast(ab,createnode(x));
            else{
                list *p,*q;
                p = ab->next;
                q = createnode(x);
                ab->next = q;
                q->next = p;
            }
        }
    }
    else{
        cout<<"\n\t+ Nhap sainhap lai: ";
        goto nhap;
    }
}
//13.ham chinh
main(){
    list *ab = new list;
    ab = NULL;
    cout<<"\n - So phan tu can nhap vao list mot: ";
    int x;cin>>x;
    nhap(ab,x);
    cout<<"  + Danh sach mot xap xep theo chieu tang dan la: \n\t";
    //sort(ab);
    show(ab);
    list *ac = new list;
    ac = NULL;
    cout<<"\n\n - So phan tu can nhap vao list hai: ";
    int y;cin>>y;
    nhap(ac,y);
    cout<<"  + Danh sach hai xap xep theo chieu tang dan la: \n\t";
    sort(ac);
    show(ac);
    cout<<"\n\n - Tron hai danh sach theo chieu tang dan la: \n\t";
    ab = noi(ab,ac);
    sort(ab);
    show(ab);
    cout<<"\n\n - Trong danh sach co: "<<dem(ab)<<" phan tu";
    cout<<"\n\n - Nhap phan tu can tim kiem: ";
    int z;
    cin>>z;
    search(ab,z);
    cout<<"\n\n - Nhap phan tu can loai bo: ";
    int e;
    cin>>e;
    xoa(ab,e);
    cout<<"\n  + Danh sach sau khi xoa "<<e<<"\n\t";
    show(ab);
    cout<<"\n\n - Nhap phan tu cam them vao list: ";
    int f;
    cin>>f;
    insert(ab,f);
    cout<<"  + Danh sach sau khi them "<<f<<" vao la: \n\t";
    show(ab);
    cout<<"\n - Xoa sach list:";
    clear(ab);
    show(ab);
    cout<<"\n\n\t\t";
}
