/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 7 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <string.h>
#include <stdio.h>

int main()
{
    char utama[51];
    char str[51];
    char hapus[51];
    char key[51];
    char tampung[51];
    int i = 0;
    int j = 0;
    int k, t;
    scanf("%s", utama);

    while ((utama[i] != '$') && (utama[i] != '\0'))
    {
        str[i] = utama[i];
        i++;
    }
    str[i] = '\0';
    while (i < strlen(utama))
    {
        hapus[j] = utama[i + 1];
        i++;
        j++;
    }
    hapus[j] = '\0';
    int pan1 = strlen(str);
    int pan2 = strlen(hapus);
    i = 0;
    do
    {
        t = i;
        j = 0;
        while (j < pan2)
        {
            if (str[i] == hapus[j])
            {
                i++;
            }
            j++;
        }

        k = i - t;

        if (k == pan2)
        {
            i = t;
            j = i;
            while (j < (pan1 - pan2))
            {
                str[j] = str[j + pan2];
                j++;
            }
            str[j] = '\0';
        }
        else
        {
            i++;
        }
    } while (i < pan1);

    int pan3 = strlen(str);
    str[pan3] = '\0';
    if (pan3 == 0)
    {
        printf("Kata hilang... Ikhlaskanlah harta karun ini.\n");
    }
    else
    {
        i = 0;
        printf("Setelah dihapus : %s\n", str);
        printf("\n");
        if (pan3 % 2 == 0)
        {
            k = pan3 / 2;
            j = pan3 / 2 - 1;
            while (i < pan3 && str[i] != '\0')
            {
                tampung[i] = str[k];
                i++;
                k++;
                tampung[i] = str[j];
                j--;
                i++;
            }
            tampung[i] = '\0';
        }
        else if (pan3 % 2 != 0)
        {
            k = pan3 / 2 + 1;
            j = pan3 / 2 - 1;
            while (i < pan3 && str[i] != '\0')
            {
                tampung[i] = str[k];
                i++;
                k++;
                tampung[i] = str[j];
                j--;
                i++;
            }
            i -= 2;
            tampung[i] = str[pan3 / 2];
            tampung[i + 1] = '\0';
        }

        if (strlen(str) % 2 == 0)
        {
            j = 0;
            k = 1;
            int x = 0;
            while (x < pan3 / 2 && tampung[k] != '\0')
            {
                for (i = 0; i < x; i++)
                {
                    printf(" ");
                }
                printf("%c", tampung[j]);
                for (int i = pan3 / 2 - 1; i > x; i--)
                {
                    printf(" ");
                }
                for (int i = pan3 / 2 - 1; i > x; i--)
                {
                    printf(" ");
                }
                printf("%c", tampung[k]);
                printf("\n");
                j += 2;
                k += 2;
                x++;
            }
            printf("\nPassword : %s - Harta Karun Didapatkan!\n", tampung);
        }
        else
        {
            j = 0;
            k = 1;
            int x = 0;
            while (x < pan3 / 2 + 1)
            {
                for (i = 0; i < x; i++)
                {
                    printf(" ");
                }

                printf("%c", tampung[j]);

                for (int i = pan3 / 2 - 1; i > x; i--)
                {
                    printf(" ");
                }
                for (int i = pan3 / 2; i > x; i--)
                {
                    printf(" ");
                }
                if (x < pan3 / 2)
                {
                    printf("%c", tampung[k]);
                }
                printf("\n");
                j += 2;
                k += 2;
                x++;
            }
            printf("\nPassword : %s - Harta Karun Didapatkan!\n", tampung);
        }
    }
}
