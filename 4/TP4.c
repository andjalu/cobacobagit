/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 4 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
int main()
{
    int baris, n, kolom;
    char huruf;
    int bil, ganjil, genap;
    int jenis;
    scanf(" %c", &huruf);
    scanf("%d", &n);
    printf("\n");
    bil = 0;
    if ((huruf == 'a') || (huruf == 'i') || (huruf == 'u') || (huruf == 'e') || (huruf == 'o'))

    // disini kita memilah kode masukan untuk mesin, apakah ia terdiri dari angka ganjil atau genap
    {
        bil = bil + 0;
    }
    else
    {
        bil = bil + 1;
    }
    for (baris = 1; baris <= n; baris++) // lalu disini kita memulai pembangunan tubuh alien
    {
        for (kolom = 1; kolom <= baris; kolom++) // kita mulai dari bagian antena ya gais
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d", bil % 10);
        }
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf("  ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = n; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf("  ");
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d", bil % 10);
        }
        bil += 2;
        if (bil == 10) // nah disini kita membuat bilangan yang masuk berurutan sesuai permintaan
        {
            bil = 0;
        }
        if (bil == 11)
        {
            bil = 1;
        }
        printf("\n");
    }
    for (baris = 1; baris <= n; baris++) // disini mulai pembangunan tubuh
    {
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d", bil % 10);
        }
        for (kolom = 1; kolom <= n; kolom++) // nah disini kita membuat mata dengan menggunakan metode if
        {
            if (n % 2 == 0) // ini akan digunakan jika besarnya alien adalah genap
            {
                if ((baris <= n - 1) && (baris >= n - (n - 2)))
                {
                    printf(" ");
                }
                else
                {
                    printf("%d", bil % 10);
                }
            }
            if (n % 2 != 0) // kalau ini ganjil
            {
                if ((baris <= n - 1) && (baris >= n - (n - 2))) // kenapa berbeda? karena ketika masukan berubah, program harus menyesuaikan
                {
                    printf(" ");
                }
                else
                {
                    printf("%d", bil % 10);
                }
            }
        }
        for (kolom = -(n - 1); kolom <= n; kolom++)
        {
            printf("%d", bil % 10);
        }
        for (kolom = 1; kolom <= n; kolom++) // ini untuk mulutnya
        {
            if (baris == n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("%d", bil % 10);
            }
        }
        for (kolom = -(n - 1); kolom <= n; kolom++)
        {
            printf("%d", bil % 10);
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            if (n % 2 == 0)
            {
                if (baris <= n - 1 && baris >= n - (n - 2)) // ini untuk mata yang kedua
                {
                    printf(" ");
                }
                else
                {
                    printf("%d", bil % 10);
                }
            }
            if (n % 2 != 0)
            {
                if ((baris <= n - 1) && (baris >= n - (n - 2)))
                {
                    printf(" ");
                }
                else
                {
                    printf("%d", bil % 10);
                }
            }
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d", bil % 10);
        }
        bil += 2;
        if (bil == 10)
        {
            bil = 0;
        }
        if (bil == 11)
        {
            bil = 1;
        }
        printf("\n");
    }

    for (baris = 1; baris <= n; baris++) // untuk bagian kakinya kita tinggal mengcopy paste
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("%d", bil % 10);
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("%d", bil % 10);
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("%d", bil % 10);
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("%d", bil % 10);
        }
        bil += 2;
        if (bil == 10)
        {
            bil = 0;
        }
        if (bil == 11)
        {
            bil = 1;
        }
        printf("\n");
    }

    return 0;
} // sudah deh, wendy pasti merasa terbantu :)
