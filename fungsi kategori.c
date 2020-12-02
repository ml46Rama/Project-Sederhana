#include <stdio.h>
#include <stdlib.h>

//deklarasi variabel
int tujuan, edu, konser, rel, pan, shop;

//deklarasi fungsi
void kategori();

//fungsi
void kategori(){
        switch(tujuan){ //memanggil variabel tujuan sesuai input user yang telah tersimpan dalam fungsi main
          case 1: /* apabila user input tujuan = 1, maka case 1 akan tereksekusi */
                  puts(" +---------------------------------------------+");
                  puts(" |               KATEGORI EDUKASI              |");
                  puts(" +---------------------------------------------+");
                  puts(" |   1. Monumen Bajra Sandhi, Denpasar         |");
                  puts(" |   2. Taman Kertha Gosa, Klungkung           |");
                  puts(" |   3. Museum Geopark Batur, Bangli           |");
                  puts(" +---------------------------------------------+");
                  printf("Ketikkan pilihan anda: ");
                  scanf("%d",&edu); //menyimpan data kategori edukasi sesuai input user
                  break;

          case 2: /* apabila user input tujuan = 2, maka case 2 akan tereksekusi */
                  puts(" +---------------------------------------------+");
                  puts(" |             KATEGORI KONSERVASI             |");
                  puts(" +---------------------------------------------+");
                  puts(" |   1. Taman Nasional Bali Barat, Jembrana    |");
                  puts(" |   2. Kebun Raya Bedugul, Tabanan            |");
                  puts(" |   3. Bali Bird Park, Gianyar                |");
                  puts(" +---------------------------------------------+");
                  printf("Ketikkan pilihan anda: ");
                  scanf("%d",&konser); //menyimpan data kategori konservasi sesuai input user
                  break;

          case 3: /* apabila user input tujuan = 3, maka case 3 akan tereksekusi */
                  puts(" +---------------------------------------------+");
                  puts(" |               KATEGORI RELIGI               |");
                  puts(" +---------------------------------------------+");
                  puts(" |   1. Pura Tirta Empul, Gianyar              |");
                  puts(" |   2. Pura Tanah Lot, Tabanan                |");
                  puts(" |   3. Puja Mandala, Badung                   |");
                  puts(" +---------------------------------------------+");
                  printf("Ketikkan pilihan anda: ");
                  scanf("%d",&rel); //menyimpan data kategori religi sesuai input user
                  break;

          case 4: /* apabila user input tujuan = 4, maka case 4 akan tereksekusi */
                  puts(" +---------------------------------------------+");
                  puts(" |               KATEGORI PANTAI               |");
                  puts(" +---------------------------------------------+");
                  puts(" |   1. Pantai Kuta, Badung                    |");
                  puts(" |   2. Pantai Lovina, Buleleng                |");
                  puts(" |   3. Pantai Sanur, Denpasar                 |");
                  puts(" +---------------------------------------------+");
                  printf("Ketikkan pilihan anda: ");
                  scanf("%d",&pan); //menyimpan data kategori pantai sesuai input user
                  break;

          case 5: /* apabila user input tujuan = 5, maka case 5 akan tereksekusi */
                  puts(" +---------------------------------------------+");
                  puts(" |              KATEGORI SHOPPING              |");
                  puts(" +---------------------------------------------+");
                  puts(" |   1. Mall Bali Galeria, Badung              |");
                  puts(" |   2. Pasar Seni Sukawati, Gianyar           |");
                  puts(" |   3. Pasar Kumbasari, Denpasar              |");
                  puts(" +---------------------------------------------+");
                  printf("Ketikkan pilihan anda: ");
                  scanf("%d",&shop); //menyimpan data kategori shopping sesuai input user
                  break;

          default: /* apabila user input tujuan diluar angka 1-5, maka default akan tereksekusi */
                   printf("Tidak ada pilihan\n");
                   printf("Silahkan mengulang\n\n");
                   break;
        }
}
