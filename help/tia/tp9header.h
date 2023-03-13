/*
Saya Tia Ifania Nugrahaningtyas [2202339] mengerjakan TP 9 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char name[200];          //variabel string nama shinobi
    char jurus[200];         //variabel string nama jutsu
    int health;              //variabel penampung darah ninja
    int attack;              //variabel penampung besar serangan ninja
    int deff;                //variabel penampung besar pertahanan ninja
} dataninja;                  //pemberian nama kepada tipde data struktur

typedef struct{
    char barisAksi[200];               //variabel string penampung aksi
    char Musuh[200];                   //variabel string penampung nama ninja musuh             
} dataninja2;                      //pemberian nama kepada tipde data struktur

void aksiNinja(int jmlhAksi, int penyerang, dataninja ninjaData[], int sasaran, dataninja2 name[], char kode[]);
void hasilUjian(dataninja ninjaData[], char namaDesa[]);              //prosedur untuk hasil akhir ujian
void hasilUjianFinal(dataninja ninjaData[], char namaDesa[]);         //prosedur untuk pemenang ujian