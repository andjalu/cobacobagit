/* Saya Anderfa Jalu Kawani NIM 2102671
 mengerjakan soal tugas praktikum 1 dalam mata kuliah
 algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h> //ini library
typedef struct     // ini buat bungkusan ato struct
{
    char inisial;    // ini dalemnya, ini buat nyimpen inisial nama
    int nim;         // ni buat nimnya
    char nilaisbd;   // ni nilai sbd
    char nilailogif; // ni nilai logif
    char pres;       // ini buat prestasi
    char mengulang;  // ini ngulang ato nggaknya
    int total;       // ini buat ntar
} mhs;               // ini apasi lupa namanya, ya pokoknya ntar dipanggil di main
int main()
{
    mhs a; // nah dipanggil disini
    mhs b; // ada tiga iniannya
    mhs c;
    a.total = 0;                                 // mulai dari nol ya kak
    b.total = 0;                                 // btw akhir2 ini ketemu mia mulu
    c.total = 0;                                 // jangan2 kita sekampus
    scanf("%c", &a.inisial);                     // ini masukannya, ini buat inisial y
    scanf("%d", &a.nim);                         // ni buat nim
    scanf(" %c %c", &a.nilaisbd, &a.nilailogif); // ni nilai, dst
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

    switch (a.nilaisbd) // ni buat nentuin skornya
    {
    case 'A':           // ni klo nilainya A
        a.total += 100; // dia bakal nambah 100
        break;          // klo dah beres yaudah beres aja
    case 'B':           // ni klo nilainya B
        a.total += 75;  // dan gitu seterusnya
        break;
    case 'C':
        a.total += 50;
        break;
    default: // ini dipake kli nisal gaada kejadian kek diatas
        break;
    }
    switch (a.nilailogif) // panjang bet panjang
    {
    case 'A':
        a.total += 100;
        break;
    case 'B':
        a.total += 75;
        break;
    case 'C':
        a.total += 50;
        break;
    default:
        break;
    }
    if (a.pres == 'y')      // ni klo jadi mhs berprestasi
    {                       // kenapa ga make switch?
        a.total += 20;      // klo ada yang gampang knapa harus pake yang susah?
    }                       // (〜￣▽￣)〜
    if (a.mengulang == 'y') // ni klo ngulang
    {
        a.total -= 5;
    }

    switch (b.nilaisbd) // ni buat yang b/ masukan kedua
    {                   // (～o￣3￣)～
    case 'A':
        b.total += 100;
        break;
    case 'B':
        b.total += 75;
        break;
    case 'C':
        b.total += 50;
        break;
    default:
        break;
    }
    switch (b.nilailogif)
    {
    case 'A':
        b.total += 100;
        break;
    case 'B':
        b.total += 75;
        break;
    case 'C':
        b.total += 50;
        break;
    default:
        break;
    }
    if (b.pres == 'y') // kurleb sama
    {                  //~(￣▽￣)~*
        b.total += 20;
    }
    if (b.mengulang == 'y')
    {
        b.total -= 5;
    }

    switch (c.nilaisbd)
    {
    case 'A':
        c.total += 100;
        break;
    case 'B':
        c.total += 75;
        break;
    case 'C':
        c.total += 50;
        break;
    default:
        break;
    }
    switch (c.nilailogif) // laper
    {                     //(*￣3￣)╭
    case 'A':
        c.total += 100;
        break;
    case 'B':
        c.total += 75;
        break;
    case 'C':
        c.total += 50;
        break;
    default:
        break;
    }
    if (c.pres == 'y')
    {
        c.total += 20;
    }
    if (c.mengulang == 'y')
    {
        c.total -= 5;
    }
    if (a.total == b.total || a.total == c.total || b.total == c.total)     // mulai masuk ke proses output nich
    {                                                                       // dibawah klo kondisinya ada skor yang sama
        if (a.total == b.total && a.total == c.total && b.total == c.total) // INI BIKIN KESEL, KELUPAAN (* ￣︿￣)
        {
            switch (a.inisial) // ni biar enak aja filternya
            {                  // o(*￣▽￣*)ブ
            case 'B':
                printf("Selamat Bintang dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", a.nim, a.total);
                break;
            case 'Y':
                printf("Selamat Yasin dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", a.nim, a.total);
                break;
            case 'F':
                printf("Selamat Fauzan dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", a.nim, a.total);
                break;
            default:
                break;
            }
        }
        else if ((a.inisial == 'B') && (a.total > b.total || a.total > c.total)) // difilter lagi disini
        {                                                                        //(～￣▽￣)～
            printf("Selamat Bintang dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", a.nim, a.total);
        }
        else if ((a.inisial == 'Y') && (a.total > b.total || a.total > c.total))
        {
            printf("Selamat Yasin dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", a.nim, a.total);
        }
        else if ((a.inisial == 'F') && (a.total > b.total || a.total > c.total))
        {
            printf("Selamat Fauzan dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", a.nim, a.total);
        }
    }
    else if ((a.total > b.total) && (a.total > c.total)) // ni klo yang a lebih gede dari yang lain
    {
        switch (a.inisial) // ni biar enak aja filternya
        {                  // o(*￣▽￣*)ブ
        case 'B':
            printf("Selamat Bintang dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", a.nim, a.total);
            break;
        case 'Y':
            printf("Selamat Yasin dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", a.nim, a.total);
            break;
        case 'F':
            printf("Selamat Fauzan dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", a.nim, a.total);
            break;
        default:
            break;
        }
    }
    else if ((b.total > a.total && b.total > c.total)) // ni klo b yang lebi gede
    {                                                  //(づ￣ 3￣)づ
        switch (b.inisial)
        {
        case 'B':
            printf("Selamat Bintang dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", b.nim, b.total);

            break;
        case 'Y':
            printf("Selamat Yasin dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", b.nim, b.total);
            break;
        case 'F':
            printf("Selamat Fauzan dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", b.nim, b.total);
            break;
        default:
            break;
        }
    }
    else if ((c.total > b.total && c.total > a.total)) // ni klo c yang gede
    {                                                  // eh ada kucing
        switch (c.inisial)                             //(づ￣ 3￣)づ (=^-ω-^=)  (=◉ᆽ◉=)
        {
        case 'B':
            printf("Selamat Bintang dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", c.nim, c.total);

            break;
        case 'Y':
            printf("Selamat Yasin dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", c.nim, c.total);
            break;
        case 'F':
            printf("Selamat Fauzan dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", c.nim, c.total);
            break;
        default:
            break; // ya sekian keknya
        }          // lah ada kucing garong
    }              //(￣▽￣)"  (=^-ω-^=)   (=◉ᆽ◉=)   (ﾐΦ ﻌ Φﾐ)ﾉ
    return 0;
}