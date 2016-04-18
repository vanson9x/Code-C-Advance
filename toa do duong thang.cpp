#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cmath>

struct Toa_Do
{
	int x;
	int y;
}A,B,C;
void ghi_file()
{
	FILE *f;
	f=fopen("TOADO.txt","wt");
	printf(" Nhap toa do Ax, Ay: ");
	scanf("%d%d",&A.x,&A.y);
	fprintf(f,"%d %d\n",A.x,A.y);
	
	printf(" Nhap toa do Bx, By: ");
	scanf("%d%d",&B.x,&B.y);
	fprintf(f,"%d %d\n",B.x,B.y);
	
	printf(" Nhap toa do Cx, Cy: ");
	scanf("%d%d",&C.x,&C.y);
	fprintf(f,"%d %d\n",C.x,C.y);
	if(f==NULL)
		printf("\n Ghi file khong thanh cong !");
	else
		printf("\n Ghi File thanh cong !");	
}
void hien_file()
{
	FILE *f;
	f=fopen("TOADO.txt","rt");
	if(f==NULL)
		{
			printf("\n Khong tim thay File !\n");
			exit(0);
		}
	else
		printf("\n Doc file thanh cong !\n");
		
	fscanf(f,"%d%d\n",&A.x,A.y);
	fscanf(f,"%d%d\n",&B.x,B.y);
	fscanf(f,"%d%d\n",&C.x,C.y);
	
	printf(" A(%d,%d)\t",A.x,A.y);
	printf(" B(%d,%d)\t",B.x,B.y);
	printf(" C(%d,%d)\n",C.x,C.y);
}
float dodai(Toa_Do A, Toa_Do B)
{
	int s,x,y;
	x=(B.x-A.x);
	y=(B.y-A.y);
	s=x*x+y*y;
	return sqrt(s);
}
bool tamgiac()
{
	float x,y,z;
	x=dodai(A,B);
	y=dodai(B,C);
	z=dodai(C,A);
	if(x+y>z || x+z>y )
		return 1;
	return 0;
}
int main()
{
	ghi_file();
	hien_file();
	printf("\n Do dai doan thang AB=%.1f",dodai(A,B));
	printf("\n Do dai doan thang BC=%.1f",dodai(B,C));
	printf("\n Do dai doan thang CD=%.1f",dodai(C,A));
	if(tamgiac())
		printf("\n co the tao thanh tam giac !");
	else
		printf("\n Khong the tao thanh tam giac !");
	
}
