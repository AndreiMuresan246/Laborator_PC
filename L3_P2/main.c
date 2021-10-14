#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int n;
    int a, i, s, d;
    printf("Introduce ti numarul ");
    scanf("%u",&n);
    printf("Cate pozitii in acea directie ");
    scanf("%d",&a);
    /*s=n<<a;
    d=n>>a;
    printf("Numarul %u deplasat la stanga cu %d este %d \n ", n, a, s);
    printf("Numarul %u deplasat la dreapta cu %d este %d ", n, a, d);*/
    s=n;
    d=n;
    for (i=1 ; i<=a ; i++)
    {
            s=s*2;
            d=d/2;
    }
    printf("Numarul %u deplasat la stanga cu %d este %d \n", n, a, s);
    printf("Numarul %u deplasat la dreapta cu %d este %d ", n, a, d);
    return 0;
}
