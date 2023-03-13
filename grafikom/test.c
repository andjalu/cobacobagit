#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int k = 0;
    float a[58];
    while (i < 58)
    {
        i++;
        n++;
        scanf("%f", &a[i]);
        a[i] = (a[i] + 1) / 2;
    }
    i = 1;
    k = 0;
    printf("==========\n");
    while (i < n + 1)
    {
        printf("%0.3f ", a[i]);
        if (i % 2 == 0)
        {
            k++;
            printf("%d", k);
            printf("\n");
        }
        i++;
    }
    return 0;
}
