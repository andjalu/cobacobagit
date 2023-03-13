/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal Remedial dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <string.h>
#include <stdio.h>

typedef struct // ini untuk stringnya nanti
{
    char str[101];
} string;
void input(string *arr);          // ini prosedur input
int check(char str[], char find); // ini fungsi untuk cek huruf yang dicari
void print(char str[], int m);    // ini untuk print beserta spasi
void printkebalik(char str[]);    // ini untuk print tervbalik