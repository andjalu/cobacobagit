/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 1 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h> //buat library
int main()
{
    int a, b, c;                   // deklarasi variabel untuk ramuan a,b,c
    char half, mix;                // deklarasi untuk masukan mana ramuan yang setengah dan apa metodenya
    scanf("%d %d %d", &a, &b, &c); // masukan untuk volume dasar ramuan a,b,c
    scanf(" %c", &half);           // masukan untuk ramuan apa yang akan dimasukkan setengah
    scanf(" %c", &mix);
    int syarat = 0;

    if (half == 'a')
    {
        a = a / 2;
    }
    else if (half == 'b')
    {
        b = b / 2;
    }
    else if (half == 'c')
    {
        c = c / 2;
    }

    int vol = a + b + c;

    if (mix == 'A')
    {
        vol = vol + 8;
    }
    else if (mix == 'K')
    {
        vol = vol * 3;
    }

    if ((vol > 20) && (vol < 50))
    {
        syarat++;
    }
    if ((vol % 4 == 0) || (vol % 6 == 0))
    {
        syarat++;
    }
    if ((c < a) && (c < b))
    {
        syarat++;
    }
    if (syarat >= 2)
    {
        printf("Ramuan sukses dibuat!\n");
    }
    else
    {
        printf("Ramuan gagal!\n");
    }
    return 0;
}