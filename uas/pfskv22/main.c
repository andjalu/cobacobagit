#include "header.h"
int main()
{
    data dat[101];
    int n;
    int find = 0;
    int jumlah = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", dat[i].str);
    }
    for (int i = 0; i < n; i++)
    {
        search(dat[i].str, dat[i].temp);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (strcmp(dat[i].temp, dat[j].fix))
            {
                find += 1;
            }
        }
        if (find == 0)
        {
            strcpy(dat[i].temp, dat[i].fix);
            jumlah += 1;
        }
        find = 0;
    }
    for (int i = 0; i < jumlah; i++)
    {
        printf("%s", dat[i].fix);
    }

    return 0;
}