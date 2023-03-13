/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 8 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <string.h>
#include <stdio.h>
int main()
{
    char kunci[101];
    scanf("%s", kunci);
    int n;
    scanf("%d", &n);
    char str[n][1000];
    char strclear[n][1000];
    char arrtrue[n][1000];
    char arrfalse[n][1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    int i = 0;
    int m = 0;
    while (i < n)
    {
        m = 0;
        int j = 0;
        while (str[i][j] != '\0')
        {

            if (((str[i][j] > 64) && (str[i][j] < 91)) || ((str[i][j] > 96) && (str[i][j] < 123)))
            {
                strclear[i][m] = str[i][j];
                m++;
                if (j + 1 == strlen(str[i]))
                {
                    strclear[i][m] = '\0';
                }
                if (str[i][j + 1] != '\0')
                {
                    strclear[i][m] = '\0';
                }
            }
            j++;
        }
        i++;
    }
    int pass = 0;
    for (int i = 0; i < strlen(kunci); i++)
    {
        pass += kunci[i];
    }
    int k = pass % 26;
    printf("%d\n", k);
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        m = 0;
        for (int j = 0; j < strlen(strclear[i]); j++)
        {
            if (pass % 2 == 0)
            {
                if ((strclear[i][j] >= 65 && strclear[i][j] <= 90))
                {
                    if (strclear[i][j] + k > 90)
                    {
                        temp = strclear[i][j];
                        temp = (temp + k) % 90;
                        strclear[i][j] = 65;
                        strclear[i][j] += temp - 1;
                    }
                    else
                    {
                        strclear[i][j] += k;
                    }
                }
                if ((strclear[i][j] >= 97 && strclear[i][j] <= 122))
                {
                    if (strclear[i][j] + k > 122)
                    {
                        temp = strclear[i][j];
                        temp = (temp + k) % 122;
                        strclear[i][j] = 97;
                        strclear[i][j] += temp - 1;
                    }
                    else
                    {
                        strclear[i][j] += k;
                    }
                }
            }
            else
            {
                if ((strclear[i][j] >= 65 && strclear[i][j] <= 90))
                {
                    if (strclear[i][j] - k > 90)
                    {
                        temp = strclear[i][j];
                        temp = (temp - k) % 90;
                        strclear[i][j] = 65;
                        strclear[i][j] -= temp - 1;
                    }
                    else
                    {
                        strclear[i][j] -= k;
                    }
                }
                if ((strclear[i][j] >= 97 && strclear[i][j] <= 122))
                {
                    if (strclear[i][j] - k > 122)
                    {
                        temp = strclear[i][j];
                        temp = (temp - k) % 122;
                        strclear[i][j] = 97;
                        strclear[i][j] += temp - 1;
                    }
                    else
                    {
                        strclear[i][j] -= k;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {

        printf("%s", strclear[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    int honest = 0, lie = 0;
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = 0; j < strlen(strclear[i]); j++)
        {
            temp += strclear[i][j];
        }
        if (temp % 2 == 0)
        {
            strcpy(arrtrue[honest], strclear[i]);
            honest++;
        }
        else
        {
            strcpy(arrfalse[lie], strclear[i]);
            lie++;
        }
    }
    printf("Kelompok kata kejujuran:\n");
    if (honest == 0)
    {
        printf("Dia tidak berkata jujur!\n");
    }
    else
    {
        int gg = 1;
        for (int i = 0; i < honest; i++)
        {
            for (int j = 0; j < 24 - strlen(arrtrue[i]); j++)
            {
                printf(" ");
            }
            if (gg % 2 != 0)
            {
                for (int j = strlen(arrtrue[i]); j > -1; j--)
                {
                    printf("%c", arrtrue[i][j]);
                }
                printf("\n");
            }
            else
            {
                printf("%s\n", arrtrue[i]);
            }
            gg++;
        }
    }

    printf("\nKelompok kata dicurigai kebohongan:\n");
    if (lie == 0)
    {
        for (int i = 0; i < 17; i++)
        {
            printf(" ");
        }

        printf("Dia berkata jujur!\n");
    }
    else
    {
        int gg = 1;
        for (int i = 0; i < lie; i++)
        {
            for (int j = 0; j < 35 - strlen(arrfalse[i]); j++)
            {
                printf(" ");
            }
            if (gg % 2 == 0)
            {
                for (int j = strlen(arrfalse[i]); j > -1; j--)
                {
                    printf("%c", arrfalse[i][j]);
                }
                printf("\n");
            }
            else
            {
                printf("%s\n", arrfalse[i]);
            }
            gg++;
        }
    }
    return 0;
}