#include "header.h"
int main()
{
    char s1[101], s2[101];
    scanf("%s", s1);
    panjang_string(s1);
    copy_string(s2, s1);
    printf("%s\n", s2);
    return 0;
}
