
#include "header.h"
int main()
{
    int n;
    int j = 0;

    scanf("%d", &n);
    int angka[n][256];
    int besar;
    int a = 3;
    int no[n];
    for (int i = 0; i < n; i++)
    {

        for (j = 0; j < 4; j++)
        {
            scanf("%d", &angka[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        no[i] = 0;
        if (i % 2 == 0)
        {
            if (terkecil(angka[i]) >= 10)
            {
                a++;
                besar += 1;
                no[i] += 1;
            }
            if (terkecil2(angka[i]) >= 10)
            {
                a++;
                besar += 1;
                no[i] += 1;
            }
            if (terkecil(angka[i]) >= 100)
            {
                a++;
                besar += 1;
                no[i] += 1;
            }
            if (terkecil(angka[i]) >= 100)
            {
                a++;
                besar += 1;
                no[i] += 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < besar - no[i]; j++)
            {
                printf(" ");
            }
        }
        if (i % 2 != 0)
        {
            for (int j = 0; j < a; j++)
            {
                printf(" ");
            }
        }
        printf("%d %d\n", terkecil(angka[i]), terkecil2(angka[i]));
    }

    return 0;
}
