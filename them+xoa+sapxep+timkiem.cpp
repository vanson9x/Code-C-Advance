#include<stdio.h>
#include<conio.h>
int a[10],i,j,n;
void nhap(int a[], int &n)
{
	printf("\t\tNhap tung phan tu cua mang: \n");
	for(i=0;i<n;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d", &a[i]);
	}
}
void hien(int a[], int &n)
{
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void them(int a[], int &n, int x, int vt)
{
	printf("\nMoi ban nhap gia tri can them: x= ");
	scanf("%d",&x);
	printf("\nNhap vi tri: k= ");
	scanf("%d",&vt);
	if(vt>=0 && vt<=n)
	{
		for(i=n;i>vt;i--)
		a[i]=a[i-1]; // lui tat ca ca phan tu tu vi tri k ve n 1 don vi
		a[vt]=x;
		n++; // tang kich thuoc len 1 don vi.
	}
}
void xoavitri(int a[], int &n, int vt)
{
	printf("\n\nvi tri xoa: k= ");
	scanf("%d", &vt);
	if(vt>=0 && vt<n)
	{
		for(i=vt;i<n-1;i++) 
			a[i]=a[i+1]; // dich chuyen tat ca ca phan tu tu vi tri da chon toi n 1 don vi roi xoa vi tri. 
		n--; // giam mang di 1 don vi.
	}
}
void sxtangdan(int a[], int &n)
{
	int tg;
	for(i=0;i<n-1;i++) 
	for(j=n-1;j>i;j--) 
	if(a[j]<a[j-1])
	{
		tg=a[j];
		a[j]=a[j-1];
		a[j-1]=tg;
	}
}
int timkiemtt(int a[], int &n, int x)
{
	printf("\nNhap gia tri can tim kiem: x= ");
	scanf("%d", &x);
	for(i=0;i<n;i++)
	if(a[i]==x)
	return i;
	return -1;
	
}
int timkiemnhiphan(int a[], int n, int x)
{
	printf("\nNhap gia tri can tim: x= ");
	scanf("%d",&x);
	int trai=0, phai=n-1;
	int giua;
	do
	{
		giua=(trai+phai)/2; // chia mang thanh 3 diem tim kiem
		if(x==a[giua]) break; // neu x=diem giua ket thuc va hien ket qua
		else if(x<a[giua]) phai=giua-1; // neu x < diem giua thi duyet nua truoc cua mang
			else trai=giua+1; // neu x > diem giua duyet nua sau cua mang
	}while(trai<=phai); //dieu kien.
	if(trai<=phai) return giua;
	else return -1; // neu  trong mang k co gia tri = x
}
void sapxepluachon(int a[], int &n)
{
	int min,tg;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[min]) min=j;
		if(min!=i)
		{
			tg=a[min];
			a[min]=a[i];
			a[i]=tg;
		}
	}
}
void sapxepxen(int a[], int &n)
{
	int pos,x;
	for(i=1;i<n;i++)
	{
		x=a[i];
		pos=i-1;
		while ((pos>=0 && a[pos]>x))
		{
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}
void sapxepnoibot(int a[], int &n) 
{
	int tg;
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--)
		if(a[j]<a[j-1])
		{
			tg=a[j];
			a[j]=a[j-1];
			a[j-1]=tg;
		}
}
void hoanvi(int a[], int &n)
{
	int tg;
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		a[i]=tg;
		a[i]=a[j];
		a[j]=tg;
	}
}
void sapxepnhanh(int a[], int &n, int trai, int phai)
{
	int x,tg;
	x=a[(trai+phai)/2];
	i=trai; j=phai;
	do
	{
		while(a[i]<x) i++;
		while(a[j]>x) j++;
		if(i<=j)
		{
			a[i]=tg;
			a[i]=a[j];
			a[j]=tg;
			i++; 
			j--;
		}
	}while(i<j);
	if(trai<j) sapxepnhanh(a,n,trai,phai);
	if(i<phai) sapxepnhanh(a,n,trai,phai);
} 
void sapxeptructiep(int a[], int n)
{
	int tg;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(a[j]<a[i])
		{
			tg=a[i];
			a[i]=a[j];
			a[j]=tg;
		}
}
int main()
{
	int x,vt,search,tk,trai,phai;
	printf("Moi ban nhap so luong phan tu trong mang: n= ");
	scanf("%d",&n);
	nhap(a,n);
	printf("\nCac phan tu trong mang la: ");
	hien(a,n);
/*	them(a,n,x,vt);
	{
		printf("\n\tCac phan tu trong mang sau khi them la: ");
		hien(a,n);
	}
	xoavitri(a,n,vt);
	{
		printf("Cac phan tu trong mang sau khi xoa la: ");
		hien(a,n);
	}
	sxtangdan(a,n);
	{
		printf("\nMang sau khi dc sap xep tang da la: ");
		hien(a,n);
	}
	search=timkiemtt(a,n,x);
	printf("\nGia tri can tim o vi tri: k= %d",search);
	tk=timkiemnhiphan(a,n,x);
	printf("\nGia tri can tim o vi tri: k= %d", tk); 
	sapxepluachon(a,n);
	{
		printf("\nMang sau khi sap xep la: ");
		hien(a,n);
	}
	sapxepxen(a,n);
	{
		printf("\nMang sau khi sap xep la: ");
		hien(a,n);
	} 
	sapxepnoibot(a,n);
	{
		printf("\nMang sau khi sap xep la: ");
		hien(a,n);
	} 
	sapxeptructiep(a,n);
	{
		printf("\nMang sau khi sap xep la: ");
		hien(a,n);
	} */
	sapxepnhanh(a,n,trai,phai);
	{
		printf("\nMang sau khi sap xep la: ");
		hien(a,n);
	} 
	getch();
	return 0;
}
