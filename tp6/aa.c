#include <stdio.h>
typedef struct
{
    int idxi, namai, bineri;
    char nama[100];
    char idx[100];
    int biner[100];
} kode;

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    kode x[n];
    int k;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        scanf(" %c", &x[i].nama[0]);
        while (x[i].nama[j] != ';')
        {
            j++;
            scanf(" %c", &x[i].nama[j]);
        }
        x[i].namai = j;
        j = 0;
        scanf(" %c", &x[i].idx[0]);
        while (x[i].idx[j] != '.')
        {
            j++;
            scanf(" %c", &x[i].idx[j]);
        }
        x[i].idxi = j;
    }
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = 0;
        for (int j = 0; j < x[i].idxi; j++)
        {

            ans[i] += x[i].nama[x[i].idx[j] - '0'];
        }
    }
    printf("Biner awal\n");
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int num = ans[i];
        for (; num > 0;)
        {
            x[i].biner[j++] = num % 2;
            num /= 2;
        }
        x[i].bineri = 0;
        for (int k = j - 1; k >= 0; k--)
        {
            printf("%d", x[i].biner[k]);
            x[i].bineri++;
        }
        if (x[i].bineri == 0)
        {
            x[i].biner[0] = 0;
            printf("%d", x[i].biner[0]);
        }

        printf("\n");

        /* code */
    }
    printf("\n");
    printf("Kode Rahasia\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c%c-%d-", x[i].nama[0], x[i].nama[x[i].namai - 1], ans[i]);
        int temp = x[i].bineri;
        for (int j = 0; j < 6; j++)
        {
            temp--;
        }
        if (x[i].bineri == 0)
        {
            printf("%d%d-%d%d-%d%d", 0, 0, 0, 0, 0, 0);
        }
        else
        {
            for (int j = x[i].bineri - 1; j >= temp; j -= 2)
            {
                printf("%d", x[i].biner[j]);
                j == temp + 1 ? printf("%d", x[i].biner[j - 1]) : printf("%d-", x[i].biner[j - 1]);
            }
        }
        printf("\n");
    }

    return 0;
}
