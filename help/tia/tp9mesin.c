/*
Saya Tia Ifania Nugrahaningtyas [2202339] mengerjakan TP 9 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
#include "tp9header.h"                  //library

void aksiNinja(int jmlhAksi, int penyerang, dataninja ninjaData[], int sasaran, dataninja2 name[], char kode[]) //pemanggilan prosedur
{
    printf ("Exam Begins!\n");          //menampilkan bahwa ujian telah dimulai
    int m = 0;
    while(m < jmlhAksi)                 //perulangan untuk aksi "menyerang" atau 'a'
    {
        penyerang = 0;
        sasaran = 0;
        if (kode[m] == 'a')             //jika bertemu 'a' akan melakukan perintah dibawah 
        {
            while (strcmp(ninjaData[penyerang].name, name[m].barisAksi) != 0)
            {
                penyerang++;
            }
            while (strcmp(ninjaData[sasaran].name, name[m].Musuh) != 0)
            {
                sasaran++;
            }

            int dmg = ninjaData[penyerang].attack - ninjaData[sasaran].deff;            //rumus untuk mencari besaran 'kerusakan' yang akan di keluarkan
            ninjaData[sasaran].health -= dmg;                   //darah ninja sasaran akan berkurang according to hasil itungan rumus

            if (ninjaData[sasaran].health < 0)                  //membuat darah ninja jadi 0 jika darah nya negatif karena tidak ada darah ninja yg negatif (jadi zombie dong wkwk)
            {
                ninjaData[sasaran].health = 0;
            }
            printf ("%s received %d damage from %s, his/her current health is %d\n", ninjaData[sasaran].name, dmg, ninjaData[penyerang].name, ninjaData[sasaran].health);

        }else if (kode[m] == 'd')                       //akan melakukan perintah dibawah bila menemukan 'd' atau 'deffense'
        {
            while (strcmp(ninjaData[penyerang].name, name[m].barisAksi) != 0)
            {
                penyerang++;
            }
            ninjaData[penyerang].deff += 3;             //menambahkan 3 poin ke deffense ninja yang melakukan deffense (ofkors wkwk)
            printf ("%s increased his/her own defense by 3, it is now %d\n", ninjaData[penyerang].name, ninjaData[penyerang].deff);
        }else                               //untuk aksi sisanya, yaitu heal
        {
            while (strcmp(ninjaData[penyerang].name, name[m].barisAksi) != 0)
            {
                penyerang++;
            }
            ninjaData[penyerang].health += 10;
            printf ("%s use heal to recover 10 health, his/her current health is %d\n", ninjaData[penyerang].name, ninjaData[penyerang].health);
        }
        m++;
    }
}

void hasilUjian(dataninja ninjaData[], char namaDesa[])            //prosedur untukmenampilkan hasil akhir dari ujian
{
    printf ("\nExam Result:\n");
    printf ("- Konoha Village\n");

    int m = 0;
    while (m < 2)               //mena,pilkan stat akhir ninja dari konoha
    {
        printf ("%s %d %d %d %s\n", ninjaData[m].name, ninjaData[m].health, ninjaData[m].attack, ninjaData[m].deff, ninjaData[m].jurus);
        m++;
    }

    printf ("- %s Village\n", namaDesa);
    int p = 2;
    while (p < 4)
    {
        printf ("%s %d %d %d %s\n", ninjaData[p].name, ninjaData[p].health, ninjaData[p].attack, ninjaData[p].deff, ninjaData[p].jurus);
        p++;
    }
}

void hasilUjianFinal(dataninja ninjaData[], char namaDesa[])
{
    printf ("\n");

    if (ninjaData[0].health + ninjaData[1].health < ninjaData[2].health + ninjaData[3].health)
    {
        printf (">>> %s Village Passed <<<", namaDesa);
    }else if(ninjaData[0].health + ninjaData[1].health > ninjaData[2].health + ninjaData[3].health)
    {
        printf (">>> Konoha Village Passed <<<");
    }else {
        printf (">>> Both Village Passed <<<");
    }
    printf ("\n");
}