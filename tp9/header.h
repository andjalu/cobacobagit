/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 9 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <string.h> //inisialisasi library disini ygy
#include <stdio.h>
typedef struct
{
    char name[256];
    int health;
    int atk;
    int def;
    char type[256];
} data; // data buat pokemon
// ini buat inisialisasi prosedur
void input(data *pokemon);                                                    // buat prosedur input nanti, disini deklarasinya pake struct jadi lgsg semua
void attack(char pokemon1[], char pokemon2[], int *health, int atk, int def); // buat prosedur attack
void defend(char pokemon[], int *def);                                        // ni buat defens
void heal(char pokemon[], int *health);                                       // ni heal
void print(data *pokemon);                                                    // ni print data pokemon