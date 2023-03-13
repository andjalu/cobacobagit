/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 1 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h> //ini adalah library
int main()
{
    int r, s, detik, jam, menit, sec;                             // deklarasi variabel jari-jari, panjang pelukis dan satuan waktu
    double luasPermukaan;                                         // deklarasi variabel luaspermukaan
    scanf("%d", &r);                                              // masukan untuk jari jari
    scanf("%d", &s);                                              // masukan untuk panjang pelukis
    luasPermukaan = 3.14 * r * (r + s);                           // rumus untuk luas permukaan
    printf("Luas Permukaan : %0.2f cm persegi\n", luasPermukaan); // print hasil
    detik = luasPermukaan * 100;                                  // rumus untuk mendapatkan detik
    jam = detik / 3600;                                           // rumus untuk jam
    detik = detik - (3600 * jam);
    menit = detik / 60;                                                       // kurleb sama
    sec = detik - (60 * menit);                                               // kurleb sama
    printf("Waktu Pengerjaan : %d Jam %d Menit %d Detik\n", jam, menit, sec); // keluaran untuk hasil akhir
    return 0;
    // BANG CAPE BANG COMPILERNYA JELEK
    // baru tp 1 dah bac luck gini
    // pls cspc dont't hate me
}