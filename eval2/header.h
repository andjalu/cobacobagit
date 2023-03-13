/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal eval dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <string.h>
#include <stdio.h>

typedef struct
{
    char str1[256]; // ini buat nyimpen string sebelum #
    char str2[256]; // ini string terakhir stelah #
    char str3[256]; // ini string antara 2 #
} data;

void input(data *arr, int n, char temp[]); // ini buat bersihin string dari _ dan #
void ubah(data *arr, int n, int k);        // ini ngubah dulu ke huruf kecil semua
int anagram(char str1[], char str2[]);     // ini buat anagram
int palindrom(char str[]);                 // ini palindrom