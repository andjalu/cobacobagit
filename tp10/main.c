#include "header.h"
int main()
{
    data kolom[50];
    char kode[100];
    int i = 0;
    input(&kolom[0]);
    input(&kolom[1]);
    input(&kolom[2]);
    input(&kolom[3]);
    printf("etst");
    scanf(" %[^\n]s", kode);
    do
    {
        checkkolom(kolom[i].kolom1, kolom[i].kolom1);
        checkkolom(kolom[i].kolom2, kolom[i].kolom2);
        checkkolom(kolom[i].kolom3, kolom[i].kolom3);
        checkkolom(kolom[i].kolom4, kolom[i].kolom4);
    } while (checkkolom == 0);

    return 0;
}

// srry bang lagi ilang motivasi