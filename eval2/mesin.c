#include "header.h"
void input(data *arr, int k, char temp[])
{
    int i;
    int j;
    i = 0;
    j = 0;
    /*nah jadi dia bakal terus copy kecuali _ dan berhenti di #
    trus pindah ke str 3 trus klo ketemu # lagi dia pindah ke tr2*/
    while (temp[i] != '#')
    {
        if (temp[i] != '_')
        {
            (*arr).str1[j] = temp[i];
            j++;
        }
        i++;
    }
    (*arr).str1[j] = '\0'; // tutup
    i++;
    j = 0;
    while (temp[i] != '#')
    {
        (*arr).str3[j] = temp[i];
        i++;
        j++;
    }
    (*arr).str3[j] = '\0';
    i++;
    j = 0;
    while (i < strlen(temp))
    {
        if (temp[i] != '_')
        {
            (*arr).str2[j] = temp[i];
            j++;
        }
        (*arr).str2[j] = '\0';
        i++;
    }
}

void ubah(data *arr, int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        if ((*arr).str1[i] < 97)
        {
            (*arr).str1[i] += 32;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((*arr).str2[i] < 97)
        {
            (*arr).str2[i] += 32;
        }
    }
}

int anagram(char str1[], char str2[])
{
    int i, j, len1, len2, found = 0, not_found = 0;
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len1 != len2)
    {
        return 1;
    }
    for (i = 0; i < len1 - 1; i++)
    {
        for (j = i + 1; j < len1; j++)
        {
            if (str1[i] > str1[j])
            {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if (str2[i] > str2[j])
            {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    for (i = 0; i < len1; i++)
    {
        if (str1[i] == str2[i])
        {
            found = 1;
        }
        else
        {
            not_found = 1;
            break;
        }
    }

    if (found == 1 && not_found == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int palindrom(char str[])
{
    int i, length, flag = 0;
    length = strlen(str);
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
