#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct sinhvien
{
	char ten[30];
	int masv;
	float diemtk;	
};
struct NODE
{
	sinhvien infor;
	struct NODE*Next;	
};
struct LIST
{
	NODE *Head;
	NODE *Tail;
}l;
void khoitao(LIST &l)
{
	l.Head=NULL;
	l.Tail=NULL;
}
NODE * tao_nut(sinhvien x)		
	{		
			
			NODE *p;
			p=new NODE;
			if(p==NULL)
			{printf("\n khong du bo nho:");
				exit(0);	
			}
			p->infor=x;
			p->Next=NULL;
			return p;
	}
void tao_ds(LIST &l)
	{
		sinhvien x;
	    NODE *p;
		do{
		   printf( "\n nhap ten sinh vien: ");fflush(stdin);
	       gets(x.ten); 
	       if(x.ten==NULL)  	break;
	       printf("\n nhap ma sinh vien: ");
	       scanf("%d",&x.masv);
	       printf("\n Nhap diem tong ket: ");
	       scanf("%f",&x.diemtk);
	       p=tao_nut(x);
	       if(l.Head==NULL)
	          l.Head=l.Tail=p;
	       else
	       {
			l.Tail->Next=p;
			l.Tail=p;
		   }
		}while(x.masv!=1);
	}
	
void xuat(LIST l)
	{	for(NODE *p=l.Head;p;p=p->Next)
		{
			printf("\nTen sinh vien la: %s",p->infor.ten);
			printf("\nMa sinh vien: %d",p->infor.masv);
			printf("\nDiem tong ket: %.1fd",p->infor.diemtk);
		}
	}
main()
{
	sinhvien x;
	LIST l;
	khoitao(l);
	tao_ds(l);
	xuat(l);
	getch();
}


