#include <stdio.h>
#include <stdlib.h>

//deklarasi variabel
int edu, konser, rel, pan, shop;

//deklarasi fungsi
void deskripsi();

//Fungsi Deskripsi
void deskripsi(){
    if(edu==1){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                       DESKRIPSI TEMPAT WISATA                         |");
        puts ("|                   MONUMEN BAJRA SANDHI, DENPASAR                      |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Monumen Bajra Sandhi merupakan Monumen Perjuangan Rakyat Bali untuk  |");
        puts ("|  memberi hormat pada para pahlawan serta merupakan lambang pesemaian  |");
        puts ("|  pelestarian jiwa perjuangan rakyat Bali dari generasi  ke  generasi  |");
        puts ("|  dan dari zaman ke zaman serta lambang semangat untuk mempertahankan  |");
        puts ("|  keutuhan Negara Kesatuan Republik Indonesia.                         |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(edu==2){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                    TAMAN KERTHA GOSA, KLUNGKUNG                       |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Taman Kertha Gosa dibangun pada awal abad ke-18 oleh Dewagung Gusti  |");
        puts ("|  Sideman. Kertha Gosa berarti tempat di mana raja bertemu dengan ke-  |");
        puts ("|  menteriannya untuk membahas masalah keadilan. Taman berupa Paviliun  |");
        puts ("|  ini memiliki bagian epik Hindu Mahabharata, yaitu seri Bhima Swarga  |");
        puts ("|  yang dilukiskan di langit-langit paviliun.                           |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(edu==3){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                    MUSEUM GEOPARK BATUR, BANGLI                       |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Museum Geopark Batur yang baru diresmikan pada tanggal 1 April 2016  |");
        puts ("|  oleh Mantan Menteri ESDM, Sudirman Said, menampilkan berbagai macam  |");
        puts ("|  koleksi yang merepresentasikan 3 pilar geopark yaitu keanekaragaman  |");
        puts ("|  hayati (biodiversity), keanekaragaman geologi (geodiversity), serta  |");
        puts ("|  keanekaragaman wujud budaya (cultural diversity).                    |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(konser==1){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                TAMAN NASIONAL BALI BARAT, JEMBRANA                    |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Taman Nasional Bali Barat terdiri  dari  berbagai habitat hutan dan  |");
        puts ("|  dan sabana. Sekitar 160 spesies hewan serta tumbuhan  dilindungi di  |");
        puts ("|  taman nasional ini. Hewan-hewan seperti banteng, rusa, lutung, kal-  |");
        puts ("|  ong, dan aneka burung. TNBB merupakan tempat terakhir untuk menemu-  |");
        puts ("|  kan satu-satunya burung endemik Bali, yaitu burung jalak bali.       |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(konser==2){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                    KEBUN RAYA BEDUGUL, TABANAN                        |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Kebun Raya Bedugul adalah sebuah kebun botani terbesar di Indonesia  |");
        puts ("|  yang dikelola oleh  Lembaga Ilmu Pengetahuan Indonesia (LIPI). Pada  |");
        puts ("|  awalnya kebun raya ini hanya diperuntukkan bagi tetumbuhan runjung.  |");
        puts ("|  Seiring dengan perkembangan, perubahan status, dan luas kawasannya,  |");
        puts ("|  kebun raya ini menjadi kawasan konservasi ex-situ bagi tumbuhan pe-  |");
        puts ("|  gunungan tropika Kawasan Timur Indonesia.                            |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(konser==3){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                      BALI BIRD PARK, GIANYAR                          |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Bali Bird Park merupakan tempat atraksi wisata sekaligus konservasi  |");
        puts ("|  berbagai jenis spesies burung di Indonesia serta mancanegara. Tidak  |");
        puts ("|  hanya menikmati keindahan dan bercengkrama dengan para burung, para  |");
        puts ("|  pengunjung juga dapat melihat pengembangbiakkan burung-burung, saat  |");
        puts ("|  para burung itu diberi makan, dan berfoto dengan burung-burung yang  |");
        puts ("|  dilepas bebas.                                                       |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(pan==1){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                        PANTAI KUTA, BADUNG                            |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Pantai Kuta Bali terletak di lokasi yang sangat strategis dan mudah  |");
        puts ("|  dijangkau oleh para wisatawan. Pemandangan sunset-nya juga terkenal  |");
        puts ("|  sangat indah dan eksotis. Warna langit yang kemerahan dan dipadukan  |");
        puts ("|  dengan hamparan pasir putih serta gelombang air laut yang tak liar,  |");
        puts ("|  telah mampu menyajikan lukisan alam yang begitu mempesona. Ombak di  |");
        puts ("|  pantai ini juga pas bagi para peselancar pemula.                     |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(pan==2){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                      PANTAI LOVINA, BULELENG                          |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Pantai Lovina merupakan salah satu pantai yang terletak di Bali ba-  |");
        puts ("|  gian Utara. Di pantai ini, pengunjung dapat memandang  sunrise yang  |");
        puts ("|  memukau sekaligus menyaksikan atraksi lumba-lumba yang hidup bebas.  |");
        puts ("|  'Sirkus' dari lumba-lumba ini dapat disaksikan dari pukul 6-9 pagi.  |");
        puts ("|  Selain itu, para pengunjung juga dapat melakukan snorkeling  hingga  |");
        puts ("|  memancing di tengah laut bersama teman-teman.                        |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(pan==3){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                       PANTAI SANUR,DENPASAR                           |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Pantai Sanur adalah sebuah tempat pelancongan pariwisata yang begi-  |");
        puts ("|  tu terkenal di pulau Bali. Hal itu karena memiliki ombak yang cukup  |");
        puts ("|  tenang, maka pantai Sanur tidak bisa dipakai untuk surfing layaknya  |");
        puts ("|  Pantai Kuta. Namun, pengunjung dapat berenang dan menyewa kano jika  |");
        puts ("|  ingin menuju ke tengah pantai. Kawasan pariwisata Sanur  menawarkan  |");
        puts ("|  pengalaman liburan dengan budget yang lebih terjangkau.              |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(shop==1){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                     MALL BALI GALERIA, BADUNG                         |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Mall Bali Galeria (MBG)  adalah pusat perbelanjaan tepat di sebelah  |");
        puts ("|  patung atau bundaran Simpang Dewaruci di Kuta. Mal ini menghadirkan  |");
        puts ("|  konsep belanja dan hiburan keluarga serta seringkali  mempromosikan  |");
        puts ("|  dirinya sebagai tempat untuk 'menikmati, bermain, makan, dan berbe-  |");
        puts ("|  lanja'. Berbagai tenant, outlet, dan acara terjadwal  menjadikannya  |");
        puts ("|  tujuan populer bagi penduduk lokal dan pengunjung.                   |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(shop==2){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                    PASAR SENI SUKAWATI, BANGLI                        |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Pasar Seni Sukawati adalah pasar seni yang sangat terkenal di selu-  |");
        puts ("|  ruh penjuru dunia. Pasar ini menjadi tempat belanja terfavorit para  |");
        puts ("|  turis. pengunjung dalam membeli oleh-oleh, seperti makanan, keraji-  |");
        puts ("|  nan, dan barang lainnya dengan harga yang terjangkau. Terkadang pe-  |");
        puts ("|  ngunjung harus menawar dengan potongan harga hingga  85 persen dari  |");
        puts ("|  harga yang ditawarkan penjual. Jadi pintar-pintarlah menawar.        |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(shop==3){
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                     PASAR KUMBASARI, DENPASAR                         |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Pasar Kumbasari terletak di tengah-tengah  Kota Denpasar yang dapat  |");
        puts ("|  dikunjungi oleh siapapun yang ingin berbelanja. Pasar Kumbasari me-  |");
        puts ("|  nawarkan berbagai barang kerajinan lengkap dengan harga lebih murah  |");
        puts ("|  serta kualitas yang terjamin. Di sebelah pasar terdapat sungai yang  |");
        puts ("|  telah ditata dan dikenal dengan nama 'Tukad Korea'. Tempat ini men-  |");
        puts ("|  jadi tempat tongkrongan yang instagramable.                          |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else
        printf("Kode yang anda masukkan salah!");
}
