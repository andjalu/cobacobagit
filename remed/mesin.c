#include "header.h"

void input(string *arr)
{
    scanf("%s", &(*arr).str); // ini buat masukan string
}
int check(char str[], char find)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == find) // ini dia ngecek apakah ada huruf yang sesuai atau nggak
        {
            count++;
        }
    }
    return count; // ini ngembaliin jumlah yang ketemu
}
void print(char str[], int m) // ini buat print dengan spasi
{
    int j = 0;
    if (strlen(str) % 2 != 0)
    {
        for (int i = 0; i < strlen(str) / 2; i++) // bikin spasi dulu, baru karakter
        {
            for (int k = 0; k < i; k++)
            {
                printf(" ");
            }
            printf("%c", str[i]);
            printf("\n");
            j++;
        }
        for (int i = j; i < strlen(str); i++)
        {
            for (int k = strlen(str) - i; k > 1; k--)
            {
                printf(" ");
            }
            printf("%c", str[i]);
            printf("\n");
        }
    }
    else
    {
        for (int i = 0; i < strlen(str) / 2; i++)
        {
            for (int k = 0; k < i; k++)
            {
                printf(" ");
            }
            printf("%c", str[i]);
            printf("\n");
            j++;
        }
        for (int i = j; i < strlen(str); i++)
        {
            for (int k = strlen(str) - i; k > 1; k--)
            {
                printf(" ");
            }
            printf("%c", str[i]);
            printf("\n");
        }
    }
}

void printkebalik(char str[]) // nin print kebalik, jadi dari akhir ke awal
{
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}