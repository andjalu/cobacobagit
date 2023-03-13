#include <stdio.h>
int main()
{
    // Deklarasi variabel
    int n;        // <-- alokasi array
    int min, max; // <-- penampung min dan max

    // Input alokasi array
    printf("Masukkan alokasi array: ");
    scanf("%d", &n);

    // Deklarasi array dengan n elemen
    int arr[n];

    // proses input ke dalam array arr
    printf("Masukkan nilai sebanyak %d :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // proses pencarian min dan max
    min = 999;
    max = 0;
    int index1, index2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index1 = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            index2 = i;
        }
    }
    // tampilkan min dan max
    printf("Nilai terkecil : %d\n", index1);
    printf("Nilai terbesar : %d\n", index2);

    return 0;
}
