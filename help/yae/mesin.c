#include "header.h"

void init()
{
    // pola setiap angka dapat dibagi menjadi 15 bagian/kotak
    // anggap 15 kotak tersebut memiliki nomor dari 0 - 14
    // index 15 kotak tersebut dapat direpresentasikan dengan sebuah string
    strcpy(pola[0], " B?B BB BB B B?");
    strcpy(pola[1], "XXBXXBXXBXXBXXB");
    strcpy(pola[2], " B?  B B?B?? B?");
    strcpy(pola[3], "XB?X BXB?X BXB?");
    strcpy(pola[4], "B BB B B?  B  B");
    strcpy(pola[5], " B?B?? B?  B B?");
    strcpy(pola[6], " B?B?? B?B B B?");
    strcpy(pola[7], "BB?  B  B  B  B");
    strcpy(pola[8], " B?B B B?B B B?");
    strcpy(pola[9], " B?B B B?  B B?");
    // pola[0] berisi pola untuk angka nol, pola[1] berisi pola untuk angka satu, dst.
    // contoh representasi pola untuk angka 3, dengan string "XB?X BXB?X BXB?"
    // -------------
    // | X | B | ? |
    // -------------
    // | X |   | B |
    // -------------
    // | X | B | ? |
    // -------------
    // | X |   | B |
    // -------------
    // | X | B | ? |
    // -------------
    // ' ' artinya kotak berisi spasi
    // 'B' artinya kotak berisi huruf B
    // 'X' artinya kotak tidak perlu diprint
    // '?' artinya kotak bisa berisi spasi atau tidak perlu diprint
}

// prosedur untuk print sebuah kotak
// "tipe" menentukan isi char dari kotak
void print_kotak(char tipe)
{
    // print char sebanyak ukuran pola
    for (int k = 0; k < tebal; k++)
    {
        printf("%c", tipe);
    }
    // sebenarnya prosedur ini hanya print satu line char (bukan satu kotak)
    // jadi prosedur ini harus berada dalam loop agar bisa membentuk kotak
}

// prosedur untuk print bagian dari angka
// "angka" menentukan angka berapa yang akan diprint
// "baris" menentukan bagian mana saja yang akan diprint
// "akhir" menentukan isi dari kotak dengan argumen '?'
void print_angka(int angka, int baris, int akhir)
{
    // setiap baris dalam pola sebuah angka memiliki 3 kotak (kiri, tengah, kanan)
    // prosedur ini hanya akan memilih 3 kotak di baris yang sama untuk diprint
    // index kotak yang akan diprint ditentukan oleh nilai baris
    int kotak = baris * 3;
    // kondisi kotak bagian kiri
    // jika char berisi 'X', kotak tidak perlu diprint
    if (pola[angka][kotak] != 'X')
    {
        // print kotak bagian kiri
        print_kotak(pola[angka][kotak]);
    }
    // kondisi kotak bagian tengah
    // jika char berisi 'X', kotak tidak perlu diprint
    // jika char berisi '?' di angka terakhir, kotak tidak perlu diprint
    if (pola[angka][kotak + 1] != 'X' && (pola[angka][kotak + 1] != '?' || akhir == 0))
    {
        // jika char merupakan '?' tetapi bukan angka terakhir
        if (pola[angka][kotak + 1] == '?')
        {
            // '?' akan dianggap sebagai spasi
            print_kotak(' ');
        }
        // jika char bukan 'X' atau '?'
        else
        {
            // print kotak bagian tengah
            print_kotak(pola[angka][kotak + 1]);
        }
    }
    // kondisi kotak bagian kanan
    // jika char berisi '?' di angka terakhir, kotak tidak perlu diprint
    if (pola[angka][kotak + 2] != '?' || akhir == 0)
    {
        // jika char berisi '?' tetapi bukan angka terakhir
        if (pola[angka][kotak + 2] == '?')
        {
            // '?' akan dianggap sebagai spasi
            print_kotak(' ');
        }
        // jika char bukan '?'
        else
        {
            // print kotak bagian kanan
            print_kotak(pola[angka][kotak + 2]);
        }
    }
}

// prosedur untuk print sebaris pola
// "ascii" merupakan urutan angka yang akan diprint setiap baris
// "baris" menentukan bagian mana saja yang akan diprint
void print_baris(int ascii[][3], int baris)
{
    // satu baris pola terdiri dari beberapa line, tergantung ukuran pola
    for (int b = 0; b < tebal; b++)
    {
        // loop akan berjalan sebanyak jumlah char dalam string input
        for (int a = 0; a < jumlah; a++)
        {
            // kondisi angka ratusan
            // jika angka ratusan merupakan 0, maka angka tidak perlu diprint
            if (ascii[a][0] != 0)
            {
                // print angka ratusan dari char
                print_angka(ascii[a][0], baris, 0);
                // angka dalam char yang sama dipisahkan oleh 1 kotak spasi
                print_kotak(' ');
            }
            // print angka puluhan dari char
            print_angka(ascii[a][1], baris, 0);
            // angka dalam char yang sama dipisahkan oleh 1 kotak spasi
            print_kotak(' ');
            // kondisi angka satuan
            // jika char ini bukan berada di index terakhir
            if (a < jumlah - 1)
            {
                // print angka satuan dari char
                print_angka(ascii[a][2], baris, 0);
                // angka antara char yang berbeda dipsahkan oleh spasi sebanyak 2 kali tebal
                print_kotak(' ');
                print_kotak(' ');
            }
            // jika char ini berada di index terakhir
            else
            {
                // print angka satuan dari char, dengan parameter akhir = 1
                print_angka(ascii[a][2], baris, 1);
                // lanjut gambar line selanjutnya
                printf("\n");
            }
        }
    }
}