/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 4 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
int main()
{
    int baris, kolom;
    int n;
    char alphabet;
    scanf("%d", &n);
    scanf(" %c", &alphabet);
    char signal;
    signal = alphabet;
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for (kolom = 2; kolom <= baris; kolom++)
        {
            printf("+");
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("+");
        }
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= (n * 5); kolom++)
        {
            printf(" ");
        }
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for (kolom = 2; kolom <= baris; kolom++)
        {
            printf("+");
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("+");
        }
        printf("\n");
    }
    int fak = 1;
    for (int i = 2; i <= n; i++)
    {
        fak += 2;
    }
    fak -= 2;

    for (baris = 1; baris <= n; baris++)
    {
        if (baris != n)
        {
            printf(" ");
            for (kolom = 1; kolom <= fak; kolom++)
            {
                printf("%c", alphabet);
            }
            for (kolom = 0; kolom <= n * 5; kolom++)
            {
                printf(" ");
            }
            printf(" ", kolom);
            for (kolom = 1; kolom <= fak; kolom++)
            {

                printf("%c", alphabet);
            }
        }
        if (baris == n)
        {
            printf(" ");
            for (kolom = 1; kolom <= fak; kolom++)
            {
                printf("%c", alphabet);
            }
            printf(" ");
            for (kolom = 1; kolom <= n; kolom++)
            {
                printf("%c", alphabet);
            }
            for (kolom = 1; kolom <= n; kolom++)
            {
                printf(" ");
            }
            for (kolom = 1; kolom <= n; kolom++)
            {
                printf("%c", alphabet);
            }
            for (kolom = 1; kolom <= n; kolom++)
            {
                printf(" ");
            }
            for (kolom = 1; kolom <= n; kolom++)
            {
                printf("%c", alphabet);
            }

            printf(" ");
            for (kolom = 1; kolom <= fak; kolom++)
            {
                printf("%c", alphabet);
            }
        }
        printf("\n");
        alphabet += 1;
        if (alphabet > 'z')
        {
            alphabet = 'a';
        }
    }
    for (baris = 1; baris <= n; baris++)
    {
        if (baris == 1)
        {
            printf(" ");
            for (kolom = 1; kolom <= fak; kolom++)
            {
                printf("%c", alphabet);
            }
            for (kolom = 0; kolom <= n * 5; kolom++)
            {
                printf("%c", alphabet);
            }
            printf("%c", alphabet);
            for (kolom = 1; kolom <= fak; kolom++)
            {

                printf("%c", alphabet);
            }
            alphabet += 1;
            if (alphabet > 'z')
            {
                alphabet = 'a';
            }
        }
        else if (baris != 1)
        {
            {
                printf(" ");
                for (kolom = 1; kolom <= fak; kolom++)
                {
                    printf("%c", alphabet);
                }
                printf("%c", alphabet);
                for (kolom = 1; kolom <= n * 2; kolom++)
                {
                    printf("%c", alphabet);
                }
                if ((signal == 'a') || (signal == 'i') || (signal == 'u') || (signal == 'e') || (signal == 'o'))
                {
                    for (kolom = 1; kolom <= n; kolom++)
                    {
                        printf(" ");
                    }
                }
                else
                {
                    for (kolom = 1; kolom <= n; kolom++)
                    {
                        printf("-");
                    }
                }
                for (kolom = 1; kolom <= n * 2; kolom++)
                {
                    printf("%c", alphabet);
                }
                printf("%c", alphabet);
                for (kolom = 1; kolom <= fak; kolom++)
                {
                    printf("%c", alphabet);
                }
            }

            alphabet += 1;
            if (alphabet > 'z')
            {
                alphabet = 'a';
            }
        }
        printf("\n");
    }
    return 0;
}