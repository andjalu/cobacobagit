#include "header.h"
int main()
{
    int n;
    scanf("%d", &n);
    data arr[n];
    char temp[256];
    for (int i = 0; i < n; i++) // masukan temp trus input
    {
        scanf("%s", temp);
        input(&arr[i], i, temp); // bersihin dan masukin ke arr
    }

    for (int i = 0; i < n; i++)
    {
        ubah(&arr[i], strlen(arr[i].str2), strlen(arr[i].str1)); // ngubah jadi kecil
    }
    /*for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i].str1);
        printf("%s\n", arr[i].str3);
        printf("%s\n", arr[i].str2);
    }*/
    for (int i = 0; i < n; i++) // ini output dengan logika xor
    {
        if (anagram(arr[i].str1, arr[i].str2) == 1 && palindrom(arr[i].str3) == 1)
        {

            printf("NO\n");
        }
        if (anagram(arr[i].str1, arr[i].str2) == 0 && palindrom(arr[i].str3) == 0)
        {

            printf("NO\n");
        }
        if (anagram(arr[i].str1, arr[i].str2) != 0 && palindrom(arr[i].str3) == 0)
        {

            printf("YES\n");
        }
        if (anagram(arr[i].str1, arr[i].str2) == 0 && palindrom(arr[i].str3) != 0)
        {

            printf("YES\n");
        }
    }
    return 0;
}