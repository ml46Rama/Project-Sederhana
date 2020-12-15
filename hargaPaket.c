#include <stdio.h>
#include <stdlib.h>

//deklarasi variabel
int paket, bagPak;

//deklarasi fungsi
int hargaPaket();

//fungsi harga paket
int hargaPaket(){
    if(paket==1 && bagPak==1) //Paket Kabupaten Badung
        return 200000;
    else if(paket==1 && bagPak==2) //Paket Kota Denpasar
        return 200000;
    else if(paket==1 && bagPak==3) //Paket Kabupaten Gianyar
        return 200000;
    else if(paket==1 && bagPak==4) //Paket Kabupaten Klungkung
        return 200000;
    else if(paket==1 && bagPak==5) //Paket Kabupaten Bangli
        return 200000;
    else if(paket==1 && bagPak==6) //Paket Kabupaten Jembrana
        return 200000;
    else if(paket==1 && bagPak==7) //Paket Kabupaten Karangasem
        return 200000;
    else if(paket==1 && bagPak==8) //Paket Kabupaten Tabanan
        return 200000;
    else if(paket==1 && bagPak==9) //Paket Kabupaten Buleleng Barat
        return 200000;
    else if(paket==1 && bagPak==10) //Paket Kabupaten Buleleng Timur
        return 200000;
    else if(paket==2 && bagPak==1) //Paket Edukasi
        return 200000;
    else if(paket==2 && bagPak==2) //Paket Konservasi
        return 300000;
    else if(paket==2 && bagPak==3) //Paket Religi
        return 150000;
    else if(paket==2 && bagPak==4) //Paket Pantai
        return 400000;
    else if(paket==2 && bagPak==5) //Paket Shopping
        return 100000;
    else //Jika input user tidak sesuai, else akan tereksekusi
        printf("Kode yang anda input salah!");
}
