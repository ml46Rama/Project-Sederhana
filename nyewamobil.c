#include <stdio.h>
#include <stdlib.h>

#define MOBIL1 50000 //harga sewa mobil isi 5 orang
#define MOBIL2 70000 //harga sewa bus mini
#define MOBIL3 100000//harga sewa bus besar

//********************************************************************//
//***********             Fungsi nyewamobil            ***************//
//====================================================================//
// Nama Fungsi: sewa                                                  //
// Input Argumen : sewa,main                                          //
// Output Argumen: sewa                                               //
// Deskripsi     : Menginput jamsewa, nyewamobil, pilihansewa         //
// Versi : 1.0                                      Rev. 0            //
// Tgl: 15-12-2020                                  Tgl: 15-12-2020   //
// I Gede Carlo Kresnandaka Agastya-2005551053      -                 //
//====================================================================//
typedef struct{                //nama struck
  int ask,pilihmobil,jam;
  float hargasewa;
}sewa;

//fungsi jam sewa mobil isi 5 orang
sewa jamsewa1(sewa sw){
  printf("\nAnda mau menyewa mobil berapa jam: ");
  scanf("%d", &sw.jam);

    sw.hargasewa=sw.jam*MOBIL1;

  return sw;
}
//fungsi jam sewa bus mini
sewa jamsewa2(sewa sw){
  printf("\nAnda mau menyewa mobil berapa jam: ");
  scanf("%d", &sw.jam);

    sw.hargasewa=sw.jam*MOBIL2;

  return sw;
}
//fungsi jam sewa bus besar
sewa jamsewa3(sewa sw){
  printf("\nAnda mau menyewa mobil berapa jam: ");
  scanf("%d", &sw.jam);

    sw.hargasewa=sw.jam*MOBIL3;

  return sw;
}

//fungsi memilih mobil yang akan disewa
sewa pilihansewa(sewa sw){
 printf("\n1. mobil isi 5 orang\n 2. Bis Mini\n 3. Bis Besar");
 printf("\nketikkan pilihan anda: ");
 scanf("%d",&sw.pilihmobil);
 if (sw.pilihmobil==1){
printf("Harga sewa perjam %d", MOBIL1);
jamsewa1(sw);
}else if (sw.pilihmobil==2){
printf("Harga sewa perjam %d", MOBIL2);
jamsewa2(sw);
}else if (sw.pilihmobil==3){
printf("Harga sewa perjam %d", MOBIL3);
jamsewa3(sw);
}else{
printf("Input yang anda masukkan salah!");
}
}

//fungsi memilih ingin menyewa mobil
sewa nyewamobil(sewa sw){

printf("\nApakah anda ingin menyewa mobil?");
printf("\n0(NO) | 1(YES)");
printf("\nMasukkan pilihan anda : ");
scanf("%d", &sw.ask);
  if (sw.ask==0){
    //masuk fungsi jarak

  } else if (sw.ask==1){
    pilihansewa(sw);
  }else{
    printf("Input yang anda masukkan salah!");
  }
}
int main(){
  sewa sw;
  sw=nyewamobil(sw);
  sw=pilihansewa(sw);
  sw=jamsewa1(sw);
  sw=jamsewa2(sw);
  sw=jamsewa3(sw);
  return 0;
}
