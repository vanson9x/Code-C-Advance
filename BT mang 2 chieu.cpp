#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,max1,max2;
    int a[100][100],b[100];
    cout<<"Nhap m dong va n cot: ";
    cin>>m>>n;
    max1=a[0][0];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           {
             cin>>a[i][j];
             if(max1<a[i][j])
                max1=a[i][j];
           }
    int s=0,k=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                s=s+a[i][j];
            }
        b[k]=s;
        k++;
        s=0;
    }
    max2=b[0];
    for(i=0;i<m;i++)
        if(max2<b[i])
            max2=b[i];
    cout<<"Phan tu lon nhat trong mang="<<max1;
    cout<<endl<<"Tong lon nhat cua hang la="<<max2;

}
