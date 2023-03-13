/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal Kuis 2 soal 2 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <string.h>
#include <stdio.h>

int main()
{
    int n;                                                    // deklarasi masukan untuk banyaknya string
    int length;                                               // deklarasi untuk panjang string terbesar
    int gg = 1;                                               // indikator ganjil genap
    scanf("%d", &n);                                          // masukan banyaknya string
    char str[n][201];                                         // string sebanyak n dengan 200 karakter
    for (int i = 0; i < n; i++)                               // perulangan untuk masukan string
    {                                                         //.
        scanf("%s", str[i]);                                  // masukan untuk string
        if (strlen(str[i]) > length && gg % 2 != 0)           // perulangan untuk medapatkan jumlah karater string terpanjang
        {                                                     // jika string merupakan urutan ganjil dan lebih besar dari sebelumnya
            length = strlen(str[i]);                          // jika lebih panjang dari yang sebelumnya ia akan berubah
        }                                                     //.
        gg++;                                                 // indikator ganjil genap bertambah
    }                                                         //.
    gg = 1;                                                   // reset ke awal
    int i = 0;                                                // deklarasi iterasi
    while (i < n)                                             // selama masih ada kata ia akan looping
    {                                                         //.
        if (gg % 2 != 0)                                      // jika kata urutan ganjil
        {                                                     // ia akan print spasi sesuai string urutan ganjil terpanjang
            for (int j = 0; j < length - strlen(str[i]); j++) //.
            {                                                 //.
                printf(" ");                                  // print spasi
            }                                                 //.
            printf("%s\n", str[i]);                           // print string urutan ganjil
        }                                                     //.
        if (gg % 2 == 0)                                      // jika string urutan genap
        {                                                     //.
            for (int j = 0; j < length; j++)                  //. print spasi sepanjang karakter urutan ganjil terpanjang
            {                                                 //.
                printf(" ");                                  // print spasi
            }                                                 //.
            printf("%s\n", str[i]);                           // print string urutan genap
        }                                                     //.
        gg++;                                                 // iterator ganjil genap bertambah
        i++;                                                  // iterator untuk banyaknya string bertambah
    }                                                         // proses berhenti jika string habis
    return 0;
}
