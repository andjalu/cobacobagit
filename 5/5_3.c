#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }
    int tukar1, tukar2;
    scanf("%d", &tukar1);
    scanf("%d", &tukar2);
    char temp;
    temp = arr[tukar1];
    arr[tukar1] = arr[tukar2];
    arr[tukar2] = temp;
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    return 0;
}