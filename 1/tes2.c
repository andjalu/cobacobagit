#include <stdio.h>
int main()
{
    int x1, x2, m;
    int g = 10;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &m);
    float x3 = ((x2 - x1) / (float)100);
    float konstanta = (g * m) / x3;
    float hasil = (konstanta * (x3 * x3)) / 2;
    printf("hasil: %0.1f", hasil);
    return 0;
}