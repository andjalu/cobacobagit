#include <stdio.h>
int main()
{
    char a;
    int n;
    scanf("%c", &a);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (a > 1)
        {
            a += 1;
        }
    }

    printf("%c", a);
    return 0;
}