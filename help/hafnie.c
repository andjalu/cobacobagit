#include <stdio.h>
#include <stdlib.h>

void tukar(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    printf("masukan jumlah elemen : ");
    scanf("%d", &n);
    int A[n];
    int i, j, k, l, m = 0, temp, iMax;

    for (i = 0; i < n; i++)
    {
        scanf(" %d", &A[i]);
    }

    printf("\nsebelum disorting : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n\n");

    printf("BUBBLE SORT");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("\niterasi ke-%d : ", m); // print disini agar setiap angka berpindah terprint
            for (k = 0; k < n; k++)
            {
                printf(" %d", A[k]);
            }
            m++; // akan bertambah setiap iterasi dan tidak akan tereset seperti variabel j
            if (A[j] < A[j - 1])
            {
                temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp;
            }
        }
    }

    printf("\nsetelah disorting : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }
    printf("\n\n");
    printf("\n SELECTION SORT \n");
    printf("\nsebelum disorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    printf("SELECTION SORT");
    for (i = 0; i < n; i++)
    {
        iMax = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] > A[iMax])
            {
                iMax = j;
            }
        }
        printf("\niterasi %d : ", i + 1);
        for (k = 0; k < n; k++)
        {
            printf("%d ", A[k]);
        }
        tukar(&A[i], &A[iMax]); // gunakan pass by reference sehingga nilai berubah
    }

    printf("\nsetelah disorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}