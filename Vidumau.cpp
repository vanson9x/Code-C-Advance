#include"conio.h"
#include"stdio.h"
#include"stdlib.h"
//#define max 100
struct NODE
	{int data;
		struct NODE* Next;
	};
	
struct LIST
	{NODE *Head;
		NODE *Tail;
	}l;
	
void khoitao(LIST &l)
	{l.Head=l.Tail=NULL;}
		
NODE * tao_nut(int x)		
	{	NODE *p;
			p=new NODE;
			if(p==NULL)
			{printf("\n khong du bo nho:");
				exit(0);
			}
			p->data=x;
			p->Next=NULL;
			return p;
	}

void tao_ds(LIST &l)
	{	int x;
	    NODE *p;
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

void xuat(LIST l)
	{	for(NODE *p=l.Head;p;p=p->Next)
		{
		printf("%3d", p->data);printf(" -> ");
		}
		printf( "NULL");
	}

void themdau(LIST &l)
	{	//khoitao(l);
		int x;
		printf( "\n nhap x=");
		scanf("%d",&x);
		NODE *p=tao_nut(x);
		if(l.Head==NULL)
	    l.Head=l.Tail=p;
		else
		{p->Next=l.Head;
		l.Head=p;
		}
	}
	 
void themdau2(LIST &l,NODE *p)
	{		if(l.Head==NULL)
		l.Head=l.Tail=p;
		else
		{p->Next=l.Head;
		l.Head=p;
		}
	}

void themcuoi(LIST &l)
	{	
		int x;
		printf( "\n nhap x=");
		scanf("%d",&x);
		NODE *p=tao_nut(x);
		if(l.Tail==NULL)
		l.Head=l.Tail=p;
		else
		{l.Tail->Next=p;
		l.Tail=p;
		}
	}
int  xoadau(LIST &l)
	{	
		if(l.Head==NULL)
			return 0;
		else
		{l.Head=l.Head->Next;
		return 3;
		}
	}

int xoacuoi(LIST &l)
	{
		NODE *k;
		if(l.Tail==NULL)
			return 0;
		else 
		{for(k=l.Head;k->Next!=l.Tail;)
			k=k->Next;
		k->Next=NULL;
		l.Tail=k;
		return 3;
		}
	}

void hoanvi(int &a,int &b)
	{int temp=a;a=b;b=temp;
	}
void inter_sort(LIST l)
	{NODE *p, *q;   
		//Data tg;
		p = l.Head;
		while ( p != NULL )
		{
			q = p -> Next;
			while( q!=NULL )
			{
				if ( p->data > q->data )	 
							hoanvi(p->data,q->data);
				q = q->Next;
			}
			p = p->Next;
		}
	
	}
	
int in_menu()
	{
	    int cv;
	    printf( "------------- CAC THAO TAC TREN DANH SACH LIEN KET DON ---------------------");
		printf( "\n 1.Tao DS" );               
		printf( "\n 2.Hien thi danh sach ");
		printf( "\n 3.Them 1 ptu vao dau dsach");      
		printf( "\n 4.Them 1 ptu vao cuoi dsach");
		printf( "\n 5.Xoa ptu dau dsach");
		printf( "\n 6.Xoa ptu cuoi dsach");
		printf( "\n 7.Sap xep hoan doi noi dung - Interchange sort");
		printf( "\n 0.End programe !");
		do
		  {printf( "\n Hay chon cong viec: ");
		   scanf("%d",&cv);
		  }while(cv<0||cv>10);
	      return cv;
	    
	    }
main()
	{
	int cv;
	LIST l;LIST l1;LIST l2;int x;int y;
		khoitao(l);
		do
		{cv=in_menu();
		system("cls");
	 	switch(cv)
		{
		case 1:{printf( "Nhap cac phan tu. Nhap -1 de ket thuc!");
				tao_ds(l);}break;
		case 2:xuat(l);printf( "\n");break;
	    case 3:{printf( "\nDanh sach vua nhap: ");xuat(l);printf( "\n");
					themdau(l);
				printf( "\nDanh sach sau khi them dau: ");xuat(l);printf( "\n");}break;
		case 4:{printf( "\nDanh sach vua nhap: ");xuat(l);printf( "\n");
					themcuoi(l);
				printf( "\nDanh sach sau khi them cuoi: ");xuat(l);printf( "\n");}break;
		
	    case 5:{printf( "Danh sach vua nhap: ");xuat(l);printf( "\n");
					xoadau(l);
				printf( "\nDanh sach vua xoa dau: ");xuat(l);printf( "\n");}break;
		case 6:{printf( "Danh sach vua nhap: ");xuat(l);printf( "\n");
					xoacuoi(l);
				 printf( "\nDanh sach vua xoa cuoi: ");xuat(l);printf( "\n");break;}
		case 7: {printf( "Danh sach vua nhap: ");xuat(l);printf( "\n");
				 printf( "\nDanh sach sau khi sap - Inter_sort: ");inter_sort(l);xuat(l);printf( "\n");break;}
	 	case 0:printf( "\n Exit programme");break;
		}
	
		getch();
		}while(cv!=0);

 }
