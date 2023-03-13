#include <stdio.h>
#include <math.h>
int main()
{
    int bil;
    float akar;
    int kuadrat;
    scanf("%d", &bil);
    akar = sqrt(bil);
    kuadrat = bil * bil;
    int root = akar;
    printf("bilangan akar = %0.2f\n", akar);
    printf("bilangan kuadrat = %d\n", kuadrat);
    printf("bilangan root = %d", root);
    return 0;
}