#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    double a,x;
    scanf("%d", &n);
    scanf("%lf", &a);
    for (int i=1; i<=n; i++)
    {
        x=pow(a,i);
        printf("Putere:%d, Rezultat in vorgula mobila:%lf, Rezultat doar in 3 zecimale:%.3lf, Rezultat stiintific:%E", i, x, x, x);
        x=log(a);
        printf(" Logaritm:%.2lf\n", x);
    }
}
