#include "header.h"

void input(data *pokemon)
{
    scanf("%s %d %d %d %s", &(*pokemon).name, &(*pokemon).health, &(*pokemon).atk, &(*pokemon).def, &(*pokemon).type);
}
void attack(char pokemon1[], char pokemon2[], int *health, int atk, int def)
{
    atk -= def;
    *health -= atk;
    if (*health < 0)
    {
        *health = 0;
    }

    printf("%s dealt %d damage to %s, its health is now %d\n", pokemon1, atk, pokemon2, *health);
}
void defend(char pokemon[], int *def)
{
    *def += 2;
    printf("%s defense is increased by 2, its defense is now %d\n", pokemon, *def);
}
void heal(char pokemon[], int *health)
{
    *health += 5;
    printf("%s recovered 5 health, its health is now %d\n", pokemon, *health);
}
void print(data *pokemon)
{
    printf("%s %d %d %d %s\n", (*pokemon).name, (*pokemon).health, (*pokemon).atk, (*pokemon).def, (*pokemon).type);
}