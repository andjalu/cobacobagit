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
    scanf(" %c", &mix);            // masukan untuk cara meracik
    int vol;                       // deklarasi volume setelah dicampur
    int syarat = 0;                // deklarasi syarat yang harus dipenuhi

    if (mix == 'A') // ini dijalankan kalo yang dimix dengan cara diaduk
    {
        if (half == 'a') // jika yang dibagi setengah itu yg a
        {
            a = a / 2;
        }
        else if (half == 'b') // ini klo b
        {
            b = b / 2;
        }
        else if (half == 'c') // ini klo c
        {
            c = c / 2;
        }
        vol = a + b + c + 8; // ini rumus tambahan kalo diaduk
    }
    else if (mix == 'K') // ini dijalankan kalo yang dimix dengan cara dikocak
    {
        if (half == 'a') // seperti sebelumnya
        {
            a = a / 2;
        }
        else if (half == 'b') // sama
        {
            b = b / 2;
        }
        else if (half == 'c') // sama sepertinya
        {
            c = c / 2;
        }
        vol = (a + b + c) * 3; // ini rumus tambahan kalo dikocak
    }
    if (vol % 2 == 0) // ini syarat utama yang sempat saya lupakan, klo volumenya ganjil bukan circle kami
    {
        if ((c < a) && (c < b)) // ini syarat pertama dari mang albert
        {
            syarat++; // syarat nambah 1 klo 2 nanti bakal lulus uji tes ipb dan itb
        }
        if ((vol > 20) && (vol < 50)) // ini syarat kedua dari teh ellin
        {
            syarat++; // ini nambah lagi klo bener
        }
        if ((vol % 4 == 0) || (vol % 6 == 0)) // ini syarat terakhir dari bang stanley untuk memilikimu eh bukan
        {
            syarat++;
        }
    }
    if (syarat >= 2) // ini klo syarat yang tadi udah kepenuhi minimal 2
    {
        printf("Ramuan sukses dibuat!\n");
    }
    else // ini klo gak terpenuhi,NT gan
    {
        printf("Ramuan gagal!\n"); // kegagalan sering terjadi, tapi kita harus bangkit dan terus menyongsong masa depan yang ceriya
    }
    return 0;
}