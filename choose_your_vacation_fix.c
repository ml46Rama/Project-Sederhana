#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#define MOBIL1 50000
#define MOBIL2 70000
#define MOBIL3 100000
#define K_MOBIL 19
#define K_MOTOR 37
#define PERTALITE 7650
#define PERTAMAX 9000
#define KONS 2
#define MAXLEN 100 /*..max #character each name can have*/
#define MAXLINES 5000
typedef char string[50];
int umur;
int i;                   //untuk digunakan di array pasa saat input tujuan int
int pilihan_program;     //digunakan untuk menginput pilihan di menu pertama
int pilihan_menu;        //digunakan untuk menginput pilihan di menu kedua
int N;                   //untuk menerima inputan batas tempat int yang dari user
int paket, bagPak;       //digunakan difungsi paket untuk menginputkan paket int yang dipilih
int kabupaten;           //untuk memilih kabupaten berdasarkan kode
char kabupaten_nama[50]; //untuk mengimputkan nama dari kabupaten
int input_tour_guide;
int jumlah_guide;
int jam_guide;
int jumlah_int;
int makan; //untuk input tempat makan
int harga;
int ask, pilihmobil, jam;
int hargaint;
int jarak;     //input jarak user dari tempat int
int kendaraan; //input kendaraan yang digunakan user
int p;
int a;                //variabe untuk mewakili apakah user ingin meginap
int b;                //mewakili user memilih jenis tempat penginapan
int c;                //mewakili user jika menginputkan berapa banyak org yang akan menginap
int lama;             //untuk menanyakan berapa lama user menginap
int harga_penginapan; //jumlah harga total
int hasil_jarak;
int bbm, bensin;
char *n[MAXLINES];//untuk penginputan nama tempat wisata
int hp;
int askPaket;
int o;
int sum = 0;//penjumblahan hasil array
int looping[100];
int v;
int sumtot;
COORD coord = {0, 0};//untuk penggunaan coordinat

typedef struct
{

    string nama;
    string password;
    string nama1;
    string password1;

} sign_up;

//fungsi prototype
//isi fungsi 

int main()
{
    proses();
    clean();

    sign_up mhs;
    mhs = masuk_akun(mhs);
    mhs = menu_login(mhs);

    menu_cys(mhs);
    menu_inputan(mhs);

    return 0;
}

void point(int x, int y)
{
    //fungsi memanggil koordinat yang berfungsi untuk menemtukkan tampilan program
}

void tunda(int det)
{
    Sleep(det);
}

void clean()
{
    system("cls");
}

void setwarna(unsigned short warna)
{
   //set warna
}

void proses()
{
    //agar bisa loading
}

void proses_menu()
{
    //loading 2
}

sign_up masuk_akun(sign_up mhs) //user disuruh masuk dulu untuk membuat akun, seperti input nama, password serta umur
{
    point(52, 15);
    puts("^=================================================================^");
    point(52, 16);
    puts("|                                                                 |");
    point(52, 17);
    puts("|                        SELAMAT DATANG                           |");
    point(52, 18);
    puts("|                         PADA PROGRAM                            |");
    point(52, 19);
    puts("|                     CHOOSE YOUR VACATION                        |");
    point(52, 20);
    puts("|                                                                 |");
    point(52, 21);
    puts("+=================================================================+");
    point(52, 22);
    puts("|  Untuk pertama kali masuk anda harus sign-in terlebih dahulu!   |");
    point(52, 23);
    puts("+-----------------------------------------------------------------+");
    point(52, 24);
    printf(" Masukkan umur anda        : "); //fungsi umur nanti akan berkaitan dengan harga tiket
    scanf("%d", &umur);
    point(52, 25);
    printf(" Masukkan nama             : ");
    getchar();
    gets(mhs.nama);
    point(52, 26);
    printf(" Masukkan password anda    : ");
    scanf("%s", &mhs.password);

    clean();
    return mhs;
}

sign_up menu_login(sign_up mhs)
{
    proses_menu();
pilihan:
    point(48, 15);
    puts("^======================================================================^");
    point(48, 16);
    puts("|                                                                      |");
    point(48, 17);
    puts("|                             -VERFIKASI-                              |");
    point(48, 18);
    puts("|                                                                      |");
    point(48, 19);
    puts("+======================================================================+");
    point(48, 20);
    puts("|   Anda harus memasukkan kembali nama dan password untuk verifikasi   |");
    point(48, 21);
    puts("+----------------------------------------------------------------------+");
    point(48, 22);
    printf(" Masukkan nama anda      : ");
    getchar();
    gets(mhs.nama1);
    point(48, 23);
    printf(" Masukkan password       : ");
    scanf("%9s", &mhs.password1);

    if (strcmp(mhs.nama1, mhs.nama) != 0)
    {
        point(48, 25);
        printf("error, masukkan nama dan password anda dengan benar!!!\n");
        clean();
        goto pilihan;
    }
    else if (strcmp(mhs.password1, mhs.password) != 0)
    {
        point(48, 25);
        printf("error, masukkan nama dan password anda dengan benar!!!\n");
        clean();
        goto pilihan;
    }
    else
    {
        clean();
        menu_cys(mhs);
    }
    clean();
    return mhs;
}

int menu_cys(sign_up mhs)
{
    proses_menu();
menu:
    point(52, 15);
    puts("=============================================================");
    point(52, 16);
    puts("|                  +---------------------+                  |");
    point(52, 17);
    puts("|                  |    Terima Kasih     |                  |");
    point(52, 18);
    puts("|                  | Akun Anda Terdaftar |                  |");
    point(52, 19);
    puts("|                  |Silahkan Memilih Menu|                  |");
    point(52, 20);
    puts("|                  +---------------------+                  |");
    point(52, 21);
    puts("=============================================================");
    point(52, 23);
    puts("=============================================================");
    point(52, 24);
    puts("|                           Menu                            |");
    point(52, 25);
    puts("=============================================================");
    point(52, 26);
    printf("|1.Daftar Tempat Wisata||2.Inputan Wisata||3.Langsung Paket||");
    point(52, 27);
    puts("-------------------------------------------------------------");
    point(52, 28);
    puts("|  Deskripsi Daftar pilihan  |                              |");
    point(52, 29);
    puts("I----------------------------I                              |");
    point(52, 30);
    puts("|1. Untuk Menampilkan Daftar Tempat Wisata                  |");
    point(52, 31);
    puts("|2. Menginput Sesuai Kebutuhan User (Sewa mobil, guide, dll)|");
    point(52, 32);
    puts("|3. Memesan Paket Wisata                                    |");
    point(52, 33);
    puts("=============================================================");
    point(52, 34);
    printf("Masukkan pilihan anda : ");
    scanf("%d", &pilihan_program);
    clean();
    switch (pilihan_program)
    {

    case 1:
        pilihan_kabupaten(); //menuju fungsi untuk melihat daftar tempat int
        clean();
        goto menu;
        break;

    case 2:
        proses_menu();
        tampilan_pilihan_kabupaten();
        menu_inputan(mhs);
        clean();
        goto menu;
        break;

    case 3:
        pilihPaket(mhs);
        writeKuitansiPaket(mhs);
        penutup();
        exit(0);
        break;
    default:
        goto menu;
        break;
    }
    clean();
}
int pilihan_kabupaten()
{
    proses_menu();
pilihan:
    point(53, 15);
    puts("=======================================================");
    point(53, 16);
    puts("|                   DAFTAR KABUPATEN                  |");
    point(53, 17);
    puts("=======================================================");
    point(53, 18);
    puts("|1. Badung                | 6. Gianyar                |");
    point(53, 19);
    puts("|2. Denpasar              | 7. Karangasem             |");
    point(53, 20);
    puts("|3. Tabanan               | 8. Bangli                 |");
    point(53, 21);
    puts("|4. Jembrana              | 9. Buleleng Barat         |");
    point(53, 22);
    puts("|5. Klungkung             | 10.Buleleng Timur         |");
    point(53, 23);
    puts("=======================================================");
    point(53, 24);
    puts("Ketikkan angka 0 bila ingin kembali ke menu sebelumnya");
    point(53, 25);
    printf("Ketikkan kode kabupaten untuk melihat daftar wisata : ");
    scanf("%d", &kabupaten);
    switch (kabupaten)
    {
    case 1:
        view_badung();
        goto pilihan;
        break;
    case 2:
        view_denpasar();
        goto pilihan;
        break;
    case 3:
        view_tabanan();
        goto pilihan;
        break;
    case 4:
        view_jembrana();
        goto pilihan;
        break;
    case 5:
        view_klungkung();
        goto pilihan;
        break;
    case 6:
        view_gianyar();
        goto pilihan;
        break;
    case 7:
        view_karangasem();
        goto pilihan;
        break;
    case 8:
        view_bangli();
        goto pilihan;
        break;
    case 9:
        view_buleleng_barat();
        goto pilihan;
        break;
    case 10:
        view_buleleng_timur();
        goto pilihan;
        break;
    default:
        break;
    }
    clean();
}

void view_badung()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                         TEMPAT-TEMPAT WISATA DI KABUPATEN BADUNG                                                          |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Nusa Dua           | 0     | 1. Beach Walk                | 0     | 1. Pura Uluwatu              | 20000 | 1. Agrowisata Sutera SS      | 30000 |");
    point(6, 33);
    puts("| 2. Pantai Melasti            | 0     | 2. Jalan Legian              | 0     | 2. Pura Taman Ayun           | 0     | 2. House of Alaia Studio     | 200000|");
    point(6, 34);
    puts("| 3. Pantai Uluwatu            | 0     | 3. Discovery                 | 0     | 3. Pura Puja Mandala         | 0     | 3. Dream Studio Zone         | 100000|");
    point(6, 35);
    puts("| 4. Pantai Tegal Wangi        | 0     | 4. Krisna                    | 0     | 4. Masjid Agung Palapa       | 0     | 4. Garuda Wisnu Kencana      | 125000|");
    point(6, 36);
    puts("| 5. Pantai Suluban            | 0     | 5. Lippo Plaza               | 0     | 5. GKPB Jemaat Yudea         | 0     | 5. Workshop Jenggala Keramik | 100000|");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_denpasar()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                         TEMPAT-TEMPAT WISATA DI KOTA DENPASAR                                                             |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Padang Galak       | 0     | 1. Level 21 Mall             | 0     | 1. Pura Agung Jagatnatha     | 0     | 1. Monumen Bajra Sandhi      | 5000  |");
    point(6, 33);
    puts("| 2. Pantai Biaung             | 0     | 2. Trans Studio Mall         | 0     | 2. Pura Tanah Kilap          | 0     | 2. Museum Bung Karno         | 25000 |");
    point(6, 34);
    puts("| 3. Pantai Tangtu             | 0     | 3. Pasar Kumbasari           | 0     | 3. Klenteng Bei Ji Gong      | 0     | 3. Museum Bali               | 50000 |");
    point(6, 35);
    puts("| 4. Pantai Sanur              | 0     | 4. Sanur Market              | 0     | 4. Masjid Al Muawanah        | 0     | 4. BKSDA Bali                | 0     |");
    point(6, 36);
    puts("| 5. Pantai Matahari Terbit    | 0     | 5. Dewata Oleh-oleh          | 0     | 5. Gereja Katolik Roh Kudus  | 0     | 5. Museum Le Mayeur          | 10000 |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_tabanan()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                         TEMPAT-TEMPAT WISATA DI KABUPATEN TABANAN                                                         |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Beraban            | 0     | 1. Pasar Kodok               | 0     | 1. Pura Ulun Danu            | 30000 | 1. Museum Subak              | 10000 |");
    point(6, 33);
    puts("| 2. Pantai Bedungu            | 0     | 2. Joger Baturiti            | 0     | 2. Pura Luhur Batukaru       | 15000 | 2. Kebun Raya Bedugul        | 9000  |");
    point(6, 34);
    puts("| 3. Pantai Boka               | 0     | 3. Pasar Senggol             | 0     | 3. Pura Alas Kedaton         | 20000 | 3. Hutan Monyet              | 20000 |");
    point(6, 35);
    puts("| 4. Pantai Pasut              | 0     | 4. Mall Kampoeng Lot         | 0     | 4. Pura Mekori               | 0     | 4. Puri Anyar Kerambitan     | 10000 |");
    point(6, 36);
    puts("| 5. Pantai Klecung            | 0     | 5. Matahari Duta Plaza       | 0     | 5. Pura Tanah Lot            | 20000 | 5. Taman Pahlawan            | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_jembrana()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                           TEMPAT-TEMPAT WISATA DI KABUPATEN JEMBRANA                                                      |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |          AIR TERJUN          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Perancak           | 0     | 1. Air Terjun Batu Belah     | 0     | 1. Pura Rambut Siwi          | 5000  | 1. Taman Nasional Bali Barat | 2500  |");
    point(6, 33);
    puts("| 2. Pantai Madewi             | 0     | 2. Air Terjun Bidadari       | 0     | 2. Pura Jati                 | 0     | 2. Museum Manusia Purba      | 0     |");
    point(6, 34);
    puts("| 3. Teluk Gilimanuk           | 0     | 3. Air Terjun Juwuk Manis    | 0     | 3. Pura Majapahit            | 0     | 3. Desa Sangkaragung         | 60000 |");
    point(6, 35);
    puts("| 4. Pantai Bakut Rening       | 0     | 4. Air Terjun Grojogan       | 0     | 4. Pura Gede Perancak        | 0     | 4. Makam Tua                 | 0     |");
    point(6, 36);
    puts("| 5. Pantai Delod Berawah      | 0     | 5. Air Terjun Nusamara       | 0     | 5. Klenteng Cung Ling Bio    | 0     | 5. Taman Prasasti            | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_klungkung()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                            TEMPAT-TEMPAT WISATA DI KABUPATEN KLUNGKUNG                                                    |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Dream Beach               | 0     | 1. Pasar Rakyat Semarapura   | 0     | 1. Pura Dalem Ped            | 0     | 1. Angle's Bilabong          | 5000  |");
    point(6, 33);
    puts("| 2. Pantai Jungut Batu        | 0     | 2. Pasar Endek               | 0     | 2. Pura Giri Putri           | 10000 | 2. Bukit Teletubbis          | 0     |");
    point(6, 34);
    puts("| 3. Pantai Selambung          | 0     | 3. Pasar Galiran             | 0     | 3. Pura Paluang              | 10000 | 3. Taman Kertha Gosa         | 12000 |");
    point(6, 35);
    puts("| 4. Mushroom Beach            | 0     | 4. Bintang Oleh-oleh         | 0     | 4. Pura Watu Klotok          | 0     | 4. Museum Nyoman Gunarsa     | 25000 |");
    point(6, 36);
    puts("| 5. Toya Pakeh Beach          | 0     | 5. -                         | 0     | 5. Masjid Nurul Huda         | 10000 | 5. Museum Semarajaya         | 25000 |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_gianyar()
{
    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                           TEMPAT-TEMPAT WISATA DI KABUPATEN GIANYAR                                                       |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Lebih              | 0     | 1. Arta Sedana               | 0     | 1. Pura Goa Lawah            | 15000 | 1. Taman Nusa                | 85000 |");
    point(6, 33);
    puts("| 2. Pantai Siyut              | 0     | 2. Manjari                   | 0     | 2. Pura Goa Gajah            | 15000 | 2. Museum Gedong Arca        | 0     |");
    point(6, 34);
    puts("| 3. Pantai Cucukan            | 0     | 3. Pasar Tradisional         | 0     | 3. Pura Penataran Sasih      | 0     | 3. Museum Puri Lukisan       | 0     |");
    point(6, 35);
    puts("| 4. Pantai Masceti            | 0     | 4. Giftart_Bali              | 0     | 4. Pura Tirta Empul          | 30000 | 4. The Sukarno Center        | 20000 |");
    point(6, 36);
    puts("| 5. Pantai Purnama            | 0     | 5. Blink                     | 0     | 5. Pura Gunung Kawi          | 30000 | 5. Kemenuh Butterfly Park    | 37400 |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");    
}
void view_karangasem()
{
    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                         TEMPAT-TEMPAT WISATA DI KABUPATEN KARANGASEM                                                      |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Wates              | 0     | 1. Arta Sedana               | 0     | 1. Puri Kaleran              | 0     | 1. Museum Pustaka Lontar     | 0     |");
    point(6, 33);
    puts("| 2. Pantai Bias Tugel         | 0     | 2. Dupa Amlapura             | 0     | 2. Pura Juuk Manis           | 0     | 2. Charly's ChocolateFactory | 10000 |");
    point(6, 34);
    puts("| 3. Pantai Virgin             | 0     | 3. Clandys                   | 0     | 3. Pemerajan Agung Batuaya   | 0     | 3. Puri Agung Karangasem     | 0     |");
    point(6, 35);
    puts("| 4. Pantai Yeh Malet          | 0     | 4. Cahaya Wirama             | 0     | 4. Masjid Jami' Al Mukhlisin | 0     | 4. Desa Tengenan             | 0     |");
    point(6, 36);
    puts("| 5. Pantai Samuh              | 0     | 5. Pasar Sibetan             | 0     | 5. GKPB Philia               | 0     | 5. -                         | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_bangli()
{
    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                             TEMPAT-TEMPAT WISATA DI KABUPATEN BANGLI                                                      |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|          AIR TERJUN          | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Air Terjun Tibumana       | 20000 | 1. Bangli Mesari             | 0     | 1. Pura Pingit               | 0     | 1. Desa Penglipuran          | 15000 |");
    point(6, 33);
    puts("| 2. Air Terjun Tegunungan     | 15000 | 2. Victory Bali              | 0     | 2. Pura Penataran Sangging   | 0     | 2. Museum Geopark Batur      | 20000 |");
    point(6, 34);
    puts("| 3. Air Terjun Kuning         | 0     | 3. Pande Busana              | 0     | 3. Pura Kehen                | 0     | 3. Ayodya Oemah Strawberry   | 15000 |");
    point(6, 35);
    puts("| 4. Air Terjun Pengibul       | 5000  | 4. Randy Sejahtera           | 0     | 4. Pura Ulun Suwi Subak      | 0     | 4. Puri Kilian               | 0     |");
    point(6, 36);
    puts("| 5. Bangkiang Djaran Waterfall| 0     | 5. Kidul Market              | 0     | 5. Pura Pengrubugan          | 0     | 5. -                         | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_buleleng_barat()
{
    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                          TEMPAT-TEMPAT WISATA DI KABUPATEN BULELENG BARAT                                                 |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Pumeteran          | 0     | 1. Hardys                    | 0     | 1. GKII Gerogak              | 0     | 1. Turtle Hatchery Project   | 0     |");
    point(6, 33);
    puts("| 2. Pantai Batu Sungu         | 0     | 2. Sanchita Singaraja        | 0     | 2. Pura Taman Swasti         | 0     | 2. Grand Surya Waterpark     | 50000 |");
    point(6, 34);
    puts("| 3. Pantai Umeanyar           | 0     | 3. Pasar Seririt             | 0     | 3. Taman Sari Loka Paksa     | 0     | 3. Perkebunan Anggur Rakyat  | 0     |");
    point(6, 35);
    puts("| 4. Pantai Tanggu Wisia       | 0     | 4. Pasar Banyuatis           | 0     | 4. Pura Puseh Bestala        | 0     | 4. -                         | 0     |");
    point(6, 36);
    puts("| 5. Pantai Gili Putih         | 0     | 5. Toko Suda Aditya          | 0     | 5. Pura Tepi Siring          | 0     | 5. -                         | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_buleleng_timur()
{
    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                          TEMPAT-TEMPAT WISATA DI KABUPATEN BULELENG TIMUR                                                 |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Punjuk Batu        | 0     | 1. BREM Singaraja            | 0     | 1. Griya Tirta               | 0     | 1. Museum Buleleng           | 5000  |");
    point(6, 33);
    puts("| 2. Hidden Beach Giri Emas    | 0     | 2. Marmarshopp_Singaraja     | 0     | 2. Pura Sura Lepang          | 0     | 2. Museum Gedong Kirtya      | 0     |");
    point(6, 34);
    puts("| 3. Pantai Pemaron            | 0     | 3. Krisna                    | 15000 | 3. Pura Lebah Suwug          | 0     | 3. Museum Sundal Ketjil      | 0     |");
    point(6, 35);
    puts("| 4. Pantai Kerobokan          | 0     | 4. Pasar Banyuning           | 0     | 4. Seng Hong Bio             | 0     | 4. Puri Agung Singaraja      | 0     |");
    point(6, 36);
    puts("| 5. Pantai Batu Sugu          | 0     | 5. DewaDewi Collection       | 0     | 5. Musholla Babusallam       | 0     | 5. Workshop Jenggala Keramik | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void pilihPaket(sign_up mhs)
{
   //paket
}
int hargaPaket()
{
    //fungsi paket
}
int menu_inputan(sign_up mhs)
{
   //fungsi menu
}

void tampilan_pilihan_kabupaten()
{

    //pilih kabupaten
}
int input_data()
{

    proses_menu();
    switch (kabupaten)
    {
    case 1:
        view_badung();
        break;
    case 2:
        view_denpasar();
        break;
    case 3:
        view_tabanan();
        break;
    case 4:
        view_jembrana();
        break;
    case 5:
        view_klungkung();
        break;
    case 6:
        view_gianyar();
        break;
    case 7:
        view_karangasem();
        break;
    case 8:
        view_bangli();
        break;
    case 9:
        view_buleleng_barat();
        break;
    case 10:
        view_buleleng_timur();
        break;
    default:
        break;
    }

    point(6,39);
    printf("Berapa tempat wisata yang ingin anda kunjungi (max 5)  : ");
    scanf("%d", &N);
    point(6,40);
    printf("Masukkan pilihan anda : ");


    for (i = 0; i <= N; i++)
    {
        point(30,41);
        n[i] = malloc(sizeof(char) * MAXLEN); //fungsi standar untuk mengalokasikan memori dari sizeof(char)
        fgets(n[i], 10000, stdin);
    }

    clean();
    return 0;
}

void input_tempatmakan()
{
    //fungsi tempat makan
  }
int pilihanint()
{
   //nyewa mobil
}

int input_jarak(int jarak, int kendaraan, int bbm)
{
    proses_menu();
    point(55, 15);
    puts("=============================================================================");
    point(55, 16);
    puts("|                               JARAK & MOBIL                               |");
    point(55, 17);
    puts("=============================================================================");
    point(55, 18);
    printf("|     Cek jarak tempuh di google maps dan sesuaikan dengan kendaraan anda    |");
    point(55, 19);
    puts("=============================================================================");
    point(55, 20);
    printf(" Ketikkan perkiraan jarak tempat anda sekarang ke tujuan  : ");
    scanf("%d", &jarak);
    point(55, 21);
    printf("          1. Mobil             |||                     2. Motor            ");
    point(55, 22);
    printf(" Ketikkan kode kendaraan yang anda pergunakan             : ");
    scanf("%d", &kendaraan);
    point(55, 23);
    printf("        1. Pertalite           |||                  2. Pertamax            ");
    point(55, 24);
    printf(" Ketikkan kode bahan bakar yang anda pergunakan           : ");
    scanf("%d", &bbm);

    if (kendaraan == 1)
    {
        if (bbm == 1)
            bensin = (jarak * KONS * PERTALITE) / K_MOBIL;
        else if (bbm == 2)
            bensin = (jarak * KONS * PERTAMAX) / K_MOBIL;
    }
    else if (kendaraan == 2)
    {
        if (bbm == 1)
            bensin = (jarak * KONS * PERTALITE) / K_MOTOR;
        else if (bbm == 2)
            bensin = (jarak * KONS * PERTAMAX) / K_MOTOR;
    }
    else
        printf("salah!");
    clean();
}

void fungsi_hotel()
{
    proses_menu();
    point(65, 15);
    puts("=======================================================");
    point(65, 16);
    puts("|                   PESAN PENGINAPAN                  |");
    point(65, 17);
    puts("=======================================================");
    point(65, 18);
    printf("|     Apakah anda ingin menginap di suatu tempat?     |");
    point(65, 19);
    puts("-------------------------------------------------------");
    point(65, 20);
    printf("1.Yes                       ||2. No                    ");
    point(65, 21);
    puts("-------------------------------------------------------");
    point(65, 22);
    scanf("%d", &a);
    clean();
    if (a == 1)
    {
        jenis_hotel();
    }
    else
    {
        printf("salah");
    }
}

int jenis_hotel()
{
    proses_menu();
    int pilihan_penginapan;
    point(68, 15);
    puts("=============================================");
    point(68, 16);
    puts("|        JENIS PENGINAPAN                   |");
    point(68, 17);
    puts("=============================================");
    point(68, 18);
    puts("|1. Home Stay                               |");
    point(68, 19);
    puts("|2. Hotel bintang 3                         |");
    point(68, 20);
    puts("|3. Hotel bintang 5                         |");
    point(68, 21);
    puts("|4. Villa                                   |");
    point(68, 22);
    puts("=============================================");
    point(68, 23);
    printf(" Jenis hotel apa yang anda inginkan ?  :");
    scanf("%d", &b);
    point(68, 24);
    printf(" Anda ingin menginap berapa hari ? : ");
    scanf("%d", &lama);
    point(68, 25);
    printf(" Bila anda memilih villa, ketikkan 1 atau 2 (1 villa berkapasitas 5 orang)");
    point(68, 26);
    printf(" Anda ingin pesan untuk berapa orang (kecuali vila)   : ");
    scanf("%d", &c);
    clean();

    if (b == 1)
    {
        point(72, 15);
        puts("===============================");
        point(72, 16);
        puts("|      DAFTAR HOME STAY       |");
        point(72, 17);
        puts("===============================");
        point(72, 18);
        puts("|1.Cottage DenAyu             |");
        point(72, 19);
        puts("|2.Lembayung Sari             |");
        point(72, 20);
        puts("|3.Bakungan diJero            |");
        point(72, 21);
        puts("|4.Segara Urip                |");
        point(72, 22);
        puts("|5.Milla                      |");
        point(72, 23);
        puts("|6.Nassybe                    |");
        point(72, 24);
        puts("|7.Ida                        |");
        point(72, 25);
        puts("|8.D karang                   |");
        point(72, 26);
        puts("|9.Taruna                     |");
        point(72, 27);
        puts("|10.Madhasativa               |");
        point(72, 28);
        puts("===============================");
        point(72, 29);
        printf("Dimana anda ingin menginap? :");
        scanf("%d", &pilihan_penginapan);
        if (pilihan_penginapan == 1)
        {
            harga_penginapan = lama * 160000 * c;
        }
        else if (pilihan_penginapan == 2)
        {
            harga_penginapan = lama * 185000 * c;
        }
        else if (pilihan_penginapan == 3)
        {
            harga_penginapan = lama * 150000 * c;
        }
        else if (pilihan_penginapan == 4)
        {
            harga_penginapan = lama * 250000 * c;
        }
        else if (pilihan_penginapan == 5)
        {
            harga_penginapan = lama * 300000 * c;
        }
        else if (pilihan_penginapan == 6)
        {
            harga_penginapan = lama * 200000 * c;
        }
        else if (pilihan_penginapan == 7)
        {
            harga_penginapan = lama * 300000 * c;
        }
        else if (pilihan_penginapan == 8)
        {
            harga_penginapan = lama * 365000 * c;
        }
        else if (pilihan_penginapan == 9)
        {
            harga_penginapan = lama * 280000 * c;
        }
        else if (pilihan_penginapan == 10)
        {
            harga_penginapan = lama * 400000 * c;
        }
    }
    else if (b == 2)
    {
        point(72, 15);
        puts("===================================");
        point(72, 16);
        puts("|      DAFTAR HOTEL BINTANG 3     |");
        point(72, 17);
        puts("===================================");
        point(72, 18);
        puts("|1.Losari                         |");
        point(72, 19);
        puts("|2.Quest San                      |");
        point(72, 20);
        puts("|3.Puri Taman Sari                |");
        point(72, 21);
        puts("|4.The Galuh Pakuntan             |");
        point(72, 22);
        puts("|5.The Sunjaya                    |");
        point(72, 23);
        puts("|6.Puri Saron                     |");
        point(72, 24);
        puts("|7.Camessa Hotel Amed             |");
        point(72, 25);
        puts("|8.The Volcania                   |");
        point(72, 26);
        puts("|9.Sunia Loka                     |");
        point(72, 27);
        puts("|10.Melka Excelsior               |");
        point(72, 28);
        puts("===================================");
        point(72, 29);
        printf("Dimana anda ingin menginap? :");
        scanf("%d", &pilihan_penginapan);
        if (pilihan_penginapan == 1)
        {
            harga_penginapan = lama * 165000 * c;
        }
        else if (pilihan_penginapan == 2)
        {
            harga_penginapan = lama * 285000 * c;
        }
        else if (pilihan_penginapan == 3)
        {
            harga_penginapan = lama * 315000 * c;
        }
        else if (pilihan_penginapan == 4)
        {
            harga_penginapan = lama * 305000 * c;
        }
        else if (pilihan_penginapan == 5)
        {
            harga_penginapan = lama * 185000 * c;
        }
        else if (pilihan_penginapan == 6)
        {
            harga_penginapan = lama * 150000 * c;
        }
        else if (pilihan_penginapan == 7)
        {
            harga_penginapan = lama * 290000 * c;
        }
        else if (pilihan_penginapan == 8)
        {
            harga_penginapan = lama * 550000 * c;
        }
        else if (pilihan_penginapan == 9)
        {
            harga_penginapan = lama * 610000 * c;
        }
        else if (pilihan_penginapan == 10)
        {
            harga_penginapan = lama * 880000 * c;
        }
    }
    else if (b == 3)
    {
        point(72, 15);
        puts("=================================");
        point(72, 16);
        puts("|     DAFTAR HOTEL BINTANG 5    |");
        point(72, 17);
        puts("=================================");
        point(72, 18);
        puts("|Aryaduta                       |");
        point(72, 19);
        puts("|Grand Mega                     |");
        point(72, 20);
        puts("|Umadathu                       |");
        point(72, 21);
        puts("|Taman Wana                     |");
        point(72, 22);
        puts("|Vision Resort                  |");
        point(72, 23);
        puts("|UnudOne                        |");
        point(72, 24);
        puts("|Rising Star                    |");
        point(72, 25);
        puts("|The Klumpu Bali                |");
        point(72, 26);
        puts("|Taman Sari Resort              |");
        point(72, 27);
        puts("|Nugraha Lovina                 |");
        point(72, 28);
        puts("=================================");
        point(72, 29);
        printf("Dimana anda ingin menginap? :");
        scanf("%d", &pilihan_penginapan);
        if (pilihan_penginapan == 1)
        {
            harga_penginapan = lama * 1000000 * c;
        }
        else if (pilihan_penginapan == 2)
        {
            harga_penginapan = lama * 1500000 * c;
        }
        else if (pilihan_penginapan == 3)
        {
            harga_penginapan = lama * 340000 * c;
        }
        else if (pilihan_penginapan == 4)
        {
            harga_penginapan = lama * 1000000 * c;
        }
        else if (pilihan_penginapan == 5)
        {
            harga_penginapan = lama * 400000 * c;
        }
        else if (pilihan_penginapan == 6)
        {
            harga_penginapan = lama * 360000 * c;
        }
        else if (pilihan_penginapan == 7)
        {
            harga_penginapan = lama * 300000 * c;
        }
        else if (pilihan_penginapan == 8)
        {
            harga_penginapan = lama * 5000000 * c;
        }
        else if (pilihan_penginapan == 9)
        {
            harga_penginapan = lama * 1200000 * c;
        }
        else if (pilihan_penginapan == 10)
        {
            harga_penginapan = lama * 650000 * c;
        }
    }
    else if (b == 4 && c <= 4)
    {
        point(72, 15);
        puts("==============================");
        point(72, 16);
        puts("|         DAFTAR VILLA       |");
        point(72, 17);
        puts("==============================");
        point(72, 18);
        puts("|De Bharata                  |");
        point(72, 19);
        puts("|Banyumas                    |");
        point(72, 20);
        puts("|Hati Indah                  |");
        point(72, 21);
        puts("|Madewi Surf                 |");
        point(72, 22);
        puts("|Karma Loka                  |");
        point(72, 23);
        puts("|L'Orange Bali               |");
        point(72, 24);
        puts("|Akasa Villa Tulamben        |");
        point(72, 25);
        puts("|Asli Bali                   |");
        point(72, 26);
        puts("|Amertha                     |");
        point(72, 27);
        puts("|Araminth                    |");
        point(72, 28);
        puts("==============================");
        point(72, 29);
        printf("Dimana anda ingin menginap? :");
        scanf("%d", &pilihan_penginapan);
        if (pilihan_penginapan == 1)
        {
            harga_penginapan = lama * 1320000;
        }
        else if (pilihan_penginapan == 2)
        {
            harga_penginapan = lama * 1200000;
        }
        else if (pilihan_penginapan == 3)
        {
            harga_penginapan = lama * 4000000;
        }
        else if (pilihan_penginapan == 4)
        {
            harga_penginapan = lama * 420000;
        }
        else if (pilihan_penginapan == 5)
        {
            harga_penginapan = lama * 235000;
        }
        else if (pilihan_penginapan == 6)
        {
            harga_penginapan = lama * 1530000;
        }
        else if (pilihan_penginapan == 7)
        {
            harga_penginapan = lama * 335000;
        }

        else if (pilihan_penginapan == 8)
        {
            harga_penginapan = lama * 1000000;
        }
        else if (pilihan_penginapan == 9)
        {
            harga_penginapan = lama * 1425000;
        }
        else if (pilihan_penginapan == 10)
        {
            harga_penginapan = lama * 500000;
        }
        else
        {
            printf("salah");
        }
    }
    else
    {
        printf("salah");
    }

    clean();
}

int tiket_masuk()
{
//menu penguhubung tiket masuk
    }
void looping_tiket()
{
    point(6, 39);
    printf(" Berapa tempat wisata yang ingin anda kunjungi ? (max 5)  : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {

        printf("\t Ketikkan harga tiket ke-%i       : ", i + 1);
        scanf("%d", &looping[i]);
    }
    for (i = 0; i < N; i++)
    {
        sum = sum + looping[i];
    }
    point(6, 44);
    printf(" Anda ingin tiket untuk berapa orang ?  : ");
    scanf("%d", &o);
    sumtot = sum * o;
}

void tampilkan()
{
    proses_menu();
    point(75, 15);
    printf(" Pilihan anda : ");
    for (i = 0; i <= N; i++)
    {

        printf("\t\t\t\t\t\t\t\t\t\t%s", n[i]);
    }

    for (i = 0; i <= N; i++)
    {
        free(n[i]);

    }

}
int tampilkan_data(sign_up mhs)
{
    int w;

    point(65, 15);
    puts("======================================");
    point(65, 16);
    puts("|            TAMPILAN DATA           |");
    point(65, 17);
    puts("======================================");
    point(65, 18);
    printf("|Tempat Makan          = %d        ", harga);
    point(65, 19);
    printf("|Menyewa Guide         = %d        ", jumlah_int);
    point(65, 20);
    printf("|Menyewa Mobil         = %d        ", hargaint);
    point(65, 21);
    printf("|Estimasi Bensin       = %d        ", bensin);
    point(65, 22);
    printf("|Penginapan            = %d        ", harga_penginapan);
    point(65, 23);
    printf("|Tiket                 = %d        ", sumtot);
    point(65, 24);
    puts("=====================================|");
    point(65, 25);
    printf("Siapkan Budget Sebesar = %d", harga + jumlah_int + hargaint + bensin + harga_penginapan + sumtot);
    point(65, 30);
    puts("=====================================|");
    point(65, 31);
    printf(" Apakah anda ingin kembali ke bagian menu sebelumnya ? ");
    point(65, 32);
    printf(" Ketik (1) Jika IYA | Ketik (2) Jika SELESAI : ");
    scanf("%d", &w);

    if (w == 1)
    {
        menu_inputan(mhs);
    }
    else if (w == 2)
    {
        clean();
        penutup();
        writeKuitansi(mhs);
        exit(0);
    }
    else
    {
        point(65, 34);
        printf(" Kode yang anda masukkan tidak sesuai");

    }
    clean();
    return 0;
}

void penutup()
{
    char menu_2[50] = ">>TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI<<";
    char menu_3[50] = ">>SILAKAN MENGECEK KWITANSI DALAM BENTUK .TXT<<";
    char menu_4[50] = ">>>>>>>>>>>>>>>SELAMAT BERLIBUR<<<<<<<<<<<<<<<<";

    point(65, 14);
    for (i = 0; i < 50; i++)
    {
        Sleep(50);
        printf("%c", menu_2[i]);
    }
    point(65, 16);
    for (i = 0; i < 50; i++)
    {
        Sleep(50);
        printf("%c", menu_3[i]);
    }
    point(65, 18);
    for (i = 0; i < 50; i++)
    {
        Sleep(50);
        printf("%c", menu_4[i]);
    }
    clean();
}
int writeKuitansi(sign_up mhs)
{
    time_t waktuSekarang; //tanggal user menginput data
    time(&waktuSekarang);
    struct tm *waktuUser = localtime(&waktuSekarang);

    FILE *pr;
    pr = fopen("KwitansiPembayaran.txt", "a+");
    fprintf(pr, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pr, "\n\t\t\t\t\t\t|-----------------------Kuitansi Pembayaran----------------------|");
    fprintf(pr, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pr, "\n\t\t\t\t\t\t|%i/%i/%i                                                       ", waktuUser->tm_mday, waktuUser->tm_mon + 1, waktuUser->tm_year + 1900);
    fprintf(pr, "\n\t\t\t\t\t\t|User atas nama %s                                                 \n", mhs.nama);
    fprintf(pr, "\n\t\t\t\t\t\t|                                                                ");
    fprintf(pr, "\n\t\t\t\t\t\t|Total Pembayaran                                                ");
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk tempat makan memakan biaya               : %d             ", harga);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk menyewa guide memakan biaya              : %d             ", jumlah_int);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk menyewa mobil memakan biaya              : %d             ", hargaint);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk estimasi bensin memakan biaya            : %d             ", bensin);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk harga penginapan memakan biaya           : %d             ", harga_penginapan);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk harga tiket masuk                        : %d             ", o * sum);
    fprintf(pr, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pr, "\n\t\t\t\t\t\t|Total Perkiraan Jumlah Biaya Liburan           = %d             ", harga + jumlah_int + hargaint + bensin + harga_penginapan + (o * sum));
    fprintf(pr, "\n\t\t\t\t\t\t==================================================================");

    fprintf(pr, "\n\t\t\t\t\t\t  -------------------------------------------------------------------");
    fprintf(pr, "\n\t\t\t\t\t\t +---Terima Kasih Telah Menggunakan Program Choose Your Vacation---+");
    fprintf(pr, "\n\t\t\t\t\t\t ***********************Selamat Berlibur****************************");
    fprintf(pr, "\n\t\t\t\t\t\t  -------------------------------------------------------------------");

    fclose(pr);
}
int writeKuitansiPaket(sign_up mhs)
{
    time_t waktuSekarang; //tanggal user menginput data
    time(&waktuSekarang);
    struct tm *waktuUser = localtime(&waktuSekarang);

    FILE *pt;
    pt = fopen("KwitansiPaket.txt", "a+");

    fprintf(pt, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pt, "\n\t\t\t\t\t\t|-----------------------Kuitansi Pembayaran----------------------|");
    fprintf(pt, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pt, "\n\t\t\t\t\t\t||%i/%i/%i                                                         \n", waktuUser->tm_mday, waktuUser->tm_mon + 1, waktuUser->tm_year + 1900);
    fprintf(pt, "\t\t\t\t\t\t||Pemesanan atas nama %s                                           \n", mhs.nama);

    fprintf(pt, "\t\t\t\t\t\t||                                                                 \n");
    fprintf(pt, "\t\t\t\t\t\t||Total Pembayaran           =  %d                                 \n", hp);
    fprintf(pt, "\n\t\t\t\t\t\t  -------------------------------------------------------------------");
    fprintf(pt, "\n\t\t\t\t\t\t +---Terima Kasih Telah Menggunakan Program Choose Your Vacation---+");
    fprintf(pt, "\n\t\t\t\t\t\t ***********************Selamat Berlibur****************************");
    fprintf(pt, "\n\t\t\t\t\t\t  -------------------------------------------------------------------");

    fclose(pt);
}
