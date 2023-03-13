/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal Kuis 2 soal 1 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <string.h>
#include <stdio.h>
int main()
{
    char str1[201];                      // deklarasi variabel string pertama
    char str2[201];                      // deklarasi variabel string kedua
    int n;                               // ini untuk menyimpan jumlah huruf yang akan diprint nanti
    int i = 0, j = 0, l = 0, m = 0;      // deklarasi iterasi
    scanf("%s", str1);                   // masukan untuk string pertama
    scanf("%s", str2);                   // masukan untuk string kedua
    scanf("%d", &n);                     // masukan untuk n
    int k = strlen(str1) + strlen(str2); // deklarasi panjang keselurhan string
    while (j < k)                        // proses pengulangan untuk print string sesuai soal
    {                                    //.
        for (i = 0; i < n; i++)          // perulangan untuk print string kedua
        {                                //.
            if (l < strlen(str2))        // kondisi ini memungkinkan jika masih ada karakter pada string
            {                            // sehingga mencegah string acak terprint
                printf("%c", str2[l]);   // print string
                l++;                     // iterasi l naik, bernjak ke karakter selanjtunya
                j++;                     // iterasi untuk kondisi panjang string totak naik
            }                            //.
        }                                //.
        for (i = 0; i < n; i++)          // kurang lebih sama dengan yang sebelumnya
        {                                // namun disini kita print string pertama
            if (m < strlen(str1))        // sesuai soal lah ya
            {                            //.
                printf("%c", str1[m]);   // print string pertama sebanyak n
                m++;                     //.
                j++;                     //.
            }                            // beres deh
        }
    }
    return 0;
}
