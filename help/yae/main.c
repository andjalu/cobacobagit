#include "header.h"

int main()
{
    // inisialisasi pola setiap angka
    init();

    scanf("%s", str);    // scan string input
    scanf("%i", &tebal); // scan ukuran pola

    // hitung jumlah char dalam string input
    jumlah = strlen(str);

    // array ascii berisi nilai ascii dari masing-masing char dalam string input
    // setiap nilai char terdiri dari ratusan (0), puluhan (1), dan satuan (2)
    int ascii[jumlah][3];

    // loop untuk memisahkan nilai ascii setiap char ke dalam array ascii
    for (int i = 0; i < jumlah; i++)
    {
        // pisahkan angka ratusan
        ascii[i][0] = str[i] / 100;
        // pisahkan angka puluhan
        ascii[i][1] = str[i] / 10 % 10;
        // pisahkan angka satuan
        ascii[i][2] = str[i] % 10;
    }

    // print kelima baris pola
    for (int i = 0; i < 5; i++)
    {
        print_baris(ascii, i);
    }

    return 0; // eh ibu, ini gapake fungsi gapapa kan?
}

// awalnya pengen coba dapet ijo tapi skornya 0 menit
// pas dikasih tahu udah bisa upload, langsung coba dan ijo sih
// tapi malah dapet skor 44 ribuan :(