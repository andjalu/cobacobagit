#include <stdio.h>
int main()
{
    int n, m, hasil1, hasil2;
    scanf("%d", &n);
    scanf("%d", &m);
    hasil1 = n / m;
    hasil2 = n % m;
    printf("masing masing: %d kaos\n", hasil1);
    printf("sisas %d kaos\n", hasil2);
    return 0;
}