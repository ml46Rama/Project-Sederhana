#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

#define MOBIL1 50000       //harga sewa untuk mobil isi 5 orang
#define MOBIL2 70000       //harga sewa untuk bis Mini isi 15 orang
#define MOBIL3 100000      //harga sewa untuk bis besar isi 35 orang
#define K_MOBIL 19         //pembagi liter untuk mobil
#define K_MOTOR 37         //pembagi liter untuk motor
#define PERTALITE 7650     //harga pertalite
#define PERTAMAX 9000      //harga pertamax
#define KONS 2             //untuk menghitung jarak pulang pergi
#define MAXLEN 100         //untuk menginput banyak karakter yang bisa diinput saat menginputkan tempat wisata
#define MAXLINES 5000      //untuk menginput banyak line

typedef char string[50];   //agar semua fungsi char dapat dipanggil melalui kata string
int umur;                  //untuk menginput umur
int i;                     //untuk digunakan di array pasa saat input tujuan int
int pilihan_program;       //digunakan untuk menginput pilihan di menu pertama
int pilihan_menu;          //digunakan untuk menginput pilihan di menu kedua
int N;                     //untuk menerima inputan batas tempat int yang dari user
int paket, bagPak;         //digunakan difungsi paket untuk menginputkan paket int yang dipilih
int kabupaten;             //untuk memilih kabupaten berdasarkan kode
char kabupaten_nama[50];   //untuk mengimputkan nama dari kabupaten
int input_tour_guide;      //untuk menginput ingin menyewa guide
int jumlah_guide;          //untuk menginput jumlah guide yang ingin disewa
int jam_guide;             //untuk menginput jam sewa guide
int jumlah_int;            //untuk menyimpan data hasil perhitungan pada fitur guide
int makan;                 //untuk input tempat makan
int harga;                 //untuk menampilkan harga
int pilihmobil;            //untuk menyimpan data mobil pilihan user
int jam;                   //untuk menyimpan data lama menyewa mobil
int hargaint;              //untuk menyimpan data hasil perhitungan pada fitur sewa mobil
int jarak;                 //input jarak user dari tempat int
int kendaraan;             //input kendaraan yang digunakan user
int a;                     //variabel untuk mewakili apakah user ingin meginap
int b;                     //mewakili user memilih jenis tempat penginapan
int c;                     //mewakili user jika menginputkan berapa banyak org yang akan menginap
int lama;                  //untuk menanyakan berapa lama user menginap
int harga_penginapan;      //jumlah harga total
int bbm;                   //untuk menyimpan data kode bahan bakar kendaraan user
int bensin;                //untuk menyimpan data hasil perhitungan pada fitur jarak dan bensin
char *n[MAXLINES];         //pointer untuk input tempat wisata agar dapat ditampilkan
int hp;                    //untuk menyimpan data pada harga paket
int askPaket;              //untuk bertanya di fitur pilih paket
int o;                     //untuk menyimpan data banyak orang yang dibelikan tiket masuk
int sum = 0;               //untuk menjumlahkan semua harga tiket masuk yang telah di input pada looping
int looping[100];          //untuk menyimpan nilai dari inputan harga tiket masuk
int v;                     //variabel pada looping proses menu
int sumtot;                //untuk menyimpan data hasil perhitungan pada fitur tiket masuk
COORD coord = {0, 0};      //struct untuk menentukan koordinat

typedef struct
{

    string nama;
    string password;
    string nama1;
    string password1;

} sign_up;

//prototype function
void tunda(int det);
void clean();
void setwarna(unsigned short warna);
void proses();
sign_up masuk_akun(sign_up mhs);
sign_up menu_login(sign_up mhs);
int menu_cys(sign_up mhs);
int menu_inputan(sign_up mhs);
int pilihan_kabupaten();
void tampilan_pilihan_kabupaten();
void view_badung();
void view_denpasar();
void view_tabanan();
void view_jembrana();
void view_klungkung();
void view_gianyar();
void view_karangasem();
void view_bangli();
void view_buleleng_barat();
void view_buleleng_timur();
void pilihPaket(sign_up mhs);
int hargaPaket();
int input_data();
void input_tempatmakan();
int int_guide(int jumlah_guide, int jam_guide);
int pilihanint();
int input_jarak(int jarak, int kendaraan, int bensin);
int input_mobil(int jarak, int p);
int input_motor(int jarak, int p);
int hasil_bensin(int p);
void tampilkan();
void fungsi_hotel();
int jenis_hotel();
int fungsi_homestay(int harga_penginapan, int lama);
int fungsi_bintang3(int harga_penginapan, int lama);
int fungsi_bintang5(int harga_penginapan, int lama);
int fungsi_villa(int harga_penginapan, int lama);
int tampilkan_data(sign_up mhs);
int jaraknya();
int writeKuitansi(sign_up mhs);
int writeKuitansiPaket(sign_up mhs);
void proses();
void proses_menu();
void clean();
void point(int x, int y);
int tiket_masuk();
void looping_tiket();
void penutup();

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

void point(int x, int y)      //untuk memposisikan program ditengah-tengah
{
    //COORD adalah sebuah struct yang berisikan dua variabel bertipe SHORT, yaitu X dan Y.
    coord.X = x;
    coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tunda(int det)
{
    Sleep(det);               //fungsi sleep adalah fungsi yang digunakan untuk menghentikan sementara kerja program kita, bisa juga dibilang “pause”.
}

void clean()                  //untuk membersihkan fitur sebelumnya
{
    system("cls");
}

void setwarna(unsigned short warna)   //untuk memberi warna background dan warna teks
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, warna);
}

void proses()
{
    point(48, 15);
    for (int i = 1; i <= 35; i++)
    {
        setwarna(249);
        printf("%c", 223);
        Sleep(60);
    }
}

void proses_menu()      //untuk menampilkan sebuah kata sebelum menuju fitur selanjutnya
{
    char menu_1[50] = ">>>>>PLEASE WAIT<<<<<";
    point(72, 14);
    for (v = 0; v < 30; v++)
    {
        Sleep(50);
        printf("%c", menu_1[v]);
    }
    clean();
}
void penutup() //menampilkan kata - kata penutup dari program choose your vacation
{
    char menu_2[50] = ">>TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI<<";
    char menu_3[50] = ">>SILAKAN MENGECEK KWITANSI DALAM BENTUK .TXT<<";
    char menu_4[50] = ">>>>>>>>>>>>>>>SELAMAT BERLIBUR<<<<<<<<<<<<<<<<";

    point(65, 14);
    for (i = 0; i < 50; i++) //looping menu_2
    {
        Sleep(50);
        printf("%c", menu_2[i]);
    }
    point(65, 16);
    for (i = 0; i < 50; i++) //looping menu_3
    {
        Sleep(50);
        printf("%c", menu_3[i]);
    }
    point(65, 18);
    for (i = 0; i < 50; i++) //looping menu_4
    {
        Sleep(50);
        printf("%c", menu_4[i]);
    }
    clean();
}
