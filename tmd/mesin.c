#include "header.h"
void input(arr *code)
{
    scanf("%s", &(*code).str);
}
void spasi(int tebal)
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < tebal; j++)
        {
            printf(" ");
        }
        // printf("\n");
    }
}
void init1(char str[], int tebal, int sign)
{
    if (strcmp(str, "tolong") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (sign == 0)
                    {

                        printf(" ");
                    }
                }
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "berita") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "kosong") == 0 || (strcmp(str, "matamata") == 0) || (strcmp(str, "kirim") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }

    if ((strcmp(str, "pasukan") == 0) || (strcmp(str, "tahan") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "aman") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "masuk") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
}

void init2(char str[], int tebal, int sign)
{
    if (strcmp(str, "tolong") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "kirim") == 0)
    {
        for (int i = 0; i < 1; i++)
        {

            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }
    if ((strcmp(str, "berita") == 0) || (strcmp(str, "masuk") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }
    if ((strcmp(str, "matamata") == 0) || (strcmp(str, "kosong") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "pasukan") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "aman") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "tahan") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
}
void init3(char str[], int tebal, int sign)
{
    if ((strcmp(str, "tolong") == 0) || (strcmp(str, "kirim") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    printf("H");
                }
            }
            // printf("\n");
        }
    }
    if ((strcmp(str, "berita") == 0) || (strcmp(str, "aman") == 0) || (strcmp(str, "tahan") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "kosong") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "matamata") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
    if ((strcmp(str, "pasukan") == 0) || (strcmp(str, "masuk") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
}
void init4(char str[], int tebal, int sign)
{
    if (strcmp(str, "tolong") == 0)
    {
        for (int i = 0; i < 1; i++)
        {

            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "kirim") == 0)
    {
        for (int i = 0; i < 1; i++)
        {

            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }
    if ((strcmp(str, "berita") == 0) || (strcmp(str, "kosong") == 0) || (strcmp(str, "matamata") == 0) || (strcmp(str, "pasukan") == 0) || (strcmp(str, "aman") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "masuk") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }
    if (strcmp(str, "tahan") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
}
void init5(char str[], int tebal, int sign)
{
    if (strcmp(str, "tolong") == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (sign == 0)
                    {

                        printf(" ");
                    }
                }
            }
            // printf("\n");
        }
    }
    if ((strcmp(str, "kirim") == 0) || (strcmp(str, "kosong") == 0) || (strcmp(str, "matamata") == 0) || (strcmp(str, "tahan") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
    if ((strcmp(str, "berita") == 0) || (strcmp(str, "aman") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {

                printf(" ");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            // printf("\n");
        }
    }

    if ((strcmp(str, "pasukan") == 0) || (strcmp(str, "masuk") == 0))
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                printf("H");
            }
            for (int j = 0; j < tebal; j++)
            {
                if (sign == 0)
                {

                    printf(" ");
                }
            }
            // printf("\n");
        }
    }
}
