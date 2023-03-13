#include "header.h"
int main()
{
    int n;
    int sign;
    scanf("%d", &n);
    arr code[n];
    for (int i = 0; i < n; i++)
    {
        input(&code[i]);
    }
    int trans;
    scanf("%d", &trans);
    int baris[trans];
    for (int i = 0; i < trans; i++)
    {
        scanf("%d", &baris[i]);
    }
    int tukar;
    scanf("%d", &tukar);
    int tempmsg[tukar];
    int tempbaris[tukar];
    for (int i = 0; i < tukar; i++)
    {
        scanf("%d %d", &tempmsg[i], &tempbaris[i]);
    }
    int tebal;
    scanf("%d", &tebal);
    arr msg[trans];
    for (int i = 0; i < trans; i++)
    {
        strcpy(msg[tempmsg[i]].str, code[tempbaris[i] - 1].str);
        printf("%s", msg[baris[i]].str, i);
        if (i + 1 < trans)
        {
            printf(" ");
        }
    }
    printf("\n");
    for (int i = 0; i < tebal; i++)
    {
        printf("\n");
    }
    sign = 0;
    for (int i = 0; i < tebal; i++)
    {
        for (int j = 0; j < trans; j++)
        {
            if (j + 1 < trans)
            {
                sign = 0;
            }
            init1(msg[baris[j]].str, tebal, sign);
            if (j + 1 < trans)
            {
                spasi(tebal);
            }
            sign = 1;
        }
        printf("\n");
    }
    for (int i = 0; i < tebal; i++)
    {
        for (int j = 0; j < trans; j++)
        {
            if (j + 1 < trans)
            {
                sign = 0;
            }
            init2(msg[baris[j]].str, tebal, sign);
            if (j + 1 < trans)
            {
                spasi(tebal);
            }
            sign = 1;
        }
        printf("\n");
    }
    for (int i = 0; i < tebal; i++)
    {
        for (int j = 0; j < trans; j++)
        {
            if (j + 1 < trans)
            {
                sign = 0;
            }
            init3(msg[baris[j]].str, tebal, sign);
            if (j + 1 < trans)
            {
                spasi(tebal);
            }
            sign = 1;
        }
        printf("\n");
    }
    for (int i = 0; i < tebal; i++)
    {
        for (int j = 0; j < trans; j++)
        {
            if (j + 1 < trans)
            {
                sign = 0;
            }
            init4(msg[baris[j]].str, tebal, sign);
            if (j + 1 < trans)
            {
                spasi(tebal);
            }
            sign = 1;
        }
        printf("\n");
    }
    for (int i = 0; i < tebal; i++)
    {
        for (int j = 0; j < trans; j++)
        {
            if (j + 1 < trans)
            {
                sign = 0;
            }
            init5(msg[baris[j]].str, tebal, sign);
            if (j + 1 < trans)
            {
                spasi(tebal);
            }
            sign = 1;
        }

        printf("\n");
    }
}