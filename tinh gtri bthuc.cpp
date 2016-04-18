
// Tính giá trị biểu thưc: Sum(n)=1+1/2+1/3+...+1/n;
#include<iostream>
using namespace std;
float sum(int n, float s){
    if(n==0) return s;
    s+=(float)1/n;
    return sum(n-1,s);
}
int main(){
    int n;
    float s=0;
    cin>>n;
    cout<<sum(n,s);
}
