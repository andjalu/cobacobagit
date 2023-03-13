/*
Saya Tia Ifania Nugrahaningtyas [2202339] mengerjakan TP 9 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
#include "tp9header.h"

int main()
{
    dataninja ninjaData[4];
    dataninja2 name[200];
    int jmlhAksi;
    int penyerang;
    int sasaran;
    char kode[200];
    char namaDesa[200];

    int m = 0;
    while (m < 2)
    {
        scanf ("%s %d %d %d %s", &ninjaData[m].name, &ninjaData[m].health, &ninjaData[m].attack, &ninjaData[m].deff, &ninjaData[m].jurus);
        m++;
    }

    scanf ("%s", &namaDesa);

    int n = 0;
    while (n < 4)
    {
        scanf ("%s %d %d %d %s", &ninjaData[n].name, &ninjaData[n].health, &ninjaData[n].attack, &ninjaData[n].deff, &ninjaData[n].jurus);
        n++;
    }

    scanf ("%d", &jmlhAksi);

    int o = 0;
    while (o < jmlhAksi)
    {
        scanf ("%s", &kode[o]);
        if (kode[o] == 'a')
        {
            scanf ("%s %s", &name[o].barisAksi, &name[o].Musuh);
        }else {
            scanf ("%s", name[o].barisAksi);
        }
        o++;
    }

    aksiNinja (jmlhAksi, penyerang, ninjaData, sasaran, name, kode);
    hasilUjian (ninjaData, namaDesa);
    hasilUjianFinal (ninjaData, namaDesa);
}