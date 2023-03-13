#include <stdio.h>

int main()
{
    // Deklarasi variabel
    int n; // <-- alokasi array
    // Input alokasi array
    scanf("%d", &n);

    // Deklarasi array dengan n elemen
    int arr[n];

    // proses input ke dalam array arr
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // proses pencarian min dan max
    int min = 999;
    int min2 = 0;
    int max = 0;
    int max2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min && arr[i] < min2)
        {

            min2 = arr[i];
        }
        if (arr[i] < max && arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    // tampilkan min dan max
    printf("Nilai terkecil kedua : %d\n", min2);
    printf("Nilai terbesar kedua: %d\n", max2);

    return 0;
}
