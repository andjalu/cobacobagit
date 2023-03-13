#include "header.h"

void input(data *kolom)
{
    scanf("%s %s %s %s", &(*kolom).kolom1, &(*kolom).kolom2, &(*kolom).kolom3, &(*kolom).kolom4);
}
int checkkolom(char kolom1[], char kolom2[])
{
    if (kolom1 == kolom2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        if (kolom1[i])
        {
        }
    }
}