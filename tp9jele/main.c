#include "header.h" //manggil header, jadi librari stdio dan string bakal sekaligus masuk, buat si structnya juga bakal kepanggil
int main()
{
    char player2[256]; // ni buat lawan kita
    data pokemon[5];   // jumlah pokemon
    char target1[256]; // target buat di move pokemon nanti
    char target2[256]; // sama

    input(&pokemon[0]);   // prosedur input pokemon
    input(&pokemon[1]);   // sama
    scanf("%s", player2); // buat masukin nama musuh
    input(&pokemon[2]);   // sama tapi buat musuh
    input(&pokemon[3]);

    int n;     // banyaknya move nanti
    int j = 0; // iterasi
    char move;
    scanf("%d", &n);            // masukan banyaknya move
    printf("Battle Begins!\n"); // mulai gas ngeng
    for (int i = 0; i < n; i++) // buat movenya
    {
        scanf(" %c", &move);
        switch (move)
        {
        case 'A': // ini klo attack
            j = 0;
            scanf("%s %s", target1, target2);             // dia bakal ngescan dua
            while (strcmp(target1, pokemon[j].name) != 0) // bakal nyari pokemon buat dimasukin ke prosedur attack
            {
                j++; // nambah;
            }
            int tempatk = pokemon[j].atk; // dia bakal nyimpen attack, biar gampang buat masuk prosedur, sbenernya sih sama aja, tpi sy mager ngedit lagi
            int k = 0;
            while (strcmp(target2, pokemon[k].name) != 0)
            {
                k++;
            }
            int temphealth = pokemon[k].health; // sama kyk yg sebelumnya
            int tempdef = pokemon[k].def;
            attack(pokemon[j].name, pokemon[k].name, &temphealth, tempatk, tempdef);
            pokemon[k].health = temphealth; // nah si health pokemonnnya jadi sama, salah sih ini, tapi gada waktu
            break;
        case 'D': // sama kek sebelumnya tapi ini defend
            scanf("%s", target1);
            j = 0;
            while (strcmp(target1, pokemon[j].name) != 0)
            {
                j++;
            }
            tempdef = pokemon[j].def;
            defend(pokemon[j].name, &tempdef);
            pokemon[j].def = tempdef;
            break;
        case 'H': // klo ini heal
            scanf("%s", target1);
            j = 0;
            while (strcmp(target1, pokemon[j].name) != 0)
            {

                j++;
            }
            temphealth = pokemon[j].health;
            heal(pokemon[j].name, &temphealth);
            pokemon[j].health = temphealth;
            break;
        }
    }
    printf("\nBattle Result:\n");
    printf("- Team Ash\n");
    print(&pokemon[0]);
    print(&pokemon[1]);
    printf("- Team %s\n", player2);
    print(&pokemon[2]);
    print(&pokemon[3]);
    if (pokemon[0].health + pokemon[1].health > pokemon[2].health + pokemon[3].health)
    {
        printf("\n!!! Team Ash Won !!!\n");
    }

    else if (pokemon[0].health + pokemon[1].health < pokemon[2].health + pokemon[3].health)
    {
        printf("\n!!! Team %s Won !!!\n", player2);
    }
    else if (pokemon[0].health + pokemon[1].health == pokemon[2].health + pokemon[3].health)
    {
        printf("\n!!! It's a Tie !!!\n");
    }
}
