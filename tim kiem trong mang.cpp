#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
// tim kiem tuan tu
int tkiem_tt(int a[], int n, int x){
    for(int i=0;i<n;i++)
        if(a[i]==x) return i;
    return 0;
}
//sap xep giam dan
void sapxep(int a[], int n){
    int tg;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if(a[i]<a[j]){
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
        }
}
//tim kiem nhi phan
int tkiem_nphan(int a[], int n, int x){
    int midle, left, right;
    left=0; right=n-1;
    do{
        midle=(left+right)/2;
        if(x==a[midle]) return midle; //x=a[midle] thi dung Ct va tra ve vi tri x trong mang.
        else if(x>a[midle]) right--;  //vi x>a[midle] giua. nen phai chuyen midle ve dau mang cho den khi tim duooc ket qua hoac =0.
        else left++;    //vi x<a[midle].Nen chay midle  ve phia cuoi mang.
    }while(left!=right); //dung lai khi khong tim duoc gia tri.
    return 0; // tra ve gia tri =0.
}
// phuc vu cho menu dung lai CT.
void hien(int a[], int n){
    printf("\nMang vua nhap la: \n");
    for(int i=0;i<n;i++)
        printf("A[%d]=%d : ",i,a[i]);
    printf("END");
}
void Menu(int &s){
    printf("\n\t\t------Cac chuong trinh da cai dat!-----");
    printf("\n\t\t\t  ****Cherry-LoVe****");
    printf("\n1.Tim kiem tuan tu.");
    printf("\n2.Tim kiem nhi phan.");
    printf("\n0.Exit");
    printf("\nSelect: "); scanf("%d",&s);
}
int main(){
    int n,i,a[100000],x,s;
    char c;
    printf("Nhap so luong phan tu n= ");
    scanf("%d",&n);
    printf("\nNhap tung phan tu mang \n");
    for(i=0;i<n;i++){
        printf("A[%d]= ",i);
        scanf("%d",&a[i]);
    }
    tt:
    printf("\nNhap phan tu can tim kiem x= ");
        scanf("%d",&x);
    Menu(s);
    switch(s){
        case 0: printf("\n\t\t\t*****PHAM-VAN-SON*****");printf("\n\t\t\t    __THANK YOU!__\n\n"); return 0; break;
        case 1: if(a[tkiem_tt(a,n,x)]==x)
                    printf("x=%d o vi tri A[%d]",x,tkiem_tt(a,n,x));
                else printf("Khong ton tai gia tri x=%d",x);
                break;
        case 2: if(a[tkiem_nphan(a,n,x)]==x)
                printf("x=%d o vi tri A[%d]",x,tkiem_nphan(a,n,x));
                else    printf("Khong ton tai gia tri x=%d",x);
                break;
        }
    printf("\n\nCo tiep tuc khong tim kiem khong ? Y/N .Tra loi: ");
    scanf("%s",&c);
    if(c=='Y' || c=='y'){
        system("cls");
        hien(a,n);
        goto tt;
    }
    else
        printf("\n\t\t\t*****PHAM-VAN-SON*****");
        printf("\n\t\t\t    __THANK YOU!__\n\n");
        return 0;
}
