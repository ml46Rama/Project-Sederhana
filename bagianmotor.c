#include <stdio.h>
#include <string.h>

typedef char string[50];
int i; //untuk digunakan di array
typedef struct
{
    int choice;            //untuk memilih pilihan apakah dia ingin travelling apa tidaak
    int kabupaten;         //untuk memilih kabupaten berdasarkan kode
    string kabupaten_nama; //untuk mengimputkan nama dari kabupaten
    int pilihan_klik;      //untuk memilih apakah user akan melihat tampilan dulu apa langsung ke input
    string pilih_lanjutan; //untuk melanjutkan inputan setelah ia memilih liburan dimana
    int jarak;             //untuk saat ini belum digunakan, tetapi nanti user akan mengimputkan mandiri jaraknya dan dihitung oleh program
} feeling;
typedef struct
{
    feeling fl;     //untuk mengambil variabel di struct feeling
    string pilihan; //untuk pilihan liburan di array
    int pilihan1;   //saat ini belum tetapi fungsinya untuk membatasi jumlah inputan
} program;

feeling pilihan_string(feeling fl)
{
    printf("klik 1 jika iya klik 2 jika tidak");
    printf("you wanna travelling?               :");
    scanf("%d", &fl.choice); /*saat ini hanya berfungsi untuk menyanyakan
    apakah ingin liburan apa tidak, tetapi nanti ini digunakan untuk memilih pilihan
    paket liburan berbayar atau liburan pribadi*/

    return fl;
}

feeling tampilan_feeling(feeling fl)
{
    if (fl.choice == 1)
    {
        puts("1.badung\t2.Denpasar\t3.Tabanan\t4.Jembrana\t5.Klungkung");
        puts("\n6.Gianyar\t7.Karangasen\t8.Bangli\t9.Buleleng bagian barat\t 10.Buleleng bagian timur");
        printf("pilih kabupaten yang pengen kamu kunjungi :");
        scanf("%d", &fl.kabupaten);

        printf("Nama kabupaten yang ingin dikunjungi      :");
        scanf("%s", &fl.kabupaten_nama);
    }
    else if (fl.choice == 2)
    {
        printf("it's okay, maybe next time");
    }
    else
    {
        printf("pilih 1 atau 2");
    }
    return fl;
}
program input_data(program call[])
{

    for (i = 0; i < 5; i++)
    {
        printf("Masukkan Tujuan ke %i :", i + 1);
        scanf("%s", &call[i].pilihan);
    }
    return call[i];
}
void tampilkan(program call[50])
{

    printf("Pilihan yang anda masukkan adalah :\n");
    printf("Tujuan\tNama Tempat\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t%s\n", i + 1, call[i].pilihan);
    }
}
void view_badung(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai nusa dua   \t 1.beach walk\t     \t 1. pura uluwatu");
}
void view_denpasar(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai kuta        \t 1.mall bali galeria\t \t 1. pura tanah kilap");
}
void view_tabanan(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai nusa dua   \t 1.beach walk\t     \t 1. pura uluwatu");
}
void view_jembrana(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai nusa dua   \t 1.beach walk\t     \t 1. pura uluwatu");
}
void view_klungkung(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai nusa dua   \t 1.beach walk\t     \t 1. pura uluwatu");
}
void view_gianyar(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai nusa dua   \t 1.beach walk\t     \t 1. pura uluwatu");
}
void view_karangasem(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai nusa dua   \t 1.beach walk\t     \t 1. pura uluwatu");
}
void view_bangli(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai nusa dua   \t 1.beach walk\t     \t 1. pura uluwatu");
}
void view_buleleng_barat(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai nusa dua   \t 1.beach walk\t     \t 1. pura uluwatu");
}
void view_buleleng_timur(feeling fl)
{
    puts("\n\t===KATEGORI PANTAI===\t===KATEGORI SHOOPING===\t===KATEGORI RELIGI===\t");
    puts("\n\t kode kategori :01     \t kode kategori :02\t  \tkode kategori :03");
    puts("\n\t 1. pantai nusa dua   \t 1.beach walk\t     \t 1. pura uluwatu");
}
feeling input_call(feeling fl, program call[])
{
    if (fl.pilihan_klik == 2)
    {
        input_data(call);
        tampilkan(call);
        printf("klik enter to lanjutkan ke menu berikutnya");
        scanf("%s", &fl.pilih_lanjutan);
    }
    return fl;
}
feeling pilihan_kabupaten(feeling fl, program call[])
{

    printf(" \n you choose %s to your vacation, great ", fl.kabupaten_nama);
menu:
    printf("\n klik 1 to view the vacation, \n 2 to select your vacation");
    scanf("%d", &fl.pilihan_klik);
    if (fl.pilihan_klik == 1)
    {
        switch (fl.kabupaten)
        {
        case 1:
            view_badung(fl);
            break;
        case 2:
            view_denpasar(fl);
            break;
        case 3:
            view_tabanan(fl);
            break;
        case 4:
            view_jembrana(fl);
            break;
        case 5:
            view_klungkung(fl);
            break;
        case 6:
            view_gianyar(fl);
            break;
        case 7:
            view_karangasem(fl);
            break;
        case 8:
            view_bangli(fl);
            break;
        case 9:
            view_buleleng_barat(fl);
            break;
        case 10:
            view_buleleng_timur(fl);
            break;
        default:
            break;
        }
        goto menu;
    }
    else if (fl.pilihan_klik == 2)
    {
        input_call(fl, call);
    }

    return fl;
}

int main()
{
    feeling fl;
    program call[10];

    fl = pilihan_string(fl);
    fl = tampilan_feeling(fl);
    fl = pilihan_kabupaten(fl, call);
    fl = input_call(fl, call);

    call[10] = input_data(call);
    tampilkan(call);

    return 0;
}
