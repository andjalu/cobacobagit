/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal Kuis 1 soal 1 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h> //ini library
#include <math.h>  //ini library untuk membantu penghitungan
int main()
{
    int x1, x2, x3, x4, x5, x6;                                   // deklarasi titik x
    int y1, y2, y3, y4, y5, y6;                                   // deklarasi titik y
    int hasil1, hasil2, hasil3;                                   // ini untuk perbandingan hasil
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);                     // ini untuk masukannya
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);                     // ini sama
    scanf("%d %d %d %d", &x5, &y5, &x6, &y6);                     // ini sama
    hasil1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); // ini rumus untuk mencari jarak pasangan titiknya
    hasil2 = sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));
    hasil3 = sqrt((x6 - x5) * (x6 - x5) + (y6 - y5) * (y6 - y5));           // dan ini sesuai urutan buat if dan if elsenya
    if ((hasil1 > hasil2 && hasil1 < hasil3) || (hasil1 > 3 && hasil1 < 2)) // ini klo misal yang tengah adalah hasil 1
    {                                                                       // dan dia bakal print hasil
        printf("%d %d %d %d %d\n", x1, y1, x2, y2, hasil1);
    }
    else if ((hasil2 > hasil1 && hasil2 < hasil3) || (hasil2 > hasil3 && hasil2 < hasil1)) // klo if sebelumnya gamasuk maka dia masuk sini
    {                                                                                      // print yang ini dan mengabaikan yang sebelum dan sesudah
        printf("%d %d %d %d %d\n", x3, y3, x4, y4, hasil2);
    }
    else if ((hasil3 > hasil1 && hasil3 < hasil2) || (hasil3 > hasil2 && hasil3 < hasil1)) // kurleb sama seperti yang sebelumnya
    {
        printf("%d %d %d %d %d\n", x5, y5, x6, y6, hasil3);
    }

    if (hasil1 < hasil2 && hasil1 < hasil3) // ini untuk yang terkecil
    {                                       // lebih simple dari yang tengah-tengah
        printf("%d %d %d %d %d\n", x1, y1, x2, y2, hasil1);
    }
    else if (hasil2 < hasil1 && hasil2 < hasil3)
    {
        printf("%d %d %d %d %d\n", x3, y3, x4, y4, hasil2);
    }
    else if (hasil3 < hasil1 && hasil3 < hasil2)
    {
        printf("%d %d %d %d %d\n", x5, y5, x6, y6, hasil3);
    }

    if (hasil1 > hasil2 && hasil1 > hasil3) // ini untuk yang terbesar
    {
        printf("%d %d %d %d %d\n", x1, y1, x2, y2, hasil1); // kebawahnya kurleb sama
    }
    else if (hasil2 > hasil1 && hasil2 > hasil3)
    {
        printf("%d %d %d %d %d\n", x3, y3, x4, y4, hasil2);
    }
    else if (hasil3 > hasil1 && hasil3 > hasil2)
    {
        printf("%d %d %d %d %d\n", x5, y5, x6, y6, hasil3);
    }
    return 0;
}