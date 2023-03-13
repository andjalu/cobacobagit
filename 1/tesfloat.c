#include <stdio.h>
int main()
{
    float bil;
    int depan;
    int belakang;
    scanf("%f", &bil);
    depan = bil;
    belakang = (bil - depan) * 100;
    printf("bilangan depan : %d", depan);
    printf("belakang : %d", belakang);
}