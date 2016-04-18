#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct sv
{
	int msv;
	char ten[30];
	int diem;	
};
struct DNode
{
	sv data;
	struct DNode *Next;
	struct DNode *Pre; 	
};
struct DLIST
{
	DNode *Head;
	DNode *Tail;	
}l;
void khoi_tao(DLIST &l)
{
	l.Head=l.Tail=NULL;
}
DNode *tao_nut(sv x)
{
	DNode *p;
	p=new DNode;
	if(p==NULL)
	{
		printf("\nkhong du bo nho!");
		exit(0);
	}
	p->data=x;
	p->Next=NULL;
	p->Pre=NULL;
	return p;
}
void tao_ds(DLIST &l)
{
	sv x;
	int i,n;
	DNode *p;
	printf("\nNhap thong tin ds dinh vien n= "); scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n\tsinh vien[%d]: ",i+1);
		printf("\nNhap ma sinh vien(type=number): "); scanf("%d",&x.msv);
		fflush(stdin);
		printf("\nNhap ten sinh vien: "); gets(x.ten);
		printf("\nNhap diem sinh vien(type=number int):d= "); scanf("%d", &x.diem);
	}
	
}
void xuat(DLIST l)
{
	DNode *p;
	printf("\nMaSV:		TenSV: 		Diem:");
	for(p=l.Head;p;p=p->Next)
	{
		printf("%d	%s	%d\n");
	}
}
/*void delete_head(DLIST &l)
{
	DNode *p;
	if(l.Head==NULL)
	p=l.Head;
	l.Head=l.Head->Next;
	l.Head->Pre=NULL;
	free(p);
	if (l.Head==NULL)
	l.Tail=NULL;
}
void delete_tail(DLIST &l)
{
	DNode *p;
	if(l.Tail==NULL)
	p=l.Tail;
	l.Tail=l.Tail->Next;
	
}*/
int main()
{
	khoi_tao(l);
	tao_ds(l);
	printf("\nCac Node vua nhap la: ");
	xuat(l);
	/*delete_first(l);
	printf("\nsau khi xoa ptu dau: ");
	xuat(l);*/
	getch();
	return 0;
}
