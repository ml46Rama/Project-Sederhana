#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    int choice;               //untuk memilih pilihan apakah dia ingin travelling apa tidaak
    int kabupaten;            //untuk memilih kabupaten berdasarkan kode
    string kabupaten_nama;    //untuk mengimputkan nama dari kabupaten
    int pilihan_klik;         //untuk memilih apakah user akan melihat tampilan dulu apa langsung ke input
    int pilih_lanjutan;       //untuk melanjutkan inputan setelah ia memilih liburan dimana
    float jarak;              //input jarak user dari tempat wisata
    int kendaraan;            //input kendaraan yang digunakan user
    float jarak_wisata_mobil; //jarak jika menggunakan mobil
    float jarak_wisata_motor; //jarak jika menggunakan motor
    int makan;                //untuk input tempat makan
    string input_tour_guide;
    int jumlah_guide;
    int jam_guide;
    float jumlah_sewa;

} feeling;

feeling sewa_guide(feeling fl, sewa sw){
        printf("\n anda ingin berapa tour guide?    :");
        scanf("%d", &fl.jumlah_guide);
        printf("\n anda ingin berapa jam menyewa ?  :");
        scanf("%d", &fl.jam_guide);

        fl.jumlah_sewa=fl.jumlah_guide*fl.jam_guide*20000;
return fl;
}
feeling input_pilihan_guide(feeling fl, sewa sw)
{

    printf("\nAnda ingin menggunakan tour guide atau tidak?\n Y(yes) N(no)  :");
    scanf("%c", fl.input_tour_guide);
    if (fl.input_tour_guide == 'Y')
    {
        
    }
    else if (fl.input_tour_guide == 'N')
    {
        nyewamobil(sw);
    }
    else
    {
        printf("hanya pilih Y dan N");
    }
    return fl;
}
