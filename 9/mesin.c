#include "header.h"
void panjang_string(char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    printf("Panjang String : %d\n", count);
}

void copy_string(char dest[], char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
