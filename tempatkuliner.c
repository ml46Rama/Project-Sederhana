#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//deklarasi variabel
int pilihan, makan, eat;
int edu, konser, rel, pan, shop;

int kategori (int golongan);
void tempatMakan();
int restaurant (int r);
int warung (int w);

//********************************************************************//
//***********             Fungsi tempatMakan           ***************//
//====================================================================//
// Nama Fungsi: main,int,void                                         //
// Input Argumen : int age, kendaraan, asal, tujuan, pilihan          //
// Output Argumen: int                                                //
// Deskripsi     : Menginput tujuan tempat makan                      //
// Versi : 1.0                                      Rev. 0            //
// Tgl: 07-12-2020                                  Tgl: 07-12-2020   //
// I Gede Carlo Kresnandaka Agastya-2005551053      -                 //
//====================================================================//

int main (void){
  puts    (" \n=============================================================");
  puts    (" \n<<<<<<<<<<<<<<<<<<<<<<<<<<< Kuliner >>>>>>>>>>>>>>>>>>>>>>>>>>");
  puts    ("\n:                    Daftar Kategori Vacation                   :"); //menginput pilihan kategori
  puts    ("\n <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
  puts    ("\n ==============================================================");
  puts    (" Silahkan Pilih daftar Kategori                                ");
  puts    (" Ketik 1  untuk Kategori Edukasi                               ");
  puts    (" Ketik 2  untuk Kategori Konservasi                            ");
  puts    (" Ketik 3  untuk kategori Religi                                ");
  puts    (" Ketik 4  untuk kategori Pantai                                ");
  puts    (" Ketik 5  untuk kategori Shopping                              ");
  printf  ("Ketikkan pilihan kategori: ");
  scanf   ("%d",&pilihan);

  kategori(pilihan);
  tempatMakan();
  return 0;
  }

//menentukan tempat - tempat wisata
int kategori(int golongan){
  switch (pilihan) {
    case 1: puts (" ==================================== ");
            puts ("            KATEGORI EDUKASI          ");
            puts (" ==================================== ");
            puts (" 1. Monumen Bajra Sandhi, Denpasar    ");
            puts (" 2. Taman Kertha Gosa, Klungkung      ");
            puts (" 3. Museum Geopark Batur, Bangli      ");
            printf("Ketikkan pilihan anda: ");
            scanf("%d",&edu);
            break;

    case 2: puts (" ===================================== ");
            puts ("          KATEGORI KONSERVASI          ");
            puts (" ===================================== ");
            puts (" 1. Taman Nasional Bali Barat, Jembrana");
            puts (" 2. Kebun Raya Bedugul, Tabanan        ");
            puts (" 3. Bali Bird Park, Gianyar            ");
            printf("Ketikkan pilihan anda: ");
            scanf("%d",&konser);
            break;

    case 3: puts (" ===================================== ");
            puts ("            KATEGORI RELIGI            ");
            puts (" ===================================== ");
            puts (" 1. Pura Tirta Empul, Gianyar          ");
            puts (" 2. Pura Tanah Lot, Tabanan            ");
            puts (" 3. Puja Mandala, Badung               ");
            printf("Ketikkan pilihan anda: ");
            scanf("%d",&rel);
            break;

    case 4: puts (" ===================================== ");
            puts ("            KATEGORI PANTAI            ");
            puts (" ===================================== ");
            puts (" 1. Pantai Kuta, Badung                ");
            puts (" 2. Pantai Lovina, Buleleng            ");
            puts (" 3. Pantai Sanur, Denpasar             ");
            printf("Ketikkan pilihan anda: ");
            scanf("%d",&pan);
            break;

    case 5: puts (" ===================================== ");
            puts ("           KATEGORI SHOPPING           ");
            puts (" ===================================== ");
            puts (" 1. Mall Bali Galeria, Badung          ");
            puts (" 2. Pasar Seni Sukawati, Gianyar       ");
            puts (" 3. Pasar Kumbasari, Denpasar          ");
            printf("Ketikkan pilihan anda: ");
            scanf("%d",&shop);

    default: printf("Tidak ada pilihan\n");
             printf("Silahkan mengulang\n\n" );
             break;
        }
  return pilihan;
}

//menginput membawa bekal atau tidak
void tempatMakan(){
int ask;
printf("\nApakah anda membawa bekal pribadi?");
printf("\n0(NO) | 1(YES)");
printf("\nMasukkan pilihan anda : ");
scanf("%d", &ask);
  switch(ask){
  case 0:
          printf("Dimana anda mau makan?");
          printf("\n1. Warung \n2. Restoran");
          printf("\nMasukkan pilihan anda : ");
          scanf("%d", &eat);
              switch (eat){
              case 1: warung(eat);
                  break;
              case 2: restaurant(eat);
                  break;
              default:
                  break;
              }
          break;
      case 1:
          return 0;
          break;
      default:
           break;
  }
}

//menentukan tempat makan disebuah restoran terdekat dari tujuan wisata yang telah dipilih
int restaurant (int r){
int makan = r;
if(edu==1 && eat==2){
  puts (" ==================================== ");
  puts ("         Monumen Bajra Sandhi         ");
  puts (" ==================================== ");
  puts (" 1. Goemerot Restaurant               ");
  puts (" 2. Ikan Bakar Cianjur                ");
  printf("Ketikkan pilihan anda: ");
  scanf("%d",&makan);
}
else
if(edu==2 && eat==2){
 puts (" ===================================== ");
 puts ("           Taman Kertha Gosa           ");
 puts (" ===================================== ");
 puts (" 1. Restaurant Padang                  ");
 puts (" 2. My Pizza                           ");
 printf("Ketikkan pilihan anda: " );
 scanf("%d",&makan );
}
else
if(edu==3 && eat==2){
puts (" ====================================== ");
puts ("          Museum Geopark Batur          ");
puts (" ====================================== ");
puts (" 1. Lakeview Restaurant                 ");
puts (" 2. The Look Out Resto and Bar          ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(konser==1 && eat==2){
puts (" ====================================== ");
puts ("        Taman Nasional Bali Barat       ");
puts (" ====================================== ");
puts (" 1. The Octagon Ocean Club              ");
puts (" 2. Bali Tower Bistro                   ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(konser==2 && eat==2){
puts (" ====================================== ");
puts ("           Kebun Raya Bedugul           ");
puts (" ====================================== ");
puts (" 1. As Siddiq Restaurant                ");
puts (" 2. Mentari Restaurant                  ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(konser==3 && eat==2){
puts (" ====================================== ");
puts ("             Bali Bird Park             ");
puts (" ====================================== ");
puts (" 1. Bali Starling Restaurant            ");
puts (" 2. The Samani Restaurant               ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(rel==1 && eat==2){
puts (" ====================================== ");
puts ("            Pura Tirta Empul            ");
puts (" ====================================== ");
puts (" 1. Pangkon Bali Resto                  ");
puts (" 2. Labak Sari Restaurant               ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(rel==2 && eat==2){
puts (" ====================================== ");
puts ("             Pura Tanah Lot             ");
puts (" ====================================== ");
puts (" 1. Dewi Sinta Restaurant               ");
puts (" 2. Natys Restaurant                    ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(rel==3 && eat==2){
puts (" ====================================== ");
puts ("               Puja Mandala             ");
puts (" ====================================== ");
puts (" 1. Bumbu Bali                          ");
puts (" 2. Ulam                                ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(pan==1 && eat==2){
puts (" ====================================== ");
puts ("              Pantai Kuta               ");
puts (" ====================================== ");
puts (" 1. Pantai Restaurant                   ");
puts (" 2. Samudera Resto                      ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(pan==2 && eat==2){
puts (" ====================================== ");
puts ("              Pantai Lovina             ");
puts (" ====================================== ");
puts (" 1. Kakatua Restaurant                  ");
puts (" 2. Bali Bintang                        ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(pan==3 && eat==2){
puts (" ====================================== ");
puts ("              Pantai Sanur              ");
puts (" ====================================== ");
puts (" 1. Lidah Local                         ");
puts (" 2. Lilla Pantai                        ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(shop==1 && eat==2){
puts (" ====================================== ");
puts ("           Mall Bali Galeria            ");
puts (" ====================================== ");
puts (" 1. Bibimbap                            ");
puts (" 2. Bakso Boedjangan                    ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(shop==2 && eat==2){
puts (" ====================================== ");
puts ("           Pasar Seni Sukawati          ");
puts (" ====================================== ");
puts (" 1. Rumah Makan Sederhana Masakan Padang");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(shop==3 && eat==2){
puts (" ====================================== ");
puts ("             Pasar Kumbasari            ");
puts (" ====================================== ");
puts (" 1. International Hongkong Restaurant   ");
puts (" 2. Dapoer Pemuda                       ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
printf("oke");
}

//menentukan tempat makan disebuah warung terdekat dari tujuan wisata yang telah dipilih
int warung (int w){
int makan = w;
if(edu==1 && eat==1){
puts (" ==================================== ");
puts ("         Monumen Bajra Sandhi         ");
puts (" ==================================== ");
puts (" 1. Bakso Supra Dinasty               ");
puts (" 2. Sate Plecing Mak Lukluk           ");
printf("Ketikkan pilihan anda: ");
scanf("%d",&makan);
}
else
if(edu==2 && eat==1){
puts (" ===================================== ");
puts ("           Taman Kertha Gosa           ");
puts (" ===================================== ");
puts (" 1. Warung Nini Jawi                   ");
puts (" 2. Lalapan Bu Dewa                    ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(edu==3 && eat==1){
puts (" ====================================== ");
puts ("          Museum Geopark Batur          ");
puts (" ====================================== ");
puts (" 1. Warung Makan Jowet                  ");
puts (" 2. Rumah Makan Munduk Sari             ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(konser==1 && eat==1){
puts (" ====================================== ");
puts ("        Taman Nasional Bali Barat       ");
puts (" ====================================== ");
puts (" 1. Nasi Bu Jero                        ");
puts (" 2. Ikan Bakar Bu Peni                  ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(konser==2 && eat==1){
puts (" ====================================== ");
puts ("           Kebun Raya Bedugul           ");
puts (" ====================================== ");
puts (" 1. Maaf Tidak Ada Warung               ");
printf("Silahkan Pilih Yang Lain" );
}
else
if(konser==3 && eat==1){
puts (" ====================================== ");
puts ("             Bali Bird Park             ");
puts (" ====================================== ");
puts (" 1. Warung Bali Sukla                   ");
puts (" 2. Nasi Bali Pak Gusti                 ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(rel==1 && eat==1){
puts (" ====================================== ");
puts ("            Pura Tirta Empul            ");
puts (" ====================================== ");
puts (" 1. Ayam Geprek Batan Wani              ");
puts (" 2. Warung Makan Sri Rahayu             ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(rel==2 && eat==1){
puts (" ====================================== ");
puts ("             Pura Tanah Lot             ");
puts (" ====================================== ");
puts (" 1. Warung Muslim Masakan Padang        ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(rel==3 && eat==1){
puts (" ====================================== ");
puts ("               Puja Mandala             ");
puts (" ====================================== ");
puts (" 1. Penyet Ndeso                        ");
puts (" 2. Warung Rakyat                       ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(pan==1 && eat==1){
puts (" ====================================== ");
puts ("              Pantai Kuta               ");
puts (" ====================================== ");
puts (" 1. Warunk Cuci Mata                    ");
puts (" 2. Bakso Pantai Kuta                   ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(pan==2 && eat==1){
puts (" ====================================== ");
puts ("              Pantai Lovina             ");
puts (" ====================================== ");
puts (" 1. Warung Ayu Lovina                   ");
puts (" 2. Warung Lina                         ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(pan==3 && eat==1){
puts (" ====================================== ");
puts ("              Pantai Sanur              ");
puts (" ====================================== ");
puts (" 1. Odah Oning                          ");
puts (" 2. Warung Jawa Moro Seneng             ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(shop==1 && eat==1){
puts (" ====================================== ");
puts ("           Mall Bali Galeria            ");
puts (" ====================================== ");
puts (" 1. Angkringan Asia 77                  ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(shop==2 && eat==1){
puts (" ====================================== ");
puts ("           Pasar Seni Sukawati          ");
puts (" ====================================== ");
puts (" 1. Nasi Tahu Sukawati                  ");
puts (" 2. Babi Guling Sukawati                ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
else
if(shop==3 && eat==1){
puts (" ====================================== ");
puts ("             Pasar Kumbasari            ");
puts (" ====================================== ");
puts (" 1. Warung Kita Kuliner                 ");
puts (" 2. Soto Ayam Cak Di                    ");
printf("Ketikkan pilihan anda: " );
scanf("%d",&makan );
}
printf("oke");
}
