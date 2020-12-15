#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//********************************************************************//
//**************             Fungsi main               ***************//
//====================================================================//
// Nama Fungsi: main                                                  //
// Input Argumen : int main                                           //
// Output Argumen: -                                                  //
// Deskripsi     : menampilkan keseluruhan fungsi yang digunakan      //
// Versi : 1.0                                      Rev. 0            //
// Tgl: 15-12-2020                                  Tgl: 15-12-2020   //
// I Gede Carlo Kresnandaka Agastya-2005551053      -                 //
//====================================================================//

//ini adalah fungsi main
int main(){
//nama struck untuk memanggil setiap pilihan
feeling fl;
    program call[10];
    sewa sw;
    fl = pilihan_string(fl);          //fungsi untuk memanggil paket atau pribadi
    fl = tampilan_feeling(fl);        //fungsi untuk menampilkan pilihan
    fl = pilihan_kabupaten(fl, call); //fungsi untuk memilih kabupaten
    fl = input_call(fl, call);        //fungsi untuk memilih tempat wisata
    fl = input_tempatmakan(fl, call); //fungsi untuk memilih tempat makan
    call[10] = input_data(call);      //array pilihan dari tempat wisata
    tampilkan(call);                  //tampilan semua tempat wisata yang dipilih
    sw=nyewamobil(sw);                //fungsi memilih ingin menyewa mobil
    sw=pilihansewa(sw);               //fungsi memilih mobil
    sw=jamsewa1(sw);                  //fungsi menghitung harga sewa sesuai jam
    sw=jamsewa2(sw);                  //fungsi menghitung harga sewa sesuai jam
    sw=jamsewa3(sw);                  //fungsi menghitung harga sewa sesuai jam

    return 0;
  }
