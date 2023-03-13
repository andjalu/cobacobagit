#include "header.h"
int main()
{
    int n;
    scanf("%d", &n); // masukan untuk jumlah array
    string arr[n];   // jumlah array sesuai masukan
    char find;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        input(&arr[i]); // proses input array of string
    }
    scanf(" %c", &find); // untuk huruf yang dicari pada array of string
    for (int i = 0; i < n; i++)
    {
        m += check(arr[i].str, find); // ini bakal nambah klo ada huruf yang kecek
    }
    if (m % 2 != 0) // ini klo jumlah yg ketemu itu ganjil
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0) // dia print yang hanjil pake spasi, yaang genap kebalik
            {
                print(arr[i].str, m);
            }
            else
            {
                printkebalik(arr[i].str);
            }
        }
    }
    else // ini kebalikannya
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                print(arr[i].str, m);
            }
            else
            {
                printkebalik(arr[i].str);
            }
        }
    }
    return 0;
}