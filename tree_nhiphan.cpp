#include "iostream"
#include "cmath"
#include "fstream"
#include "windows.h"
using namespace std;

int i,j,m=1,n,dosau;
int a[100];
pair<int,int> b[100], bien, NL, NR;
int _min(int x, int y)
{
    if(x<y)
        return x;
    else
        return y;
}
void nhap()
{
   // cin>>n;
   // for(i=0;i<n;i++)
     //   cin>>a[i];
     freopen("tree.txt","r",stdin);
        cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];

}
void install()
{
    int x,y;
    for(i=1;;i++)
    {
        m*=2;
        if(m>=n)
            {
                dosau=i;
                break;
            }
    }

    for(i=0,j=m;i<n;j++,i++)
        {
            b[j].first=a[i];
            b[j].second=i;
        }
    bien=b[j-1];
    for(i=(m+n-1)/2;i>=1;--i)
    {
        if(b[i*2] == bien)
        {
            b[i]=bien;;
            bien=b[i];
        }
        else
        b[i]=b[i*2].first<b[i*2+1].first?b[i*2]:b[i*2+1];
    }
}
void hien();
void cuctri_min()
{
    int x=4,y=5, l, r ;
   l=m+x-1; NL=b[l];
   r=m+y-1; NR=b[r];
   for(i=l,j=r;;j/=2,i/=2)
       {
           if(b[(i/2)*2]==NL)
                NL=b[i/2]=b[(i/2)*2].first < b[(i/2)*2+1].first ? b[(i/2)*2]:b[(i/2)*2+1];
            else
                b[i/2]=b[(i/2)*2+1];

            if(b[(j/2)*2]==NR)
                b[j/2]=b[(j/2)*2];
            else
                NR=b[j/2]=b[(j/2)*2].first < b[(j/2)*2+1].first ? b[(j/2)*2]:b[(j/2)*2+1];

           if(i==j)     break;
       }
       if(b[i*2].first < b[i*2+1].first)
            cout<<b[i*2].first<<"-"<<b[i*2].second;
        else
            cout<<b[i*2+1].first<<"-"<<b[i*2+1].second;
}
void hien()
{
   // cout<<m+n<<endl;
    for(i=1;i<m+n;i++)
    cout<<b[i].first<<"-"<<b[i].second<<endl;
}
int main()
{
    nhap();
    install();
   // cout<<m;
    cuctri_min();
    return 0;
}
