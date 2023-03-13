/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal Kuis 1 soal 1 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
int main()
{
    int baris, kolom;
    int n;
    int bil = 1;
    scanf("%d", &n);
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 0; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        for (kolom = (-n * 2); kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n * 3; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        for (kolom = (-n * 4); kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        printf("\n");
    }
    //+++++++++++++++++++++++++++++++++++++++++
    for (baris = 1; baris <= n; baris++)
    {

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1 - n; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = (-n * 2); kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1 - n; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 0; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        printf("\n");
    }
    //+++++++++++++++++++++++++++++++++++++
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = 1 - n; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 19) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //=========================================
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 0; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (baris = 1; baris <= n; baris++)
    {

        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1 - n; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = (-n * 2); kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 1 - n; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        printf("\n");
    }
    //============================================================================
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n * 3; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        for (kolom = (-n * 4); kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        for (kolom = (-n * 2); kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 2) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = 0; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for (kolom = (-n * 4) + 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}