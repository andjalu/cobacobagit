#include <stdio.h>
int main()
{
    int mb, mf, my;
    int pb, pf, py;
    int sb, sf, sy;
    printf("bintang:");
    scanf("%d %d", &mb, &pb);
    printf("fauzan:");
    scanf("%d %d", &mf, &pf);
    printf("yasin:");
    scanf("%d %d", &my, &py);
    sb = mb + (pb * 20);
    sf = mf + (pf * 20);
    sy = my + (py * 20);
    printf("skor bintang : %d\n", sb);
    printf("skor fauzan  : %d\n", sf);
    printf("skor yasin   : %d\n", sy);
    if ((sb < sf) && (sb < sy))
    {
        printf("Bintang ada di puncak Scoreboard dengan score %d", sb);
    }
    else if ((sf < sy) && (sf < sb))
    {
        printf("Fauzan ada di puncak Scoreboard dengan score %d", sf);
    }
    else if ((sy < sb) && (sy < sf))
    {
        printf("Yasin ada di puncak Scoreboard dengan score %d", sy);
    }
    else
    {
        printf("semuanya cupu");
    }
    return 0;
}.