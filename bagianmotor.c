//oleh luh intan ratna sari dewi(2005551057) kelas A kelompok 3
//12-1-2020
#include <stdio.h>
#include <stdlib.h>
/*pemanggilan fungsi untuk memilih jenis kendaraan yang digunakan
asal untuk kecamatan, tujuan untuk wisata yang diinginkan, edu=edukasi untuk
mewakili kategori edukasi, konser=konservasi untuk mewakili ketegori konservasi, rel=religi
untuk mewakili kategori religi, pan=pantai untuk mewakili kategori pantai, shop=shopping
untuk mewakili kategori shopping*/
//deklaras variabel
int asal, tujuan, pilihan, edu, konser, rel, pan, shop, kendaraan;
//deklarasi fungsi
int kategori(int golongan);
double motormobil(int jeniskendaraan);


void mobil(int kecamatan, int wisata,int edukasi, int konservasi,int  religi,int  pantai,int shopping);
void motor(int kecamatan,int  wisata, int edukasi, int konservasi, int religi, int pantai, int shopping);

double mobil_jarak_edukasi(int kecamatan, int wisata, int edukasi);
double motor_jarak_edukasi(int kecamatan, int wisata, int edukasi);
double mobil_jarak_konservasi(int kecamatan, int wisata, int konservasi);
double motor_jarak_konservasi(int kecamatan, int wisata, int konservasi);
double mobil_jarak_religi(int kecamatan, int wisata, int religi);
double motor_jarak_religi(int kecamatan, int wisata, int religi);
double mobil_jarak_pantai(int kecamatan, int wisata, int pantai);
double motor_jarak_pantai(int kecamatan, int wisata, int pantai);
double mobil_jarak_shopping(int kecamatan, int wisata, int shopping);
double motor_jarak_shopping(int kecamatan, int wisata, int shopping);



//fungsi deskripsi
//user akan input 1 jika mobil 2 jika motor dan akan dihubungkan ke fungsi void motor dan mobil
double motormobil(int jeniskendaraan){
    int kendaraan=jeniskendaraan;
    if(kendaraan==1)
        mobil(asal, tujuan, edu, konser, rel, pan, shop);
    else if(kendaraan==2)
        motor(asal, tujuan, edu, konser, rel, pan, shop);
    else
        printf("salah!");
}
/* fungsi untuk menentukan jarak ketika fungsi dieksekusi, maka output akan tergantung dari
inputan sebelumnya, jika memilih satu akan ke void mobil dan jika 2 akan ke void motor*/
void mobil(int kecamatan, int wisata, int edukasi,int  konservasi,int religi, int pantai,int shopping){
        int asal=kecamatan;
        int tujuan=wisata;
        int edu=edukasi;
        int konser=konservasi;
        int rel=religi;
        int pan=pantai;
        int shop=shopping;
    if(tujuan==1)
        mobil_jarak_edukasi(kecamatan, wisata, edukasi);
    else if(tujuan==2)
        mobil_jarak_konservasi(kecamatan, wisata, konservasi);
    else if(tujuan==3)
        mobil_jarak_religi(kecamatan, wisata, religi);
    else if(tujuan==4)
        mobil_jarak_pantai(kecamatan, wisata, pantai);
    else if(tujuan==5)
        mobil_jarak_shopping(kecamatan, wisata, shopping);
    else
        printf("salah!");
}

void motor(int kecamatan, int wisata, int edukasi, int konservasi, int religi, int pantai, int shopping){
     int asal=kecamatan;
        int tujuan=wisata;
        int edu=edukasi;
        int konser=konservasi;
        int rel=religi;
        int pan=pantai;
        int shop=shopping;
    if(tujuan==1)
        mobil_jarak_edukasi(kecamatan, wisata, edukasi);
    else if(tujuan==2)
        mobil_jarak_konservasi(kecamatan, wisata, konservasi);
    else if(tujuan==3)
        mobil_jarak_religi(kecamatan, wisata, religi);
    else if(tujuan==4)
        mobil_jarak_pantai(kecamatan, wisata, pantai);
    else if(tujuan==5)
        mobil_jarak_shopping(kecamatan, wisata, shopping);
    else
        printf("salah!");
}
/* 10 fungsi dibawah adalah untuk mengeksekusi perkiraan bensin yang akan diperlukan dari asal 
ke tujuan wisata dengan menggunakan rumus( jarak*2/jarak(perliter) angka 2 adalah untuk
menghitung jarak bolak-balik*/
/*jika jarak terlalu dekat dan kurang dari pembagi, maka otomatis akan dihitung 1 liter*/
/*untuk jarak dari asal ke tujuan belum di upgrade siswa secara keseluruhan, dan masih dalam tahap
pengumpulan data*/
/*mobil jarak(kategori) untuk menghitung jika menggukan mobil, motor jarak(kategori) jika menggunakan motor
ini akan dipengaruhi oleh inputan user sebelumnya*/
/*1. abiansemal 2. kuta 3. kuta utara 4. kuta selatan 5. mengwi 6. petang
7. denpasar utara 8. denpasar barat 9. denpasar selatan 10. denpasar timur*/
double mobil_jarak_edukasi(int kecamatan, int wisata, int edukasi)
    {
        int asal=kecamatan;
        int tujuan=wisata;
        int edu=edukasi;
        double bensin_mobil;
        if(kecamatan==1 && tujuan==1){//dipilih dulu jika asal dan tujuan user ada di 1 maka akan ada 3 pilihan lagi
           switch(edu)//kecamatan 1 itu abiansemal
           {
               case 1://bajra sandhi
                   return 14*2/19;//angka 13 adalah jarak dari kecamatan 1 dengan tujuan dengan kategori edukasi
                   break;//19 adalah jarak yang dihabiskan mobil untuk satu liter
               case 2://kertha gosa
                   return 31*2/19;
                   break;
               case 3://geopark, batur
                   return 43*2/19;
                   break;
               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==1)//kecamatan 2 ada di  kuta
        {
         switch(edu)
         {
             case 1:
                   return 11*2/19;//bajra sandhi
                   break;
               case 2:
                  return 42*2/19;//kertha gosa
                
                   break;
               case 3:
                  return 69*2/19;//geopark
                   break;

               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==1)//kecamatan 3 kuta utara
        {
            switch(edu)
            {
                case 1:
                   return 38*2/19;//bajra sandhi
                  
                   break;
               case 2:
                   return 47*2/19;
                  
                   break;
               case 3:
                   return 75*2/19;
                  
                   break;

               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==1)//kecamatan 4 di kuta selatan
        {
            switch(edu)
            {
                 case 1:
                   return 12*2/19;//jaraknya 12 km, langsung dikali 2
                  
                   break;
               case 2:
                   return 37*2/19;
                  
                   break;
               case 3:
                   return 58*2/19;
                  
                   break;

               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==1) //kecamatan 5 di mengwi
        {
            switch(edu)
            {
                 case 1:
                   return 20*2/19;
                  
                   break;
               case 2:
                   return 38*2/19;
                  
                   break;
               case 3:
                   return 48*2/19;
                  
                   break;

               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==1)//kecamatan 6 di petang
        {
            switch(edu)
            {
                 case 1:
                   return 20*2/19;
                  
                   break;
               case 2:
                   return 51*2/19;
                  
                   break;
               case 3:
                   return 38*2/19;
                  
                   break;

               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==1)//denpasar utara
        {
            switch(edu)
            {
                  case 1:
                   return 1;
                  
                   break;
               case 2:
                   return 31*2/19;
                  
                   break;
               case 3:
                   return 50*2/19;
                  
                   break;
               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==1)//denpasar barat
        {
            switch(edu)
            {
                 case 1:
                   return 1;
                  
                   break;
               case 2:
                   return 34*2/19;
                  
                   break;
               case 3:
                   return 60*2/19;
                  
                   break;
               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==1)//denpasar selatan
        {
            switch(edu)
            {
                 case 1:
                   return 1;//return satu karena jarak antara asal
                   //dan tujuan dekat 
                  
                   break;
               case 2:
                   return 32*2/19;
                  
                   break;
               case 3:
                   return 59*2/19;                 
                   break;
               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==1)//denpasar timur
        {
            switch(edu)
            {
                 case 1:
                   return 1;
                  
                   break;
               case 2:
                   return 27*2/19;
                  
                   break;
               case 3:
                   return 54*2/19;
                  
                   break;
               default:
                break;
            }
        }
        else
        {
        printf("salah");
        }
       
    }
    double motor_jarak_edukasi(int kecamatan, int wisata, int edukasi)
    {
        int asal=kecamatan;
        int tujuan=wisata;
        int edu=edukasi;
        double bensin_mobil;
        if(kecamatan==1 && tujuan==1){
           switch(edu)
           {
               case 1:
                   return 1;
                   break;
               case 2:
                   return 31*2/37;
                   break;
               case 3:
                   return 43*2/37;
                   break;
               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==1)
        {
         switch(edu)
         {
             case 1:
                   return 1;
                   break;
               case 2:
                  return 42*2/37;
                
                   break;
               case 3:
                  return 69*2/37;
                   break;

               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==1)
        {
            switch(edu)
            {
                case 1:
                   return 1;
                  
                   break;
               case 2:
                   return 47*2/37;
                  
                   break;
               case 3:
                   return 75*2/37;
                  
                   break;

               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==1)
        {
            switch(edu)
            {
                 case 1:
                   return 1;
                  
                   break;
               case 2:
                   return 37*2/37;
                  
                   break;
               case 3:
                   return 58*2/37;
                  
                   break;

               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==1)
        {
            switch(edu)
            {
                 case 1:
                   return 20*2/37;
                  
                   break;
               case 2:
                   return 38*2/37;
                  
                   break;
               case 3:
                   return 48*2/19;
                  
                   break;

               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==1)
        {
            switch(edu)
            {
                 case 1:
                   return 45*2/37;
                  
                   break;
               case 2:
                   return 51*2/37;
                  
                   break;
               case 3:
                   return 38*2/37;
                  
                   break;

               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==1)
        {
            switch(edu)
            {
                  case 1:
                   return 1;
                  
                   break;
               case 2:
                   return 31*2/37;
                  
                   break;
               case 3:
                   return 50*2/37;
                  
                   break;
               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==1)
        {
            switch(edu)
            {
                 case 1:
                   return 1;
                  
                   break;
               case 2:
                   return 34*2/37;
                  
                   break;
               case 3:
                   return 60*2/37;
                  
                   break;
               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==1)
        {
            switch(edu)
            {
                 case 1:
                   return 1;
                  
                   break;
               case 2:
                   return 32*2/37;
                  
                   break;
               case 3:
                   return 59*2/37;
                  
                   break;
               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==1)
        {
            switch(edu)
            {
                 case 1:
                   return 1;
                  
                   break;
               case 2:
                   return 27*2/37;
                  
                   break;
               case 3:
                   return 54*2/37;
                  
                   break;
               default:
                break;
            }
        }
        else
        {
        printf("salah");
        }
       
    }
//case 1 untuk tnbb case 2 untuk kebun raya case 3 untuk bali bird park
double mobil_jarak_konservasi(int kecamatan, int wisata, int konservasi)
{
    int asal=kecamatan;
    int tujuan=wisata;
    int konser=konservasi;
    double bensin_motor;
    double bensin_mobil;
    if(kecamatan==1 && tujuan==2){
           switch(konser)
           {
               case 1://taman nasional bali barat
                   return 123*2/19;
                   
                   break;
               case 2:
                   return 39*2/19;//kebun raya bedugul
                   
                   break;
               case 3:
                   return 1;//bali bird parak
                   
                   break;

               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==2)
        {
         switch(konser)
         {
                case 1:
                   return 138*2/19;
                   
                   break;
               case 2:
                   return 58*2/19;
                   
                   break;
               case 3:
                   return 24*2/19;
                   
                   break;

               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 145*2/19;
                   
                   break;
               case 2:
                   return 65*2/19;
                   
                   break;
               case 3:
                   return 29*2/19;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 129*2/19;
                   
                   break;
               case 2:
                   return 25*2/19;
                   
                   break;
               case 3:
                   return 18*2/19;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 119*2/19;
                   
                   break;
               case 2:
                   return 34*2/19;
                   
                   break;
               case 3:
                   return 14*2/19;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 119*2/19;
                   
                   break;
               case 2:
                   return 21*2/19;
                   
                   break;
               case 3:
                   return 36*2/19;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==2)
        {
            switch(konser)
            {
                  case 1:
                   return 127*2/19;
                   
                   break;
               case 2:
                   return 47*2/19;
                   
                   break;
               case 3:
                   return 12*2/19;
                   
                   break;
               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==2)
        {
            switch(konser)
            {
                  case 1:
                   return 131*2/19;
                   
                   break;
               case 2:
                   return 52*2/19;
                   
                   break;
               case 3:
                   return 14*2/19;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 140*2/19;
                   
                   break;
               case 2:
                   return 59*2/19;
                   
                   break;
               case 3:
                   return 14*2/19;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 132*2/19;
                   
                   break;
               case 2:
                   return 50*2/19;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }
        else
        {
        printf("salah");
        }
       

}
double motor_jarak_konservasi(int kecamatan, int wisata, int konservasi)
{
    int asal=kecamatan;
    int tujuan=wisata;
    int konser=konservasi;
    double bensin_motor;
    double bensin_mobil;
    if(kecamatan==1 && tujuan==2){
           switch(konser)
           {
               case 1:
                   return 123*2/37;
                   
                   break;
               case 2:
                   return 39*2/17;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==2)
        {
         switch(konser)
         {
                case 1:
                   return 138*2/37;
                   
                   break;
               case 2:
                   return 58*2/37;
                   
                   break;
               case 3:
                   return 24*2/37;
                   
                   break;

               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 145*2/37;
                   
                   break;
               case 2:
                   return 65*2/37;
                   
                   break;
               case 3:
                   return 29*2/37;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 129*2/37;
                   
                   break;
               case 2:
                   return 50*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 119*2/37;
                   
                   break;
               case 2:
                   return 34*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 119*2/37;
                   
                   break;
               case 2:
                   return 21*2/37;
                   
                   break;
               case 3:
                   return 36*2/37;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==2)
        {
            switch(konser)
            {
                  case 1:
                   return 127*2/37;
                   
                   break;
               case 2:
                   return 47*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==2)
        {
            switch(konser)
            {
                  case 1:
                   return 131*2/37;
                   
                   break;
               case 2:
                   return 52*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 140*2/37;
                   
                   break;
               case 2:
                   return 59*2;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==2)
        {
            switch(konser)
            {
                case 1:
                   return 132*2/37;
                   
                   break;
               case 2:
                   return 50*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }
        else
        {
        printf("salah");
        }
}
//case 1 untuk tirta empul case 2 untuk tanah lot case 3 puja mandala
double mobil_jarak_religi(int kecamatan, int wisata, int religi)
{
    int asal=kecamatan;
    int tujuan=wisata;
    int rel=religi;
    double bensin_motor;
    double bensin_mobil;
    if(kecamatan==1 && tujuan==3){
           switch(rel)
           {
               case 1:
                   return 26*2/19;
                   
                   break;
               case 2:
                   return 21*2/19;
                   
                   break;
               case 3:
                   return 33*2/19;
                   
                   break;

               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==3)
        {
         switch(rel)
         {
                case 1:
                   return 50*2/19;
                   
                   break;
               case 2:
                   return 22*2/19;
                   
                   break;
               case 3:
                   return 14*2/19;
                   
                   break;

               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==3)
        {
            switch(rel)
            {
               case 1:
                   return 55*2/19;
                   
                   break;
               case 2:
                   return 28*2/19;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==3)
        {
            switch(rel)
            {
                case 1:
                   return 42*2/19;
                   
                   break;
               case 2:
                   return 13*2/19;
                   
                   break;
               case 3:
                   return 21*2/19;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==3)
        {
            switch(rel)
            {
                case 1:
                   return 32*2/19;
                   
                   break;
               case 2:
                   return 15*2/19;
                   
                   break;
               case 3:
                   return 37*2/19;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==3)
        {
            switch(rel)
            {
                case 1:
                   return 48*2/19;
                   
                   break;
               case 2:
                   return 46*2/19;
                   
                   break;
               case 3:
                   return 62*2/19;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==3)
        {
            switch(rel)
            {
                 case 1:
                   return 34*2/19;
                   
                   break;
               case 2:
                   return 19*2/19;
                   
                   break;
               case 3:
                   return 25*2/19;
                   
                   break;

               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==3)
        {
            switch(rel)
            {
                 case 1:
                   return 40*2/19 ;
                   
                   break;
               case 2:
                   return 18*2/19;
                   
                   break;
               case 3:
                   return 20*2/19;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==3)
        {
            switch(rel)
            {
               case 1:
                   return 40*2/19;
                   
                   break;
               case 2:
                   return 29*2/19;
                   
                   break;
               case 3:
                   return 17*2/19;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==3)
        {
            switch(rel)
            {
                case 1:
                   return 33*2/19;
                   
                   break;
               case 2:
                   return 22*2/19;
                   
                   break;
               case 3:
                   return 25*2/19;
                   
                   break;

               default:
                break;
            }
        }
        else
        {
        printf("salah");
        }
        
}
double motor_jarak_religi(int kecamatan, int wisata, int religi)
{
    int asal=kecamatan;
    int tujuan=wisata;
    int rel=religi;
    double bensin_motor;
    double bensin_mobil;
    if(kecamatan==1 && tujuan==3){
           switch(rel)
           {
               case 1:
                   return (26/37)*2;
                   
                   break;
               case 2:
                   return (21/37)*2;
                   
                   break;
               case 3:
                   return (33/37)*2;
                   
                   break;

               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==3)
        {
         switch(rel)
         {
                case 1:
                   return (50/37)*2;
                   
                   break;
               case 2:
                   return (22/37)*2;
                   
                   break;
               case 3:
                   return (14/37)*2;
                   
                   break;

               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==3)
        {
            switch(rel)
            {
               case 1:
                   return (55/37)*2;
                   
                   break;
               case 2:
                   return (28/37)*2;
                   
                   break;
               case 3:
                   return (6/37)*2;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==3)
        {
            switch(rel)
            {
                case 1:
                   return (42/37)*2;
                   
                   break;
               case 2:
                   return (13/37)*2;
                   
                   break;
               case 3:
                   return (21/37)*2;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==3)
        {
            switch(rel)
            {
                case 1:
                   return (32/37)*2;
                   
                   break;
               case 2:
                   return (15/37)*2;
                   
                   break;
               case 3:
                   return (37/37)*2;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==3)
        {
            switch(rel)
            {
                case 1:
                   return (48/37)*2;
                   
                   break;
               case 2:
                   return (46/37)*2;
                   
                   break;
               case 3:
                   return (62/37)*2;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==3)
        {
            switch(rel)
            {
                 case 1:
                   return 34*2/37;
                   
                   break;
               case 2:
                   return 19*2/37;
                   
                   break;
               case 3:
                   return 25*2/37;
                   
                   break;

               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==3)
        {
            switch(rel)
            {
                 case 1:
                   return 40*2/37;
                   
                   break;
               case 2:
                   return 1;
                   
                   break;
               case 3:
                   return 20*2/37;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==3)
        {
            switch(rel)
            {
               case 1:
                   return 40*2/37;
                   
                   break;
               case 2:
                   return 24*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==3)
        {
            switch(rel)
            {
                case 1:
                   return 33*2/37;
                   
                   break;
               case 2:
                   return 22*2/37;
                   
                   break;
               case 3:
                   return 25*2/37;
                   
                   break;

               default:
                break;
            }
        }
        else
        {
        printf("salah");
        }
}
// case 1 untuk pantai kuta case 2 untuk pantai lovina case 3 untuk sanur
double mobil_jarak_pantai(int kecamatan, int wisata, int pantai)
{
    int asal=kecamatan;
    int tujuan=wisata;
    int pan=pantai;
    double bensin_motor;
    double bensin_mobil;
    if(kecamatan==1 && tujuan==4){
           switch(pan)
           {
               case 1:
                   return (21/19)*2;
                   
                   break;
               case 2:
                   return (68/19)*2;
                   
                   break;
               case 3:
                   return (21/19)*2;
                   
                   break;

               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==4)
        {
         switch(pan)
         {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return (87/19)*2;
                   
                   break;
               case 3:
                   return (12/19)*2;
                   
                   break;
               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==4)
        {
            switch(pan)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return (94/19)*2;
                   
                   break;
               case 3:
                   return (18/19)*2;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==4)
        {
            switch(pan)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return (79/19)*2;
                   
                   break;
               case 3:
                   return (19/19)*2;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==4)
        {
            switch(pan)
            {
                 case 1:
                   return (24/19)*2;
                   
                   break;
               case 2:
                   return (63/19)*2;
                   
                   break;
               case 3:
                   return (27/19)*2;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==4)
        {
            switch(pan)
            {
                case 1:
                   return (50/19)*2;
                   
                   break;
               case 2:
                   return (50/19)*2;
                   
                   break;
               case 3:
                   return (49/19)*2;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==4)
        {
            switch(pan)
            {
                case 1:
                   return 14*2/19;
                   
                   break;
               case 2:
                   return 76*2/19;
                   
                   break;
               case 3:
                   return 15*2/19;
                   
                   break;
               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==4)
        {
            switch(pan)
            {
                  case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 81*2/19;
                   
                   break;
               case 3:
                   return 14*2/19;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==4)
        {
            switch(pan)
            {
               case 1:
                   return 12*2/19;
                   
                   break;
               case 2:
                   return 89*2/19;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==4)
        {
            switch(pan)
            {
                 case 1:
                   return 15*2/19;
                   
                   break;
               case 2:
                   return 81*2/19;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;


               default:
                break;
            }
        }
        else
        {
        printf("\nsalah");
        }
}
double motor_jarak_pantai(int kecamatan, int wisata, int pantai)
{
    int asal=kecamatan;
    int tujuan=wisata;
    int pan=pantai;
    double bensin_motor;
    double bensin_mobil;
    if(kecamatan==1 && tujuan==4){
           switch(pan)
           {
               case 1:
                   return 21*2/37;
                   
                   break;
               case 2:
                   return 68*2/37;
                   
                   break;
               case 3:
                   return 21*2/37;
                   
                   break;

               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==4)
        {
         switch(pan)
         {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 87*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==4)
        {
            switch(pan)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 94*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==4)
        {
            switch(pan)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 79*2/37;
                   
                   break;
               case 3:
                   return 19*2/37;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==4)
        {
            switch(pan)
            {
                 case 1:
                   return 24*2/37;
                   
                   break;
               case 2:
                   return 63*2/37;
                   
                   break;
               case 3:
                   return 27*2/37;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==4)
        {
            switch(pan)
            {
                case 1:
                   return 50*2/37;
                   
                   break;
               case 2:
                   return 50*2/37;
                   
                   break;
               case 3:
                   return 49*2/37;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==4)
        {
            switch(pan)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 76*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==4)
        {
            switch(pan)
            {
                  case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 81*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==4)
        {
            switch(pan)
            {
               case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 89*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==4)
        {
            switch(pan)
            {
                 case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 81*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;


               default:
                break;
            }
        }
        else
        {
        printf("\nsalah");
        }
}
//case 1 untuk mall bali galeria case 2 pasar sukawati case 3 untuk pasar kumbasari
double mobil_jarak_shopping(int kecamatan, int wisata, int shopping)
{

 int asal=kecamatan;
    int tujuan=wisata;
    int shop=shopping;
    double bensin_motor;
    double bensin_mobil;
    if(kecamatan==1 && tujuan==5){
           switch(shop)
           {
               case 1:
                   return 21*2/19;
                   
                   break;
               case 2:
                   return 10*2/19;
                   
                   break;
               case 3:
                   return 11*2/19;
                   
                   break;

               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==5)
        {
         switch(shop)
         {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 27*2/19;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 33*2/19;
                   
                   break;
               case 3:
                   return 16*2/19;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 10*2/19;
                   
                   break;
               case 2:
                   return 21*2/19;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 25*2/19;
                   
                   break;
               case 2:
                   return 16*2/19;
                   
                   break;
               case 3:
                   return 16*2/19;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 51*2/19;
                   
                   break;
               case 2:
                   return 38*2/19;
                   
                   break;
               case 3:
                   return 41*2/19;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==5)
        {
            switch(shop)
            {
                  case 1:
                   return 14*2/19;
                   
                   break;
               case 2:
                   return 15*2/19;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==5)
        {
            switch(shop)
            {
                  case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 18*2/19;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 17*2/19;
                   
                   break;
               case 3:
                   return 11*2/19;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 17*2/19;
                   
                   break;
               case 2:
                   return 11*2/19;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }
        else
        {
        printf("salah");
        }

}
double motor_jarak_shopping(int kecamatan, int wisata, int shopping)

{

 int asal=kecamatan;
    int tujuan=wisata;
    int shop=shopping;
    double bensin_motor;
    double bensin_mobil;
    if(kecamatan==1 && tujuan==5){
           switch(shop)
           {
               case 1:
                   return 21*2/37;
                   
                   break;
               case 2:
                   return 1;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
           }
        }else if(kecamatan==2 && tujuan==5)
        {
         switch(shop)
         {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 27*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
         }
        }else if(kecamatan==3&&tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 33*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==4 && tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 21*2/37;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;

               default:
                break;
            }
        }else if(kecamatan==5&&tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 25*2/37;
                   
                   break;
               case 2:
                   return 1;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==6 && tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 51*2/37;
                   
                   break;
               case 2:
                   return 38*2/37;
                   
                   break;
               case 3:
                   return 41*2/37;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==7 && tujuan==5)
        {
            switch(shop)
            {
                  case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 1;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;

            }
        }else if(kecamatan==8 && tujuan==5)
        {
            switch(shop)
            {
                  case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 1;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==9 && tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 1;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }else if(kecamatan==10 && tujuan==5)
        {
            switch(shop)
            {
                case 1:
                   return 1;
                   
                   break;
               case 2:
                   return 1;
                   
                   break;
               case 3:
                   return 1;
                   
                   break;
               default:
                break;
            }
        }
        else
        {
        printf("salah");
        }
        
}
