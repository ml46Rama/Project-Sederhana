#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//deklarasi variabel
int makan,kabupaten,pilihan;

int tempatMakan();

//********************************************************************//
//***********             Fungsi tempatMakan           ***************//
//====================================================================//
// Nama Fungsi: main,int                                              //
// Input Argumen : int pilihan, tempatmakan                           //
// Output Argumen: int                                                //
// Deskripsi     : Menginput kabupaten dan tempat makan               //
// Versi : 1.0                                      Rev. 1            //
// Tgl: 07-12-2020                                  Tgl: 15-12-2020   //
// I Gede Carlo Kresnandaka Agastya-2005551053      -                 //
//====================================================================//

int main(){
  puts    (" \n============================================================");
  puts    (" \n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
  puts    ("\n:                      Daftar Kabupaten                     :"); //menginput pilihan kabupaten
  puts    ("\n <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
  puts    ("\n ============================================================");
  puts    (" Silahkan Pilih daftar Kabupaten                               ");
  puts    (" Ketik 1  untuk Kabupaten Badung                               ");
  puts    (" Ketik 2  untuk Kabupaten Denpasar                             ");
  puts    (" Ketik 3  untuk Kabupaten Gianyar                              ");
  puts    (" Ketik 4  untuk Kabupaten Klungkung                            ");
  puts    (" Ketik 5  untuk Kabupaten Bangli                               ");
  puts    (" Ketik 6  untuk Kabupaten Jembrana                             ");
  puts    (" Ketik 7  untuk Kabupaten Karangasem                           ");
  puts    (" Ketik 8  untuk Kabupaten Tabanan                              ");
  puts    (" Ketik 9  untuk Kabupaten Buleleng Barat                       ");
  puts    (" Ketik 10 untuk Kabupaten Buleleng Timur                       ");
  printf  ("Ketikkan pilihan kategori: ");
  scanf   ("%d",&kabupaten);

  tempatMakan();
  return 0;
}

//menginput tempat makan 
int tempatMakan(){
  if(kabupaten==1){
    puts (" ==================================== ");
    puts ("                Badung                ");
    puts (" ==================================== ");
    puts (" 1. D'Cost                            ");
    puts (" 2. Plengkung                         ");
    puts (" 3. Warung Kampung                    ");
    puts (" 4. Warung Sate Tacik Lukluk          ");
    printf("Ketikkan pilihan anda: ");
    scanf("%d",&makan);
  }
  else
  if(kabupaten==2){
   puts (" ===================================== ");
   puts ("               Denpasar                ");
   puts (" ===================================== ");
   puts (" 1. Goemerot                           ");
   puts (" 2. Warung Wardani                     ");
   puts (" 3. Jebak Bali Kuliner                 ");
   puts (" 4. Sate Plecing Arjuna                ");
   printf("Ketikkan pilihan anda: " );
   scanf("%d",&makan );
  }
  else
  if(kabupaten==3){
  puts (" ====================================== ");
  puts ("                 Gianyar                ");
  puts (" ====================================== ");
  puts (" 1. The Jungle Resto                    ");
  puts (" 2. Genius Cafe                         ");
  puts (" 3. Dharma Giri Restaurant              ");
  puts (" 4. Ngerodok Resto                      ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  }
  else
  if(kabupaten==4){
  puts (" ====================================== ");
  puts ("                Klungkung               ");
  puts (" ====================================== ");
  puts (" 1. Warung Bung Tomo                    ");
  puts (" 2. Merta Sari Restaurant               ");
  puts (" 3. Papilas Coffee And Roastery         ");
  puts (" 4. Warung Jumpu                        ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  }
  else
  if(kabupaten==5){
  puts (" ====================================== ");
  puts ("                 Bangli                 ");
  puts (" ====================================== ");
  puts (" 1. The Amora Bali                      ");
  puts (" 2. Warung Abang Sari                   ");
  puts (" 3. Warung Makan Midori                 ");
  puts (" 4. Nasi Kajeng                         ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  }
  else
  if(kabupaten==6){
  puts (" ====================================== ");
  puts ("                Jembrana                ");
  puts (" ====================================== ");
  puts (" 1. Rumah Makan Tegal Dadong            ");
  puts (" 2. Warung Jegeg Bagus                  ");
  puts (" 3. Kedai Jukung                        ");
  puts (" 4. Waru Kedai Steak                    ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  }
  else
  if(kabupaten==7){
  puts (" ====================================== ");
  puts ("               Karangasem               ");
  puts (" ====================================== ");
  puts (" 1. Bali Asli Restaurant                ");
  puts (" 2. Pondok Mina                         ");
  puts (" 3. Warung Biker                        ");
  puts (" 4. Warung Padang Kecag                 ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  }
  else
  if(kabupaten==8){
  puts (" ====================================== ");
  puts ("                Tabanan                 ");
  puts (" ====================================== ");
  puts (" 1. Warung Tanpa Nama                   ");
  puts (" 2. Warung Makan Dukuh                  ");
  puts (" 3. Danke                               ");
  puts (" 4. Paon Mak Mo                         ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  }
  else
  if(kabupaten==9){
  puts (" ====================================== ");
  puts ("             Buleleng Barat             ");
  puts (" ====================================== ");
  puts (" 1. Tanjung Alam                        ");
  puts (" 2. Terrasse du Lac Tamblingan Sari     ");
  puts (" 3. Warung Bik Juk                      ");
  puts (" 4. Blayag Buleleng                     ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  }
  else
  if(kabupaten==10){
  puts (" ====================================== ");
  puts ("             Buleleng Timur             ");
  puts (" ====================================== ");
  puts (" 1. Rumah Makan Manalagi 2              ");
  puts (" 2. RM Wina Segara                      ");
  puts (" 3. Warung Jegeg                        ");
  puts (" 4. Paon Ummi Singaraja                 ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  }
  printf("oke");
  }

