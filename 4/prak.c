#include <stdio.h>
int main()
{
    int baris, kolom;
    int n;
    int bil = 1;
    scanf("%d", &n);
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = n - baris; kolom >= 0; kolom--)
        {
            printf(" ", kolom);
        }
        for (kolom = 2; kolom <= baris; kolom++)
        {
            printf("%d", bil);
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d", bil);
        }
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf(" ", kolom);
        }
        for (kolom = 0; kolom <= n; kolom++)
        {
            printf("%d", bil);
        }
        printf("\n");
        bil += 1;
    }

    for (baris = 2; baris <= n; baris++)
    {

        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf("%d", bil);
        }
        for (kolom = n - baris; kolom >= 0; kolom--)
        {
            printf("%d", bil);
        }
        printf("\n");
        bil += 1;
    }
    return 0;
}