#include "header.h"

void search(char str[], char temp[])
{

    char temp2[256];
    int ketemu = 0;
    int i = 0;
    int j = 0;
    while (ketemu != 3)
    {
        if (j != 1)
        {
            if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o')
            {
                temp2[i] = str[i];
                ketemu += 1;
            }
        }
        if (j == 1)
        {

            if (str[i] != 'a' || str[i] != 'i' || str[i] != 'u' || str[i] != 'e' || str[i] != 'o')
            {
                temp2[i] = str[i];
                ketemu += 1;
            }
        }
        i++;
        j++;
    }
    strcpy(temp, temp2);
    printf("%s\n", temp);
}
