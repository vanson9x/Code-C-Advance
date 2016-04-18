#include<iostream>
using namespace std;
//Bai toan sap xep thoi gian tu muon toi som.
struct Time{
        int h;
        int m;
        int s;
    }Ti,Tj,tg;
Time a[]={{3,2,40},{3,2,26},{5,16,13},{5,14,20}};
bool kt(Time &t1, Time &t2){
    if(t1.h>t2.h) return 1;
    else{
        if(t1.h==t2.h && t1.m>t2.m) return 1;
        else if(t1.m==t2.m && t1.s>=t2.s) return 1;
            else return 0;
    }
}
int main(){
    for(int i=0;i<4;i++)
    for(int j=i+1;j<4;j++){
        Ti=a[i]; Tj=a[j];
        if(!kt(Ti,Tj)){
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
        }
    }
    for(int i=0;i<4;i++){
        tg=a[i];
        cout<<tg.h<<"-"<<tg.m<<"-"<<tg.s<<endl;
    }
}
