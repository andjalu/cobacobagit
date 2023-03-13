/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 6 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
int main()
{
    typedef struct
    {
        char nama[101];
        char jumlah[10];
        int save;
        int bin[32];
        int bintemp;
        int temp;
    } data;
    int temp = 0;
    int i;
    scanf("%d", &i);
    data input[i];
    int j = 0;
    int n = 0;
    int binaryNum[32];
    int k = 0;
    while (j < i)
    {
        while ((input[j].nama[n] != ';') && (n < 100))
        {
            n++;
            scanf(" %c", &input[j].nama[n]);
        }

        n = 0;
        while ((input[j].jumlah[n]) != '.' && (n < 100))
        {
            n++;
            scanf(" %c", &input[j].jumlah[n]);
            input[j].temp++;
        }
        n = 0;
        j++;
    }
    j = 0;
    printf("Biner awal\n");
    while (j < i)
    {
        input[j].save = 0;
        while (n < input[j].temp)
        {
            input[j].jumlah[n] -= 47;
            temp = input[j].jumlah[n];
            input[j].save += input[j].nama[temp];
            n++;
        }
        if (input[j].save == 0)
        {
            printf("0");
        }

        temp = input[j].save;

        while (temp > 0)
        {

            binaryNum[k] = temp % 2;
            input[j].bin[k] = binaryNum[k];
            temp /= 2;
            k++;
        }
        input[j].bintemp = k;

        while (k > 0)
        {
            k--;
            printf("%d", binaryNum[k]);
        }
        printf("\n");
        n = 0;
        j++;
    }
    j = 0;
    printf("\nKode Rahasia\n");
    while (j < i)
    {
        while (input[j].nama[n] != ';')
        {
            n++;
            if (n == 1)
            {
                printf("%c", input[j].nama[n]);
            }
            if (input[j].nama[n + 1] == ';')
            {
                printf("%c-", input[j].nama[n]);
            }
        }
        n = 0;
        printf("%d-", input[j].save);
        temp = input[j].bintemp - 1;
        if (input[j].save != 0)
        {
            while (n < 3)
            {

                printf("%d%d", input[j].bin[temp], input[j].bin[temp - 1]);
                if (n < 2)
                {
                    printf("-");
                }

                temp -= 2;
                n++;
            }
        }
        else
        {
            printf("00-00-00");
        }
        printf("\n");
        n = 0;
        j++;
    }

    return 0;
}
