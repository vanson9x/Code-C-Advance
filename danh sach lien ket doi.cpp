#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct NODE
{
	int infor;
	struct NODE *Next, *Pre;
};
struct LIST
{
	NODE *Head;
	NODE *Tail;	
};
LIST l;
void khoitao(LIST &l)
{
	l.Head=l.Tail=NULL;
}
NODE * tao_nut(int x)		
	{	NODE *p;
			p=new NODE;
			if(p==NULL)
			{printf("\n khong du bo nho:");
				exit(0);
			}
			p->infor=x;
			p->Next=NULL;
			p->Pre=NULL;
			return p;
	}

void tao_ds(LIST &l)
	{	int x;
	    NODE *p;
	    printf("\nNhap x=-1 chuong trinh break.");
		do{
		   printf( "\n nhap x=");
	       scanf("%d",&x);
	       if(x==-1)  	break;
	       p=tao_nut(x);
	       if(l.Head==NULL)
	          l.Head=l.Tail=p;
	       else
	       {
			l.Tail->Next=p;
			l.Tail=p;
		   }
		}while(1);
	}
void add_head(LIST &l) 
	{
		NODE *p;
		int x;
		printf("\nNhap gia tri can them: x= "); scanf("%d", &x);
		p=tao_nut(x);
		if(l.Head==NULL) // LIST = NULL
		l.Head=l.Tail=p;
		else			// LIST != NULL
		{
			p->Next=l.Head;
			p->Pre=p;
			l.Head=p;
		}
	}
	void add_tail(LIST &l) 
	{
		NODE *p;
		int x;
		printf("\nNhap gia tri can them:x= "); scanf("%d", &x);
		p=tao_nut(x);
		if(l.Tail==NULL)
		l.Head=l.Tail=p;
		else
		{
			l.Tail->Next=p;
			p->Pre=l.Tail;
			l.Tail=p;
		}
	}
void delete_head(LIST &l)
{
	NODE *p;
	if(l.Head==NULL)
	printf("\nDs NULL");
	{
	 p=l.Head;
	 l.Head=l.Head->Next;
	 l.Head->Pre=NULL;
	 free(p);
	}
}
void delete_tail(LIST &l)
{
	NODE *p;
	if(l.Tail!=NULL)
	{
		p=l.Tail;
		l.Tail=l.Tail->Pre;
		l.Tail->Next=NULL;
		free(p);
		if(l.Head==NULL)
		l.Tail=NULL;
		else
		l.Head->Pre=NULL;
	}
}
NODE *search(LIST &l, int &k)
	{
		NODE *p;
		printf("\nGia tri can tim kiem: k= ");
		scanf("%d", &k);
		p=l.Head;
			while(p!=NULL && p->infor!=k)
			p=p->Next;
			return p;
	}
void hoanvi(int &a, int &b)
{
	int tg;
	a=tg; a=b; b=tg;
}
void sapxep_noidung(LIST &l) //dang loi~
	{
		NODE *p, *q;   
		p = l.Head;
		while ( p != NULL )
		{
			q = p -> Next;
			while( q!=NULL )
			{
				if ( p->infor > q->infor )	 
							hoanvi(p->infor,q->infor);
				q = q->Next;
			}
			p = p->Next;
		}
	}
int max(LIST &l)
{
	NODE *p;
	int max=l.Head->infor;
	for(p=l.Head->Next;p!=NULL;p=p->Next)
	if(p->infor > max)
	max=p->infor;
	return max;
}
int min(LIST &l)
{
	NODE *p;
	int min=l.Head->infor;
	for(p=l.Head->Next;p!=NULL;p=p->Next)
	if(p->infor < min)
	min=p->infor;
	return min;
}
void xuat(LIST l)
	{	for(NODE *p=l.Head;p;p=p->Next)
		{
		printf("%3d", p->infor);printf(" -> ");
		}
		printf( "NULL");
	}
int in_menu()
{
	int x;
	printf("\n");
	printf("============>> Cac thao tac tren danh sach lien ket don <<=============");
	printf("\n1.Nhap danh sach:");
	printf("\n2.Hien danh sach:");
	printf("\n3.Them dau danh sach:");
	printf("\n4.Them cuoi danh sach:");
	printf("\n5.xoa dau danh sach:");
	printf("\n6.Xoa cuoi danh sach:");
	printf("\n7.Tim kiem gia tri: ");
	printf("\n8.Sap xep danh sach theo kieu thay doi noi dung: ");
	printf("\n9.Tim Max:");
	printf("\n10.Tim Min:");
	printf("\n0.Exit");
	printf("\nSelect: ");
	scanf("%d", &x);
	if(x>10)
	{
		system("cls");
		in_menu();
	}
	else
	return x;
}
main()
{
	NODE *p, *timkiem;
	int k,cv, Max, Min;
	khoitao(l);
	do
	{
		cv=in_menu();
		system("cls");
		switch (cv)
		{
			case 1:{tao_ds(l); break;}
			case 2:{xuat(l); break;}
			case 3:{add_head(l);printf("\nDS sau khi them dau la: \n");xuat(l); break;}
			case 4:{add_tail(l);printf("\nDS sau khi them cuoi la: \n");xuat(l); break;}
			case 5:{delete_head(l);printf("\nDS sau khi xoa dau la: \n");xuat(l); break;}
			case 6:{delete_tail(l);printf("\nDS sau khi xoa cuoi la: \n");xuat(l); break;}
			case 7:{timkiem=search(l,k);printf("\nVi tri k=%d la: %p \n",k,timkiem); break;}
			case 8:{sapxep_noidung(l);printf("\nDS sau khi sap xep la: \n");xuat(l);break;}
			case 9:{Max=max(l);printf("\nMax cua DS la: %d", Max);break;}
			case 10:{Min=min(l);printf("\nMin cua DS la: %d", Min);break;}
			case 0:{printf("\nExit program"); break;}
		}
	}while(cv!=0);	
	getch();
}
