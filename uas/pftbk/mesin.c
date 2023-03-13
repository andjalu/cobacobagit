#include "header.h"
int terkecil(int arr[])
{
    int temp;
    int swap;
    int i;
    do
    {
        swap = 0;
        for (i = 0; i < 4 - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap = 1;
            }
        }
    } while (swap == 1);

    return arr[0];
}
int terkecil2(int arr[])
{
    int temp;
    int swap;
    int i;
    do
    {
        swap = 0;
        for (i = 0; i < 4 - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap = 1;
            }
        }
    } while (swap == 1);
    return arr[1];
}
