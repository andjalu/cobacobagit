/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal eval dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
int main()
{
    int n;
    int baris, kolom;
    scanf("%d", &n);
    char arr[n];
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
        if (arr[i] == 'a' || arr[i] == 'i' || arr[i] == 'u' || arr[i] == 'e' || arr[i] == 'o' ||
            arr[i] == 'A' || arr[i] == 'I' || arr[i] == 'U' || arr[i] == 'E' || arr[i] == 'O')
        {
            m += 1;
        }
    }
    int batas1 = 0, batas2 = n / 2;
    for (baris = 1; baris <= m; baris++)
    {
        for (kolom = m - baris; kolom >= 1; kolom--)
        {
            for (int i = 0; i < m; i++)
            {
                printf(" ");
            }
        }
        for (kolom = 2; kolom <= baris; kolom++)
        {

            for (int i = 0; i < m; i++)
            {
                printf("%c", arr[batas1]);
                batas1++;
                if (batas1 >= n / 2)
                {
                    batas1 = 0;
                }
            }
            batas1 = 0;
        }

        for (kolom = 1; kolom <= baris; kolom++)
        {
            for (int i = 0; i < m; i++)
            {
                printf("%c", arr[batas1]);
                batas1++;
                if (batas1 >= n / 2)
                {
                    batas1 = 0;
                }
            }
            batas1 = 0;
        }
        for (kolom = m - baris; kolom >= 1; kolom--)
        {
            for (int i = 0; i < m; i++)
            {
                printf(" ");
            }
        }
        for (kolom = m - baris; kolom >= 1; kolom--)
        {
            for (int i = 0; i < m; i++)
            {
                printf(" ");
            }
        }
        for (kolom = 2; kolom <= baris; kolom++)
        {

            for (int i = 0; i < m; i++)
            {
                printf("%c", arr[batas2]);

                if (batas2 >= n)
                {
                    batas2 = n / 2;
                }
                batas2++;
            }
            batas2 = n / 2;
        }

        for (kolom = 1; kolom <= baris; kolom++)
        {
            for (int i = 0; i < m; i++)
            {
                printf("%c", arr[batas2]);

                if (batas2 >= n)
                {
                    batas2 = n / 2;
                }
                batas2++;
            }
            batas2 = n / 2;
        }

        printf("\n");
    }
    for (baris = 1; baris <= m * 2; baris++)
    {

        for (kolom = m * 2 - baris; kolom >= 0; kolom--)
        {
            for (int i = 0; i < m / 2; i++)
            {
                printf("+");
            }
        }
        for (kolom = 0; kolom <= baris; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
}