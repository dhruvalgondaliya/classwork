#include <stdio.h>
int main()
{

    int d;
    int hra;
    int da;
    int ta;

    printf("Enter your salary");
    scanf("%d", &d);

    printf("\n hra is %d", hra = d * 10 / 100);
    printf("\n da is %d", da = d * 5 / 100);
    printf("\n ta is %d", ta = d * 8 / 100);

    printf("\n Total salary is %d", d + hra + da + ta);
    return 0;
}