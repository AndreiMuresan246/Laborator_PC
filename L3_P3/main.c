#include <stdio.h>
#include <stdlib.h>
int binar(int x)
{
    printf("Numarul %d", x);
    int s, p=1,r, nr=0;
    if(x<0)
    {
        x=-x;
        s=1;
    }
    while(x)
    {
        r=x%2;
        nr=nr+r*p;
        p=p*10;
        x=x/2;
    }
    if (s==1)
    {
        nr=nr+1*p;
    }
    else
    {
        nr=nr+0*p;
    }
    printf(" are valoarea  binara %d ", nr);
}
int hex(int x)
{
    printf("si valoarea hexagonala %x", x);
}
int main()
{
    int n;
    scanf("%d", &n);
    binar(n);
    hex(n);
    return 0;
}
