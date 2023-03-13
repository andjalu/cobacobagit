/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal Kuis 1 soal 2 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h> //ini library
int main()
{
    int n;           // ini deklarasi variabel untuk banyaknya array
    scanf("%d", &n); // ini masukan untuk banyaknya array
    int arr1[n];     // ini deklarasi array dengan alokasi sejumlah n

    for (int i = 0; i < n; i++) // ini perulangan untuk masukan array integer
    {
        scanf("%d", &arr1[i]); // ini masukannya
    }
    for (int i = 0; i < n - 1; i++) // ini perulangan untuk penjumlahan array
    {                               // jadi aray pada i akan dijumlahkan dengan array pada i+1
        arr1[i] += arr1[i + 1];
    }
    for (int i = 0; i < n - 1; i++) // tinggal di print deh
    {                               // pendek juga ternyata

        printf("%d\n", arr1[i]);
    }
}