/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 9 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <string.h>
#include <stdio.h>

typedef struct
{
    char kolom1[256];
    char kolom2[256];
    char kolom3[256];
    char kolom4[256];
} data;

void input(data *kolom);
int checkkolom(char kolom1, char kolom2);