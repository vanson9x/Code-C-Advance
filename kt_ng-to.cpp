#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,i;
	printf("Nhap so nguyen n= ");
	scanf("%d",&n);
	if(n<2){
		printf("%d Khong phai so nguyen to!",n);
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++)
	if(n%2==0){
		printf("%d khong phai so nguyen to",n);	
	     return 0;
		}
	printf("%d la so nguyen to!",n);
	getch();
}
