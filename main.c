#include <stdio.h>
#include <stdlib.h>

//deklarasi variabel
int age,kendaraan;
char nama[100];
int asal, tujuan, pilihan;

//fungsi main

//********************************************************************//
//***********                Fungsi Main               ***************//
//====================================================================//
// Nama Fungsi: main                                                  //
// Input Argumen : int age, kendaraan, asal, tujuan, pilihan          //
// Output Argumen: int  main                                          //
// Deskripsi     : Menginput data diri, kendaraan, bensin, kategori   //
// Versi : 1.0                                      Rev. 0            //
// Tgl: 01-12-2020                                  Tgl: 01-12-2020   //
// I Gede Carlo Kresnandaka Agastya-2005551053      -                 //
//====================================================================//
int main()
{
    puts (" ============================== ");
    puts (":           Data Diri          :");  //mengisi data diri
    puts (" ============================== ");
    printf("Input Nama: ");
    scanf("%[^\n]s", nama );
    printf("Input Umur: ");
    scanf("%d", &age);

    puts    ("1.mobil");
    puts    ("2.motor");
    printf  ("\n jenis kendaraan yang dipakai   :");
    scanf   ("%d", &kendaraan);

    puts("Masukkan jenis bensin yang anda gunakan   :");
    puts ("1. PERTALITE ");
    puts ("2. PERTAMAX");
    scanf("%d", &pilihan);


    puts    ("\n==================================================");
    puts    ("\n=======pilih di kecamatan mana kamu berada========");
    puts    ("\n=================================================");   //input asal kecamatan
    puts    ("\n<<<<<<<<<<Input Hanya bisa dilakukan<<<<<<<<<<<<<<");
    puts    ("\njika berada di Kabupaten Badung dan Kota Denpasar");
    printf  ("Input Asal: ");
    puts    ("\n1.Abiansemal");
    puts    ("2.Kuta");
    puts    ("3.Kuta Utara");
    puts    ("4.Kuta Selatan");
    puts    ("5.Mengwi");
    puts    ("6.Petang");
    puts    ("7.Denpasar Utara");
    puts    ("8.Denpasar Barat");
    puts    ("9.Denpasar Selatan");
    puts    ("10.Denpasar Timur");
    scanf   ("%d",&asal);

    printf("\nHallo!!  silahkan memilih kategori ya!");

    puts    (" \n=============================================================");
    puts    (" \n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    puts    ("\n:                    Daftar Kategori Vacation                :");  //memilih kategori yang diinginkan
    puts    ("\n <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    puts    ("\n ==============================================================");
    puts    (" Silahkan Pilih daftar Kategori                                ");
    puts    (" Ketik 1  untuk Kategori Edukasi                               ");
    puts    (" Ketik 2  untuk Kategori Konservasi                            ");
    puts    (" Ketik 3  untuk kategori Religi                                ");
    puts    (" Ketik 4  untuk kategori Pantai                                ");
    puts    (" Ketik 5  untuk kategori Shopping                              ");
    printf  ("Ketikkan pilihan kategori: ");
    scanf   ("%d",&tujuan);

return 0;
}
