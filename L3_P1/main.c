#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
double functie(double i)
{
    double r;
    r = (pow(i,4)) - (5*pow(i,2)) + (3*i) + 20;
    return r;
}
int main()
{
    double n, m;
    double r, eps = 0.001, minim , val_minim, i;
    printf("Introduce-ti valorile intervalului in care f(x) exista ");
    scanf("%lf", &n);
    scanf("%lf", &m);
    minim = f(n);
    for(i = n; i <= m; i = i + eps)
    {
        r = functie(i);
        if (minim > r)
        {
            minim = r;
            val_minim = i;
        }
    }
    printf("Valoarea pentru care functia f(x) este minima este x = %lf, iar valoarea functiei f(%lf) este %lf", val_minim, val_minim, minim);
    return 0;
}
