#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int a,b,c,d,n;
void bai3(){
    cout<<"Cac so thoa man a+b=c^2 la:\n";
    for(int i=100;i<=994;i++){
        n=i;
        c=n%10; n/=10;
        a=n/10; b=n%10;
        if(pow(c,2)==a+b)
            cout<<a<<b<<c<<"\t";
    }
}
void bai4(){
    cout<<"Cac so thoa man a+b=c+d la:\n";
    for(int i=1000;i<=9999;i++){
        n=i;
        d=n%10; n/=10;
        c=n%10; n/=10;
        b=n%10; a=n/10;
        if(a+b==c+d) cout<<a<<b<<c<<d<<"\t";
    }
}
void bai6(){
    cout<<"Cac so thoa man 2a=b+c la:\n";
    for(int i=100;i<=994;i++){
        n=i;
        c=n%10; n/=10;
        a=n/10; b=n%10;
        if(2*a==b+c)
            cout<<a<<b<<c<<"\t";
    }
}
void Menu(int &c){
    cout<<"\t\t-----CAC CHUONG TRINH DA CAI DAT-----";
    cout<<"\n1.Cac so co 3 chu so co dang abc thoa ma: a+b=c^2.";
    cout<<"\n2.Cac so co 3 chu so co dang abc thoa ma: 2a=b+c.";
    cout<<"\n3.Cac so co 4 chu so co dang abcd thoa ma: a+b=c+d.";
    cout<<"\n0.Exit";
    cout<<"\nSelect: "; cin>>c;
}
int main(){
    int c;
    char tl{'Y'};
    tt:
    Menu(c);
    switch(c)
    {
        case 0: exit(0); break;
        case 1: bai3(); break;
        case 2: bai6(); break;
        case 3: bai4(); break;
    }
    cout<<"\nBan co muon tiep tuc k ? Y/N="; cin>>tl;
    if(tl=='Y'){
        system("cls");
        goto tt;
    }
    else exit(0);
}
