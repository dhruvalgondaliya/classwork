#include <stdio.h>
int main()
{

    int d = 50;
    int l = 10;
    int p = d;

    printf("\n d is %d",d);
    printf("\n l is %d",l);

    p = d;
    printf("\n p is %d", d);
    d = l;
    printf("\n d is %d", l);
    printf("\n l is %d",p);
}
