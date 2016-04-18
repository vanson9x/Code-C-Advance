#include "stdio.h"
#include "math.h"
int main()
{
    int bin[100][100]={0};
    int n, a, s, i , j, k;
    do
    {
        scanf("%d", &a);
    }while(a>6); // vi 2^7 = 128 > 100. Vuot qua mang 2 chieu xin cap phat o tren.

    s = n = pow(2,a);
    for(i=1;i<=a;i++)
    {
        s/=2;
        j=1; j+=s;
        for(j;j<=n;j+=(s*2))
            {
                for(k=j;k<j+s;k++)
                    bin[i][k]++;
            }
    }

    // Hien ket qua
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=a;j++)
            printf("%d ", bin[j][i]);
        printf("\n");
    }
    return 0;
}
