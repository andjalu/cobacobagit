/*
    Saya Achmad Fauzan NIM 2108061 mengerjakan soal Tugas Masa Depan dalam
    mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

char pola[10][16]; // string yang berisi pola masing-masing angka
char str[100];     // string input yang menentukan angka apa saja yang akan diprint
int jumlah;        // jumlah char dalam string input
int tebal;         // ukuran pola

void init();                     // prosedur untuk menginisialisasi pola angka
void print_kotak(char);          // prosedur untuk menggambar sebuah kotak
void print_angka(int, int, int); // prosedur untuk menggambar bagian dari angka
void print_baris(int[][3], int); // prosedur untuk menggambar sebaris pola