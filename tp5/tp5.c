/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 5 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
int main()
{
    int n, m;        // variabel untuk jumlah masukan atau jumlah elemen
    scanf("%d", &n); // ini masukannya
    char inputa[n];  // ini deklarasi elemen dan juga jumlahnya

    for (int i = 0; i < n; i++) // perulangan untuk masukan sebanyak n
    {
        scanf(" %c", &inputa[i]); // masukan untuk elmen
    }
    scanf("%d", &m); // kurleb sama seperti tadi
    char inputb[m];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &inputb[i]);
    }

    if (m != n) // nah ini kondisi ketika jumlah m dan n atau jumlah alokasi elemen tidak sama
    {
        printf("Passcode Format Invalid!\n");
        printf("The bomb will instantly explode. Boom!\n");
    }
    else
    {
        char testa = 'a'; // ini untuk matchcase nanti
        char testb = 'z';

        int jumlaha = 0; // ini untuk cek kondisi nanti
        int jumlahb = 0;

        int tempa[n]; // ini buat nyimpen nilai yang nantinya bakal dijumlahkan sehingga mendapat jumlah untuk dicocokkan
        int tempb[m];
        for (int i = 0; i < n; i++) // prosedur untuk menentukan nilai
        {
            for (int j = 0; j <= 13; j++) // perulangan untuk mencocokkan karakter
            {                             // ini proses intinya
                if (inputa[i] == testa)   // jika sama dengan karakter pada testa maka masuk prosedur sini
                {                         // jadi kan masalah utamanya adalah menentukan nilai dari karakter,
                                          // klo pake if trus dicocokin satu satu pake harcode kan lama
                    tempa[i] = 1 + j;     // nah dibuat lah mesin ini
                    jumlaha += tempa[i];  // jadi dia bakal nyari terus karakter yang cocok
                                          // dan bakal merubahnya menjadi angka tanpa harus mengubah output
                }
                testa += 1; // nah dia bakal ganti ke karakter selanjutnya untuk dicocokkan
            }

            testa = 'a'; // ini klo mau pindah gerbong, dia kembali ke a
        }

        for (int i = 0; i < m; i++) // ini kureleb sama dengan yang sebelumnya
        {                           // cuman yang ini mundur pas nyocokinnya
            for (int j = 0; j <= 13; j++)
            {
                if (inputb[i] == testb)
                {
                    tempb[i] = 1 + j;
                    jumlahb += tempb[i];
                }
                testb -= 1; // nah disini doang bedanya
            }

            testb = 'z';
        }

        if (jumlaha == jumlahb)           // disini bakal menentukan apakah sesuai passcode ato nggak
        {                                 // klo jumlah elemen sama dia masuk sini
            for (int i = 0; i < n; i++)   // ini perulangan untuk print elemennya dengan selang seling
            {                             // dan juga uppercase untuk masukan pertama
                inputa[i] -= 32;          // dikurangi 32 agar menjadi kapital sesuai ascii
                printf("%c ", inputa[i]); // yang ini pake spasi
                printf("%c", inputb[i]);  // yang ini gnggak karena dia bakal ada elemen akhir
                if (i != n - 1)           // kalau dikasih spasi, nanti dia bakal ikut
                {                         // nah disini dia bakal print spasi, tapi tidak diakhir
                    printf(" ");
                }
            }
            printf("\n");
            printf("Passcode Match!\n");
            printf("Bomb deactivated. Have a nice day, Sir Axlerod.\n");
        }
        else // ini kurleb sama
        {
            for (int i = 0; i < n; i++)
            {
                inputb[i] -= 32;
                printf("%c ", inputa[i]);
                printf("%c", inputb[i]);
                if (i != n - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
            printf("Passcode Not Match!\n");
            printf("The bomb timer has been reduced for 1 minute.\n");
        }
    }

    return 0;
}
// sekian dan terima kasih
// akhirnya dapat menaklukkan tp5 setelah 2 semester