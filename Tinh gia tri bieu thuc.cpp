#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int n,s;
int bai_1a(){
    for(int i=1;i<=n;i=i+2)
        s+=i;
    return s;
}
int bai_1b(){
    for(int i=2;i<=n;i=i+1)
        s+=i;
    return s;
}
int bai_2a(){
    for(int i=1;i<=n;i++){
        s+=pow(i,2);
    }
return s;
}
int giaithua(int x){
    s=1;
    for(int i=1;i<=x;i++)
        s*=i;
    return s;
}
int bai_2b(){
    int S=0;
    for(int i=1;i<=n;i++)
        S+=giaithua(i);
    return S;
}
float bai_2c(){
    float f=0;
    for(int i=1;i<=n;i++)
        f+=1/pow(i,2);
    return f;
}
void Menu(int &a){
    cout<<"\t\t\t-----TINH GIA TRI BIEU THUC-----";
    cout<<"\n 1. S=1+3+5+...+(2n-1)";
    cout<<"\n 2. S=2+4+6+...+(2n)";
    cout<<"\n 3. S=1+4+9+...+(n^2)";
    cout<<"\n 4. S=1!+2!+3!+...+n!";
    cout<<"\n 5. S=1+1/2+1/4+1/9+...+1/n^2";
    cout<<"\n Select:";
    cin>>a;
}

int main(){
    int a;
    char c={'Y'};
    cout<<"Nhap so nguyen n=";
    cin>>n;
    tt:
    Menu(a);
    switch(a){
        case 1: cout<<" Ket qua: S="<<bai_1a()<<endl; break;
        case 2: cout<<" Ket qua: S="<<bai_1b()<<endl; break;
        case 3: cout<<" Ket qua: S="<<bai_2a()<<endl; break;
        case 4: cout<<" Ket qua: S="<<bai_2b()<<endl; break;
        case 5: cout<<" Ket qua: S="<<bai_2c()<<endl; break;
    }
    cout<<"\nTiep tuc khong ?. Y/N  Return: ";
    cin>>c;
    if(c=='Y'){
        system("cls");
        cout<<"N="<<n<<endl;
        s=0;
        goto tt;
    }
    else cout<<"\n\t\t\tTHANKS !";
}
