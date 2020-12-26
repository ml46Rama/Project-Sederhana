#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MOBIL1 50000
#define MOBIL2 70000
#define MOBIL3 100000

typedef char string[50];
int i;               //untuk digunakan di array pasa saat input tujuan wisata
int pilihan_program; //digunakan untuk menginput pilihan di menu pertama
int pilihan_menu;    //digunakan untuk menginput pilihan di menu kedua
int N;               //untuk menerima inputan batas tempat wisata yang dari user
int paket, bagPak;   //digunakan difungsi paket untuk menginputkan paket wisata yang dipilih
int hargaPaket();
typedef struct //struct untuk fungsi log in dan sign up
{
    string nama;
    string password;
} login;
typedef struct
{
    int umur;
    login psw;
} sign_up;
typedef struct //digunakan untuk fungsi wisata yang berhubungan dengan pemilihan kabupaten, dan guide
{
    int kabupaten;         //untuk memilih kabupaten berdasarkan kode
    string kabupaten_nama; //untuk mengimputkan nama dari kabupaten
    int pilih_lanjutan;    //untuk melanjutkan inputan setelah ia memilih liburan dimana

    int input_tour_guide;
    int jumlah_guide;
    int jam_guide;
    int jumlah_sewa;

} wisata;
typedef struct
{
    int makan; //untuk input tempat makan
    int harga;
} restaurant;
typedef struct //struct digunakan untuk input tempat wisata
{
    wisata fl;      //untuk mengambil variabel di struct wisata
    string pilihan; //untuk pilihan liburan di array
    int pilihan1;   //saat ini belum tetapi fungsinya untuk membatasi jumlah inputan
} program;
typedef struct // berhubungan dengan inputan kendaraan
{
    int ask, pilihmobil, jam;
    float hargasewa;
    float jarak;              //input jarak user dari tempat wisata
    int kendaraan;            //input kendaraan yang digunakan user
    float jarak_wisata_mobil; //jarak jika menggunakan mobil
    float jarak_wisata_motor; //jarak jika menggunakan motor
} sewa;

//==============================================================//
//nama fungsi   : sign-uo                                      //
//fungsi        :memasukkan umur, nama, dan password            //
//variabel      : int umur, string nama, string password        //
//input         : umur, nama, password                          //
//output        : -                                             //
//10-12-2020                                            rev 1.0 //
//luh intan ratna sari dewi-2005551057                          //
//==============================================================//
sign_up masuk_akun(sign_up mhs) //user disuruh masuk dulu untuk membuat akun, seperti input nama, password serta umur
{
    puts("===========================================================");
    puts("Untuk pertama kali masuk anda harus sign-in terlebih dahulu");
    puts("============================================================");
    printf("\nmasukkan umur anda        :"); //fungsi umur nanti akan berkaitan dengan harga tiket
    scanf("%d", &mhs.umur);
    printf("\nmasukkan nama             :");
    getchar();
    gets(mhs.psw.nama);
    printf("\nmasukkan password anda    :");
    scanf("%s", &mhs.psw.password);
    return mhs;
}
//==============================================================//
//nama fungsi   : tampil login                                  //
//fungsi        : menampilkan umur, nama, password setelah login//
//variabel      : int umur, string nama, string password        //
//input         : -                                             //
//output        : tampilan                                      //
//10-12-2020                                            rev 1.0 //
//luh intan ratna sari dewi-2005551057                          //
//==============================================================//
void tampil_login(login psw, sign_up mhs, wisata fl)
{
    printf("\n      umur anda                 :%d", mhs.umur);
    printf("\n      nama akun anda            :%s", psw.nama);
    printf("\n      password anda             :%9s", psw.password);
}

//==============================================================//
//nama fungsi   : void view_kabupaten                           //
//fungsi        : menampilkan daftar wisata dimasing-masing     //
//                kabupaten                                     //
//variabel      : -                                             //
//input         : -                                             //
//output        : daftar tempat wisata                          //
//17-12-2020                                            rev 2.0 //
//luh intan ratna sari dewi-2005551057                          //
//==============================================================//
void view_badung(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                         TEMPAT-TEMPAT WISATA DI KABUPATEN BADUNG                                          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|            PANTAI            |           SHOPPING           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Pantai Nusa Dua           | 1. Beach Walk                | 1. Pura Uluwatu              | 1. Agrowisata Sutera SS      |");
    puts("| 2. Pantai Melasti            | 2. Jalan Legian              | 2. Pura Taman Ayun           | 2. House of Alaia Studio     |");
    puts("| 3. Pantai Uluwatu            | 3. Discovery                 | 3. Pura Puja Mandala         | 3. Dream Studio Zone         |");
    puts("| 4. Pantai Tegal Wangi        | 4. Krisna                    | 4. Masjid Agung Palapa       | 4. Garuda Wisnu Kencana      |");
    puts("| 5. Pantai Suluban            | 5. Lippo Plaza               | 5. GKPB Jemaat Yudea         | 5. Workshop Jenggala Keramik |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}
void view_denpasar(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                         TEMPAT-TEMPAT WISATA DI KOTA DENPASAR                                             |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|            PANTAI            |           SHOPPING           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Pantai Padang Galak       | 1. Level 21 Mall             | 1. Pura Agung Jagatnatha     | 1. Monumen Bajra Sandhi      |");
    puts("| 2. Pantai Biaung             | 2. Trans Studio Mall         | 2. Pura Tanah Kilap          | 2. Museum Bung Karno         |");
    puts("| 3. Pantai Tangtu             | 3. Pasar Kumbasari           | 3. Klenteng Bei Ji Gong      | 3. Museum Bali               |");
    puts("| 4. Pantai Sanur              | 4. Sanur Market              | 4. Masjid Al Muawanah        | 4. BKSDA Bali                |");
    puts("| 5. Pantai Matahari Terbit    | 5. Dewata Oleh-oleh          | 5. Gereja Katolik Roh Kudus  | 5. Museum Le Mayeur          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}
void view_tabanan(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                         TEMPAT-TEMPAT WISATA DI KABUPATEN TABANAN                                         |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|            PANTAI            |           SHOPPING           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Pantai Beraban            | 1. Pasar Kodok               | 1. Pura Ulun Danu            | 1. Museum Subak              |");
    puts("| 2. Pantai Bedungu            | 2. Joger Baturiti            | 2. Pura Luhur Batukaru       | 2. Kebun Raya Bedugul        |");
    puts("| 3. Pantai Boka               | 3. Pasar Senggol             | 3. Pura Alas Kedaton         | 3. Hutan Monyet              |");
    puts("| 4. Pantai Pasut              | 4. Mall Kampoeng Lot         | 4. Pura Mekori               | 4. Puri Anyar Kerambitan     |");
    puts("| 5. Pantai Klecung            | 5. Matahari Duta Plaza       | 5. Pura Tanah Lot            | 5. Taman Pahlawan            |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}
void view_jembrana(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                           TEMPAT-TEMPAT WISATA DI KABUPATEN JEMBRANA                                      |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|            PANTAI            |         AIR TERJUN           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Pantai Perancak           | 1. Air Terjun Batu Belah     | 1. Pura Rambut Siwi          | 1. Taman Nasional Bali Barat |");
    puts("| 2. Pantai Madewi             | 2. Air Terjun Bidadari       | 2. Pura Jati                 | 2. Museum Manusia Purba      |");
    puts("| 3. Teluk Gilimanuk           | 3. Air Terjun Juwuk Manis    | 3. Pura Majapahit            | 3. Desa Sangkaragung         |");
    puts("| 4. Pantai Bakut Rening       | 4. Air Terjun Grojogan       | 4. Pura Gede Perancak        | 4. Makam Tua                 |");
    puts("| 5. Pantai Delod Berawah      | 5. Air Terjun Nusamara       | 5. Klenteng Cung Ling Bio    | 5. Taman Prasasti            |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}
void view_klungkung(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                            TEMPAT-TEMPAT WISATA DI KABUPATEN KLUNGKUNG                                    |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|            PANTAI            |           SHOPPING           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Dream Beach               | 1. Pasar Rakyat Semarapura   | 1. Pura Dalem Ped            | 1. Angle's Bilabong          |");
    puts("| 2. Pantai Jungut Batu        | 2. Pasar Endek               | 2. Pura Giri Putri           | 2. Bukit Teletubbis          |");
    puts("| 3. Pantai Selambung          | 3. Pasar Galiran             | 3. Pura Paluang              | 3. Taman Kertha Gosa         |");
    puts("| 4. Mushroom Beach            | 4. Bintang Oleh-oleh         | 4. Pura Watu Klotok          | 4. Museum Nyoman Gunarsa     |");
    puts("| 5. Toya Pakeh Beach          | 5. -                         | 5. Masjid Nurul Huda         | 5. Museum Semarajaya         |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}
void view_gianyar(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                           TEMPAT-TEMPAT WISATA DI KABUPATEN GIANYAR                                       |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|            PANTAI            |           SHOPPING           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Pantai Lebih              | 1. Arta Sedana               | 1. Pura Goa Lawah            | 1. Taman Nusa                |");
    puts("| 2. Pantai Siyut              | 2. Manjari                   | 2. Pura Goa Gajah            | 2. Museum Gedong Arca        |");
    puts("| 3. Pantai Cucukan            | 3. Pasar Tradisional         | 3. Pura Penataran Sasih      | 3. Museum Puri Lukisan       |");
    puts("| 4. Pantai Masceti            | 4. Giftart_Bali              | 4. Pura Tirta Empul          | 4. The Sukarno Center        |");
    puts("| 5. Pantai Purnama            | 5. Blink                     | 5. Pura Gunung Kawi          | 5. Kemenuh Butterfly Park    |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}
void view_karangasem(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                         TEMPAT-TEMPAT WISATA DI KABUPATEN KARANGASEM                                      |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|            PANTAI            |           SHOPPING           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Pantai Wates              | 1. Arta Sedana               | 1. Puri Kaleran              | 1. Museum Pustaka Lontar     |");
    puts("| 2. Pantai Bias Tugel         | 2. Dupa Amlapura             | 2. Pura Juuk Manis           | 2. Charly's ChocolateFactory |");
    puts("| 3. Pantai Virgin             | 3. Clandys                   | 3. Pemerajan Agung Batuaya   | 3. Puri Agung Karangasem     |");
    puts("| 4. Pantai Yeh Malet          | 4. Cahaya Wirama             | 4. Masjid Jami' Al Mukhlisin | 4. Desa Tengenan             |");
    puts("| 5. Pantai Samuh              | 5. Pasar Sibetan             | 5. GKPB Philia               | 5. -                         |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}    
void view_bangli(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                             TEMPAT-TEMPAT WISATA DI KABUPATEN BANGLI                                      |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|          AIR TERJUN          |           SHOPPING           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Air Terjun Tibumana       | 1. Bangli Mesari             | 1. Pura Pingit               | 1. Desa Penglipuran          |");
    puts("| 2. Air Terjun Tegunungan     | 2. Victory Bali              | 2. Pura Penataran Sangging   | 2. Museum Geopark Batur      |");
    puts("| 3. Air Terjun Kuning         | 3. Pande Busana              | 3. Pura Kehen                | 3. Ayodya Oemah Strawberry   |");
    puts("| 4. Air Terjun Pengibul       | 4. Randy Sejahtera           | 4. Pura Ulun Suwi Subak      | 4. Puri Kilian               |");
    puts("| 5. Bangkiang Djaran Waterfall| 5. Kidul Market              | 5. Pura Pengrubugan          | 5. -                         |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}
void view_buleleng_barat(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                          TEMPAT-TEMPAT WISATA DI KABUPATEN BULELENG BARAT                                 |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|            PANTAI            |           SHOPPING           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Pantai Pumeteran          | 1. Hardys                    | 1. GKII Gerogak              | 1. Turtle Hatchery Project   |");
    puts("| 2. Pantai Batu Sungu         | 2. Sanchita Singaraja        | 2. Pura Taman Swasti         | 2. Gran Surya Waterpark      |");
    puts("| 3. Pantai Umeanyar           | 3. Pasar Seririt             | 3. Taman Sari Loka Paksa     | 3. Perkebunan Anggur Rakyat  |");
    puts("| 4. Pantai Tanggu Wisia       | 4. Pasar Banyuatis           | 4. Pura Puseh Bestala        | 4. -                         |");
    puts("| 5. Pantai Gili Putih         | 5. Toko Suda Aditya          | 5. Pura Tepi Siring          | 5. -                         |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}
void view_buleleng_timur(wisata fl)
{
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|                                          TEMPAT-TEMPAT WISATA DI KABUPATEN BULELENG TIMUR                                 |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("|            PANTAI            |           SHOPPING           |            RELIGI            |             EDUKASI          |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
    puts("| 1. Pantai Punjuk Batu        | 1. BREM Singaraja            | 1. Griya Tirta               | 1. Museum Buleleng           |");
    puts("| 2. Hidden Beach Giri Emas    | 2. Marmarshopp_Singaraja     | 2. Pura Sura Lepang          | 2. Museum Gedong Kirtya      |");
    puts("| 3. Pantai Pemaron            | 3. Krisna                    | 3. Pura Lebah Suwug          | 3. Museum Sundal Ketjil      |");
    puts("| 4. Pantai Kerobokan          | 4. Pasar Banyuning           | 4. Seng Hong Bio             | 4. Puri Agung Singaraja      |");
    puts("| 5. Pantai Batu Sugu          | 5. DewaDewi Collection       | 5. Musholla Babusallam       | 5. -                         |");
    puts("+---------------------------------------------------------------------------------------------------------------------------+");
}
//==============================================================//
//nama fungsi   : pilihanan kabupaten                           //
//fungsi        : User menginputkan pilih lihat daftar wisata   //
//                                                              //
//variabel      : fl.kabupaten yang tersimpat di struct wisata  //
//input         : 1 sampai 10                                   //
//output        : daftar wisata atau input pilihan              //
//17-12-2020                                            rev 2.0 //
//luh intan ratna sari dewi-2005551057                          //
//==============================================================//
wisata pilihan_kabupaten(wisata fl)
{
pilihan:
    puts("\n========================================================================================");
    puts("\n||1.badung||\n||2.Denpasar||\n||3.Tabanan||\n||4.Jembrana||\n||5.Klungkung||");
    puts("||6.Gianyar||\n||7.Karangasen||\n||8.Bangli||\n||9.Buleleng bagian barat||\n||10.Buleleng bagian timur||");
    printf("\n Tekan 0 untuk beralih ke menu selanjutnya");
    puts("========================================================================================");
    puts("\nMasukkan kabupaten yang ingin kamu lihat daftar wisatanya   :");
    scanf("%d", &fl.kabupaten);
    switch (fl.kabupaten)
    {
    case 1:
        view_badung(fl);
        goto pilihan;
        break;
    case 2:
        view_denpasar(fl);
        goto pilihan;
        break;
    case 3:
        view_tabanan(fl);
        goto pilihan;
        break;
    case 4:
        view_jembrana(fl);
        goto pilihan;
        break;
    case 5:
        view_klungkung(fl);
        goto pilihan;
        break;
    case 6:
        view_gianyar(fl);
        goto pilihan;
        break;
    case 7:
        view_karangasem(fl);
        goto pilihan;
        break;
    case 8:
        view_bangli(fl);
        goto pilihan;
        break;
    case 9:
        view_buleleng_barat(fl);
        goto pilihan;
        break;
    case 10:
        view_buleleng_timur(fl);
        goto pilihan;
        break;
    default:
        break;
    }
    return fl;
}
//==============================================================//
//nama fungsi   : tampilan pilihan                              //
//fungsi        : User menginputkan pilihan melihat daftar      //
//                 daftar wisata atau menginputkan langsung     //
//variabel      : int kabupaten, char nama kabupaten yang       //
//                 tersimpan di struct wisata                   //
//input         : 1 sampai 10                                   //
//output        : daftar tempat wisata atau input wisata        //
//17-12-2020                                            rev 2.0 //
//luh intan ratna sari dewi-2005551057                          //
//==============================================================//
wisata tampilan_pilihan_kabupaten(wisata fl)
{
    puts("=====================================================================================");
    puts("1.badung\n2.Denpasar\n3.Tabanan\n4.Jembrana\n5.Klungkung");
    puts("6.Gianyar\n7.Karangasen\n8.Bangli\n9.Buleleng bagian barat\n 10.Buleleng bagian timur");
    printf("pilih kabupaten yang pengen kamu kunjungi :");
    scanf("%d", &fl.kabupaten);
    printf("Nama kabupaten yang ingin dikunjungi      :");
    scanf("%s", &fl.kabupaten_nama);
    puts("======================================================================================");
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
    return fl;
}

//==============================================================//
//nama fungsi   : input data                                    //
//fungsi        : untuk menginputkan daftar wisata              //
//variabel      : char pilihan yang tersimpan                   //
//                  distruct program call[]                     //
//input         : nama wisata                                   //
//output        : nama-nama tempat wisata tujuan                //
//17-12-2020                                            rev 2.0 //
//luh intan ratna sari dewi-2005551057                          //
//==============================================================//
program input_data(program call[])
{
    printf("\nBerapa Tempat wisata yang ingin anda kunjungi?");
    printf("\nMasukkan pilihan(maksimal 5)    :");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Masukkan Tujuan Wisata anda ke %i :", i + 1);
        getchar();
        gets(call[i].pilihan);
    }
    return call[i];
}
//==============================================================//
//nama fungsi   : tampilkan                                     //
//fungsi        : Untuk menampilkan output yang ada di          //
//                 fungsi input data                            //
//variabel      : char pilihan yang tersimpan di struct         //
//                 program call[]                               //
//input         : -                                             //
//output        : daftar tujuan wisata                          //
//17-12-2020                                            rev 2.0 //
//luh intan ratna sari dewi-2005551057                          //
//==============================================================//
void tampilkan(program call[50])
{

    printf("Pilihan yang anda masukkan adalah :\n");
    printf("Tujuan\tNama Tempat\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", i + 1);
        printf("\t");
        getchar();
        gets(call[i].pilihan);
    }
}

//==============================================================//
//nama fungsi   : sewa guide                                    //
//fungsi        : input jumlah sewa guide, berapa jam ngebooking//
//                 serta menghitung jumlah biaya sewa           //
//variabel      : int jumlah_guide, int jam_guide, int jumlah_sewa//
//                yang tersimpat di struct wisata               //
//input         : bilangan integer                              //
//output        : biaya sewa guide                              //
//17-12-2020                                            rev 2.0 //
//luh intan ratna sari dewi-2005551057                          //
//==============================================================//
wisata sewa_guide(wisata fl)
{
    puts("\n=======================================");
    printf("\n anda ingin berapa tour guide?    :");
    scanf("%d", &fl.jumlah_guide);
    printf("\n anda ingin berapa jam menyewa ?  :");
    scanf("%d", &fl.jam_guide);
    puts("========================================");

    fl.jumlah_sewa = fl.jumlah_guide * fl.jam_guide * 20000;
    return fl;
}

sewa input_jarak(sewa sw)
{

    printf("\n anda dapat mengecek di google maps dan sesuaikan dengan kendaraan anda");
    printf("\n masukkan perkiraan jarak tempat anda sekarang ke tujuan :");
    scanf("%f", &sw.jarak);
    printf("\n 1.mobil \n2. motor");
    printf("\n Kendaraan yang di pakai      :");
    scanf("%d", &sw.kendaraan);
    if (sw.kendaraan == 1)
    {
        sw.jarak_wisata_mobil = sw.jarak * 2 / 19; //jika memakai mobil
        printf("Anda mengeluarkan bensin sekitar %d liter", sw.jarak_wisata_mobil);
    }
    else if (sw.kendaraan == 2)
    {
        sw.jarak_wisata_motor = sw.jarak * 2 / 37; //jika memakai motor
        printf("Anda mengeluarkan bensin sekitar %d liter", sw.jarak_wisata_motor);
    }
    return sw;
}

void tampilan_cys(wisata fl, program call[], restaurant rs, sewa sw)
{
    printf("sewa mobil %d", sw.jarak_wisata_mobil);
    printf(" swa %d", sw.jarak_wisata_motor);
}
int menu_inputan(wisata fl, program call[], restaurant rs, sewa sw)
{
inputan:
    puts("===========================================================================================================");
    puts("\n1.Input Tempat Wisata(wajib) \n2. Input Tempat Makan(wajib)\n3. Sewa Guide(opsional)");
    puts("4. Input Sewa Mobil(opsional)\n5.Input Jarak Untuk menghitung Bensin(opsional)\n6. Untuk Menampilkan Data");
    printf("\nMasukkan inputan yang anda inginkan :");
    scanf("%d", &pilihan_menu);
    puts("\n===========================================================================================================");

    switch (pilihan_menu)
    {
    case 1:
        input_data(call);
        goto inputan;
        break;
    case 2:
      //  input_tempatmakan(rs, fl, call);
     //   goto inputan;
      //  break;
    case 3:
        sewa_guide(fl);
        goto inputan;
        break;
    case 4:
        //nyewamobil(sw);
       // goto inputan;
        //break;
    case 5:
        input_jarak(sw);
        goto inputan;
        break;
    case 6:
        tampilan_cys(fl, call, rs, sw);
        goto inputan;
        break;
    default:
        break;
    }
}

int menu_cys(wisata fl, program call[], sign_up mhs, restaurant rs, sewa sw, int paket, int bagPag)
{
menu:
    puts("\n=================================");
    puts("==        ==Terima Kasih==       ==");
    puts("==    .:Akun Anda Terdaftar:.    ==");
    puts("==     Silakan Memilih Menu      ==");
    puts("====================================");
    puts("\n\n===============================");
    puts("== Jika anda ingin menginputkan ==\n ||Secara Pribadi, pilih 2 Jika Paket pilih 3||");
    printf("\nMenu\n||1. Daftar Tempat Wisata\n||2.memilih kabupaten\n||3.langsung paket");

    printf("Masukkan pilihan anda :");
    scanf("%d", &pilihan_program);
    switch (pilihan_program)
    {

    case 1:
        pilihan_kabupaten(fl); //menuju fungsi untuk melihat daftar tempat wisata
        goto menu;
        break;

    case 2:
        tampilan_pilihan_kabupaten(fl);
        menu_inputan(fl, call, rs, sw);
        goto menu;
        break;

    case 3:
        //pilihPaket();
        goto menu;
        break;
    default:
        goto menu;
        break;
    }
}

//int menu_paket()
//==============================================================//
//nama fungsi   : menu_login                                    //
//fungsi        : User menginputkan nama dan password           //
//                yang telah dibuat di fungsi sign-in           //
//variabel      : string nama, string password                  //
//input         :  nama, password                               //
//output        : nama dan password benar atau tidak            //
//10-12-2020                                            rev 1.0 //
//luh intan ratna sari dewi-2005551057                          //
//==============================================================//
login menu_login(login psw, sign_up mhs, wisata fl, program call[], restaurant rs, sewa sw)
{
pilihan:
    puts("\n Anda harus memasukkan kembali nama dan password untuk vertifikasi");
    printf("\n\nMasukkan nama anda      :");
    getchar();
    gets(psw.nama);
    printf("\n\nmasukkan password       :");
    scanf("%9s", &psw.password);
    if (strcmp(mhs.psw.nama, psw.nama) != 0)
    {
        printf("error, masukkan nama dan password anda dengan benar!!!!");
        goto pilihan;
    }
    else if (strcmp(mhs.psw.password, psw.password) != 0)
    {
        printf("error, masukkan nama dan password anda dengan benar!!!!");
        goto pilihan;
    }
    else
    {
        printf("benar, selamat");
        menu_cys(fl, call, mhs, rs, sw, paket, bagPak);
    }
    return psw;
}

int main()
{
    login psw;
    wisata fl;
    program call[10];
    sign_up mhs;
    restaurant rs;
    sewa sw;
    mhs = masuk_akun(mhs);

    psw = menu_login(psw, mhs, fl, call, rs, sw);
    tampil_login(psw, mhs, fl);
    menu_cys(fl, call, mhs, rs, sw, paket, bagPak);
    menu_inputan(fl, call, rs, sw);

    fl = tampilan_pilihan_kabupaten(fl);
    call[10] = input_data(call);
    fl = input_tempatmakan(rs, fl, call);
    fl = sewa_guide(fl);
   
    sw = input_jarak(sw);
   
    tampilkan(call);
    tampilan_cys(fl, call, rs, sw);
    return 0;
}
