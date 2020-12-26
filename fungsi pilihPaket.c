#include <stdio.h>
#include <stdlib.h>

//deklarasi variabel
int paket, bagPak;

//deklarasi fungsi
void pilihPaket();

//fungsi memilih paket
void pilihPaket(){

puts ("+---------------------------------------------------------------------------+");
puts ("|                       JENIS PAKET PERJALANAN WISATA                       |");
puts ("+---------------------------------------------------------------------------+");
puts ("| 1.Paket berdasarkan kabupaten          | 2.Paket berdasarkan kategori     |");
puts ("|    1.  Badung      6.  Gianyar         |    1.  Edukasi                   |");
puts ("|    2.  Denpasar    7.  Karangasem      |    2.  Konservasi                |");
puts ("|    3.  Tabanan     8.  Bangli          |    3.  Religi                    |");
puts ("|    4.  Jembrana    9.  Buleleng Barat  |    4.  Pantai                    |");
puts ("|    5.  Klungkung   10. Buleleng Timur  |    5.  Shopping                  |");
puts ("+---------------------------------------------------------------------------+");
printf("Pilihlah kode paket perjalanan anda : ");
scanf("%d",&paket); //menyimpan data paket pilihan user
printf("Pilihlah kode bagian paket sesuai tabel di atas : ");
scanf("%d", &bagPak); //menyimpan data bagian paket pilihan user

hargaPaket(); //memanggil fungsi hargaPaket
}
