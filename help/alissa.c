/*User memasukkan input sebuah integer, kemudian user menginputkan sejumlah integer yang berupa nilai dengan jumlah integer pertama
kemudian urutkan nilai - nilai tersebut secara ascending menggunakan bubble sort
print setiap pergantian nilai swap/iterasi
dan urutkan nilai - nilai tersebut secara descending menggunakan selection sort
print setiap pergantian nilai swap/iterasi

4

89
20
30
67

//iterasi bubble sort
contoh
i-0 : 89 20 30 67
i-1 : 20 89 30 57
*/

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
    printf("Masukan Jumlah Iterasi Array ");
    scanf("%d", &n);
    int A[n];
    int i, j, k, temp, iMin;
    int swap = 0;

    for (i = 0; i < n; i++)
    {
        printf("Masukan Variabel Iterasi ke-%d ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Sebelum diurutkan: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
    printf("\nascending Bubble Sort");
    /*for (i=0;i<=n-1;i++){
        for(j=n-1;j>0;j--){
            if(A[j]<A[j-1]){
                tukar(A[j],A[j-1]);
            }*/
    j = 0;
    printf("\nIterasi ke-%d\n", j);
    for (k = 0; k < n; k++)
    {
        printf("%d ", A[k]);
    }

    do
    {
        swap = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
                swap = 1;
                printf("\nIterasi ke-%d\n", j + 1);
                for (k = 0; k < n; k++)
                {
                    printf("%d ", A[k]);
                }
                j++;
            }
        }

    } while (swap == 1);

    printf("\n\nSetelah diurutkan: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
    printf("\ndescending Selection Sort");
    printf("\nIterasi ke-0\n");
    for (k = 0; k < n; k++)
    {
        printf("%d ", A[k]);
    }
    for (i = 0; i < n - 1; i++)
    {
        iMin = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[iMin] < A[j])
            {
                iMin = j;
            }
        }
        tukar(&A[i], &A[iMin]);
        printf("\nIterasi ke-%d\n", i + 1);
        for (k = 0; k < n; k++)
        {
            printf("%d ", A[k]);
        }
    }
    printf("\n\nSetelah diurutkan: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    system("PAUSE");
    return 0;
}