#include "iostream"
#include "cmath"
#include "deque"

using namespace std;

deque <pair<int,int> > dq;
int i,j,m,n,bien;
int a[100], b[100];

int _min(int x, int y)
{
    if(x<y)
        return x;
    else
        return y;
}
void nhap()
{
   // cout<<"Nhap so luong nut la: ";
    cin>>n;
   // cout<<"Nhap gia tri cho la: ";
    for(i=0;i<n;i++)
        cin>>a[i];
}
void install()
{
    int x,y;
    m=sqrt(n);
    if(m!=sqrt(n))
        m++;
    m*=m;
    for(i=0,j=m;i<n;j++,i++)
        {
            b[j]=a[i];
            if(j%2==0)
                dq.push_back(j/2);
        }
    bien=a[n-1];
    while(!dq.empty())
    {
        x=dq.front();
        dq.pop_front();
        if(b[x*2]==bien)
        {
            b[x]=b[x*2];
            bien=b[x];
        }
        else
            b[x]=_min(b[x*2],b[x*2+1]);

        if(x!=1 && x%2==0)
            dq.push_back(x/2);
    }
}

void hien()
{
   // cout<<m+n<<endl;
    for(i=1;i<m+n;i++)
        cout<<b[i]<<" ";
}
int main()
{
    nhap();
    install();
    hien();
    return 0;
}
