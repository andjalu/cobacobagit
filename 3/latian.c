#include <stdio.h>
int main()
{
    int pensil = 1000;
    int pulpen = 3000;
    int penghapus = 500;
    int pensilH, pulpenH, penghapusH;
    char methodH;
    int pensilR, pulpenR, penghapusR;
    char methodR;
    int totalH, totalR;
    scanf("%d %d %d", &pensilH, &pulpenH, &penghapusH);
    scanf(" %c", &methodH);
    scanf("%d %d %d", &pensilR, &pulpenR, &penghapusR);
    scanf(" %c", &methodR);
    switch (methodH)
    {
    case 'T':
        totalH = (pensilH * pensil) + (pulpenH * pulpen) + (penghapusH * penghapus);
        break;

    case 'P':

        totalH = ((pensilH * pensil) + 500) + ((pulpenH * pulpen) + 1500) + ((penghapusH * penghapus) + 250);
        break;  
    case 'K':
        totalH = (pensilH * (pensil + 1000)) + (pulpenH * (pulpen + 1000)) + (penghapusH * (penghapus + 1000));
        break;
    default:
        printf("Kamu pencuri ya dik?\n");
        /* perintah yang dijalankan jika tidak ada case (konstanta)
        yang bernilai sama seperti predikat masukan user */
        break;
    }
    switch (methodR)
    {
    case 'T':
        totalR = (pensilR * pensil) + (pulpenR * pulpen) + (penghapusR * penghapus);
        break;

    case 'P':

        totalR = (pensilR * (pensil + 500) + (pulpenR * (pulpen + 1500)) + (penghapusR * (penghapus + 250)));
        break;
    case 'K':
        totalR = (pensilR * (pensil + 1000)) + (pulpenR * (pulpen + 1000)) + (penghapusR * (penghapus + 1000));
        break;
    default:
        printf("Kamu pencuri ya dik?\n");
        /* perintah yang dijalankan jika tidak ada case (konstanta)
        yang bernilai sama seperti predikat masukan user */
        break;
    }
    if (methodH == methodR)
    {
        totalH = totalR + totalH;
        totalR = 0;
    }

    printf("Total belanja yang harus dibayar hari adalah Rp%d\n", totalH);
    printf("Total belanja yang harus dibayar Roni adalah Rp%d\n", totalR);
}
