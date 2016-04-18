#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cmath>
using namespace std;

int64_t h=10, a[1000000], b[1000000], c[10000000];

int main()
{
    int i,j;
    char s1[100000], s2[100000];
    cout<<"\t Kiem tra xem s2 co phai la con cua chuoi s1 khong ? \n\n";
    cout<<"\n Nhap chuoi s1: "; gets(s1);
    cout<<"\n Nhap chuoi s2: "; gets(s2);
   // strcpy(s1,"1234567");
   // strcpy(s2,"23");
    a[0]=s1[0]-48;
    b[0]=s2[0]-48;
    for(i=1;i<strlen(s1);i++)
            a[i]=a[i-1]*h+s1[i]-48;
    for(i=1;i<strlen(s2);i++)
        b[i]=b[i-1]*h+s2[i]-48;
 //
    int x = 1;
    for(int i=0;i<strlen(s2);i++)
        x*=h;
    int64_t y;
    int kt=0;
    if(b[strlen(s2)-1]==a[strlen(s2)-1])
        kt=1;
    else
    for(i=strlen(s2),j=0;i<strlen(s1);j++,i++)
        {

            y=a[i]-a[j]*x;
           // cout<<a[i]<<" "<<a[j]<<" "<<y<<endl;
            if(y == b[strlen(s2)-1])
            {
                kt=1;
                break;
            }
        }
    if(kt)
        cout<<"\n YES !";
    else
    cout<<"\n NO !";
}
