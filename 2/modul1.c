#include <stdio.h>
int main()
{
    char karakter;
    printf("Masukkan karakter : ");
    scanf(" %c", &karakter);
    if ((karakter >= 'A') && (karakter <= 'Z'))
    {
        printf("Karakter termasuk huruf kapital\n");
    }
    else if ((karakter >= 'a') && (karakter <= 'z'))
    {
        printf("Karakter termasuk huruf kecil\n");
    }
    else if ((karakter >= '0') && (karakter <= '9'))
    {
        printf("Karakter termasuk angka\n");
    }
    else
    {
        printf("Karakter bukan termasuk huruf atau angka\n");
    }
    return 0;
}