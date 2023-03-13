#include <stdio.h>
typedef struct
{
    char inisial;
    int nim;
    char nilaisbd;
    char nilailogif;
    char pres;
    char mengulang;
    int total;
} mhs;
int main()
{
    mhs a;
    mhs b;
    mhs c;
    a.total = 0;
    b.total = 0;
    c.total = 0;
    scanf("%c", &a.inisial);
    scanf("%d", &a.nim);
    scanf(" %c %c", &a.nilaisbd, &a.nilailogif);
    scanf(" %c", &a.pres);
    scanf(" %c", &a.mengulang);

    scanf(" %c", &b.inisial);
    scanf("%d", &b.nim);
    scanf(" %c %c", &b.nilaisbd, &b.nilailogif);
    scanf(" %c", &b.pres);
    scanf(" %c", &b.mengulang);

    scanf(" %c", &c.inisial);
    scanf("%d", &c.nim);
    scanf(" %c %c", &c.nilaisbd, &c.nilailogif);
    scanf(" %c", &c.pres);
    scanf(" %c", &c.mengulang);

    printf("%c\n", a.inisial);
    printf("%d\n", a.nim);
    printf("%c %c\n", a.nilaisbd, a.nilailogif);
    printf("%c\n", a.pres);
    printf("%c\n", a.mengulang);

    printf("%c\n", b.inisial);
    printf("%d\n", b.nim);
    printf("%c %c\n", b.nilaisbd, b.nilailogif);
    printf("%c\n", b.pres);
    printf("%c\n", b.mengulang);

    printf("%c\n", c.inisial);
    printf("%d\n", c.nim);
    printf("%c %c\n", c.nilaisbd, c.nilailogif);
    printf("%c\n", c.pres);
    printf("%c\n", c.mengulang);
    return 0;
}