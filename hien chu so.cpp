#include<stdio.h>
#include<conio.h>
#include<string.h>
char s[99];
void so(int n)
{
    char chu[11][99]= {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin","muoi"};
    int muoi,donvi,chuc;
    s[0] = 0;
    if(n<=10)  strcat(s, chu[n]);
    else
    {
        donvi = n % 10;
        n /= 10;
        chuc = n % 10;
        strcat(s, chu[chuc]);
        strcat(s, " muoi ");
        strcat(s,chu[donvi]);
    }
}
int main()
{
    int donvi,n;
    printf("\n-Nhap mot so ");
    scanf("%d", &n);
    so(n);
    printf("so %d doc la: %s \n", n, s);
    getch();
}
