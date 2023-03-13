/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal Kuis 1 soal 2 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h> //ini library
int main()
{
    int pembilang1, pembilang2, pembilang3;                                                              // deklarasi variabel pembilang
    int penyebut1, penyebut2, penyebut3;                                                                 // deklarasi variabel penyebut
    int ping1 = 0, ping2 = 0, ping3 = 0;                                                                 // deklarasi variabel untuk sinyal nanti
    scanf("%d %d", &pembilang1, &penyebut1);                                                             // masukan untuk pembilang dan penyebut 1
    scanf("%d %d", &pembilang2, &penyebut2);                                                             // ini yang kedua
    scanf("%d %d", &pembilang3, &penyebut3);                                                             // ini yang ketiga
    if ((penyebut1 / pembilang1 == 4) || (penyebut2 / pembilang2 == 4) || (penyebut3 / pembilang3 == 4)) // ini operasi untuk menentukan yang sepermpat
    {
        printf("seperempat\n");
        if (penyebut1 / pembilang1 == 4) // ini kalo misal pecahan1 seperempat dia bakal ngeprint dan ngasih sinyal buat nanti di bagian lainnya
        {
            printf("%d %d\n", pembilang1, penyebut1);
            ping1 = 1;
        }
        if (penyebut2 / pembilang2 == 4) // kurleb sama
        {
            printf("%d %d\n", pembilang2, penyebut2);
            ping2 = 1;
        }
        if (penyebut3 / pembilang3 == 4) // kurleb sama
        {
            printf("%d %d\n", pembilang3, penyebut3);
            ping3 = 1;
        }
    }
    if ((penyebut1 / pembilang1 == 2) || (penyebut2 / pembilang2 == 2) || (penyebut3 / pembilang3 == 2)) // ini kalo misalkan pecahannya setengah
    {
        printf("setengah\n");
        if (penyebut1 / pembilang1 == 2) // ini klo misalkan pecahan 1 yang setengah dan kalo sebelumnya udah ada dia gabakal masuk sini, karena tidak sesuai
        {
            printf("%d %d\n", pembilang1, penyebut1);
            ping1 = 1;
        }
        if (penyebut2 / pembilang2 == 2) // kurleb sama
        {
            ping2 = 1;
        }
        if (penyebut3 / pembilang3 == 2) // kurleb sama
        {
            printf("%d %d\n", pembilang3, penyebut3);
            ping3 = 1;
        }
    }
    if ((pembilang1 % penyebut1 == 0) || (pembilang2 % penyebut2 == 0) || (pembilang3 % penyebut3 == 0)) // ini kalau pecahannya bilangan bulat
    {
        printf("bilangan bulat\n");
        if (pembilang1 % penyebut1 == 0) // ini klo pecahan 1 sama dengan bilangan bulat
        {
            printf("%d %d\n", pembilang1, penyebut1);
            ping1 = 1; // ngasih sinyal lagi
        }
        if (pembilang2 % penyebut2 == 0)
        {
            printf("%d %d\n", pembilang2, penyebut2);
            ping2 = 1;
        }
        if (pembilang3 % penyebut3 == 0)
        {
            printf("%d %d\n", pembilang3, penyebut3);
            ping3 = 1;
        }
    }
    if ((ping1 != 1) || (ping2 != 1) || (ping3) != 1) // nah sinyal yang tadi digunakan disini, kalau misalkan si pingnya gak berubah, dia bakal masuk sin
    {                                                 // dan klo berubah ya gabakal masuk
        printf("lainnya\n");
        if (ping1 != 1) // ini klo sinyal dari pecahan1 gak berubah, dia masuk sini, atpi klo berubah gabakal masuk
        {
            printf("%d %d\n", pembilang1, penyebut1);
        }
        if (ping2 != 1)
        {
            printf("%d %d\n", pembilang2, penyebut2);
        }
        if (ping3 != 1)
        {
            printf("%d %d\n", pembilang3, penyebut3);
        }
    }
    return 0;
    // sekian
}