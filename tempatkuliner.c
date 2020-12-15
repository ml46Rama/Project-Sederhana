#include <stdio.h>


//deklarasi varabel
int makan,kabupaten,pilihan;
float harga;

//deklarasi fungsi
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
  puts    ("\n:                      Daftar Kabupaten                     :"); //menginput pilihan Kabupaten
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

//menginputkan tempat makan
int tempatMakan(){
  if(kabupaten==1){
    puts (" ==================================== ");
    puts ("                Badung                ");
    puts (" ==================================== ");
    puts (" <Nama Restoran>               < Harga >  ");
    puts (" 1. D'Cost                    Rp. 60.000  ");
    puts (" 2. Plengkung                 Rp. 100.000 ");
    puts (" 3. Warung Kampung            Rp. 50.000  ");
    puts (" 4. Warung Sate Tacik Lukluk  Rp. 75.000  ");
    printf("Ketikkan pilihan anda: ");
    scanf("%d",&makan);
    printf("Ketikkan harga yang dipilih : ");
    scanf("%f",&harga);
  }
  else
  if(kabupaten==2){
   puts (" ===================================== ");
   puts ("               Denpasar                ");
   puts (" ===================================== ");
   puts (" <Nama Restoran>               < Harga >  ");
   puts (" 1. Goemerot                  Rp. 75.000  ");
   puts (" 2. Warung Wardani            Rp. 30.000  ");
   puts (" 3. Jebak Bali Kuliner        Rp. 75.000  ");
   puts (" 4. Sate Plecing Arjuna       Rp. 35.000  ");
   printf("Ketikkan pilihan anda: " );
   scanf("%d",&makan );
   printf("Ketikkan harga yang dipilih : ");
   scanf("%f",&harga);
  }
  else
  if(kabupaten==3){
  puts (" ====================================== ");
  puts ("                 Gianyar                ");
  puts (" ====================================== ");
  puts (" <Nama Restoran>               < Harga >  ");
  puts (" 1. The Jungle Resto          Rp. 75.000  ");
  puts (" 2. Genius Cafe               Rp. 100.000 ");
  puts (" 3. Dharma Giri Restaurant    Rp. 50.000  ");
  puts (" 4. Ngerodok Resto            Rp. 50.000  ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  printf("Ketikkan harga yang dipilih : ");
  scanf("%f",&harga);
  }
  else
  if(kabupaten==4){
  puts (" ====================================== ");
  puts ("                Klungkung               ");
  puts (" ====================================== ");
  puts (" <Nama Restoran>                  < Harga >  ");
  puts (" 1. Warung Bung Tomo             Rp. 50.000  ");
  puts (" 2. Merta Sari Restaurant        Rp. 100.000 ");
  puts (" 3. Papilas Coffee And Roastery  Rp. 50.000  ");
  puts (" 4. Warung Jumpu                 Rp. 50.000  ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  printf("Ketikkan harga yang dipilih : ");
  scanf("%f",&harga);
  }
  else
  if(kabupaten==5){
  puts (" ====================================== ");
  puts ("                 Bangli                 ");
  puts (" ====================================== ");
  puts (" <Nama Restoran>               < Harga >  ");
  puts (" 1. The Amora Bali            Rp. 150.000 ");
  puts (" 2. Warung Abang Sari         Rp. 125.000 ");
  puts (" 3. Warung Makan Midori       Rp. 100.000 ");
  puts (" 4. Nasi Kajeng               Rp. 50.000  ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  printf("Ketikkan harga yang dipilih : ");
  scanf("%f",&harga);
  }
  else
  if(kabupaten==6){
  puts (" ====================================== ");
  puts ("                Jembrana                ");
  puts (" ====================================== ");
  puts (" <Nama Restoran>               < Harga >  ");
  puts (" 1. Rumah Makan Tegal Dadong  Rp. 40.000  ");
  puts (" 2. Warung Jegeg Bagus        Rp. 60.000  ");
  puts (" 3. Kedai Jukung              Rp. 30.000  ");
  puts (" 4. Waru Kedai Steak          Rp. 75.000  ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  printf("Ketikkan harga yang dipilih : ");
  scanf("%f",&harga);
  }
  else
  if(kabupaten==7){
  puts (" ====================================== ");
  puts ("               Karangasem               ");
  puts (" ====================================== ");
  puts (" <Nama Restoran>               < Harga >  ");
  puts (" 1. Bali Asli Restaurant      Rp. 270.000 ");
  puts (" 2. Pondok Mina               Rp. 90.000  ");
  puts (" 3. Warung Biker              Rp. 70.000  ");
  puts (" 4. Warung Padang Kecag       Rp. 80.000  ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  printf("Ketikkan harga yang dipilih : ");
  scanf("%f",&harga);
  }
  else
  if(kabupaten==8){
  puts (" ====================================== ");
  puts ("                Tabanan                 ");
  puts (" ====================================== ");
  puts (" <Nama Restoran>               < Harga >  ");
  puts (" 1. Warung Tanpa Nama         Rp. 100.000 ");
  puts (" 2. Warung Makan Dukuh        Rp. 75.000  ");
  puts (" 3. Danke                     Rp. 75.000  ");
  puts (" 4. Paon Mak Mo               Rp. 90.000  ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  printf("Ketikkan harga yang dipilih : ");
  scanf("%f",&harga);
  }
  else
  if(kabupaten==9){
  puts (" ====================================== ");
  puts ("             Buleleng Barat             ");
  puts (" ====================================== ");
  puts (" <Nama Restoran>                       < Harga >  ");
  puts (" 1. Tanjung Alam                      Rp. 110.000 ");
  puts (" 2. Terrasse du Lac Tamblingan Sari   Rp. 150.000 ");
  puts (" 3. Warung Bik Juk                    Rp. 80.000  ");
  puts (" 4. Blayag Buleleng                   Rp. 10.000  ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  printf("Ketikkan harga yang dipilih : ");
  scanf("%f",&harga);
  }
  else
  if(kabupaten==10){
  puts (" ====================================== ");
  puts ("             Buleleng Timur             ");
  puts (" ====================================== ");
  puts (" <Nama Restoran>               < Harga >  ");
  puts (" 1. Rumah Makan Manalagi 2    Rp. 75.000  ");
  puts (" 2. RM Wina Segara            Rp. 75.000  ");
  puts (" 3. Warung Jegeg              Rp. 60.000  ");
  puts (" 4. Paon Ummi Singaraja       Rp. 150.000 ");
  printf("Ketikkan pilihan anda: " );
  scanf("%d",&makan );
  printf("Ketikkan harga yang dipilih : ");
  scanf("%f",&harga);
  }
else{ printf(" Input yang anda masukkan salah!");
 }
}
