#include <stdio.h>
#include <stdlib.h>

//deklarasi variabel
int bagPak, edu, konser, rel, pan, shop;

//deklarasi fungsi
void deskripsi();

//fungsi deskripsi
void deskripsi(){
    if(bagPak==1 && edu==1){ //deskripsi untuk tempat wisata edukasi tujuan monumen bajra sandhi, denpasar
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
    else if(bagPak==1 && edu==2){ //deskripsi untuk tempat wisata edukasi tujuan taman kertha gosa, klungkung
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
    else if(bagPak==1 && edu==3){ //deskripsi untuk tempat wisata edukasi tujuan museum geopark batur, bangli
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
    else if(bagPak==2 && konser==1){ //deskripsi untuk tempat wisata konservasi tujuan taman nasional bali barat, jembrana
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
    else if(bagPak==2 && konser==2){ //deskripsi untuk tempat wisata konservasi tujuan kebun raya bedugul, tabanan
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
    else if(bagPak==2 && konser==3){ //deskripsi untuk tempat wisata konservasi tujuan bali bird park, gianyar
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
    else if(bagPak==3 && rel==1){ //deskripsi untuk tempat wisata religi tujuan pura tirta empul, gianyar
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                     PURA TIRTA EMPUL, GIANYAR                         |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Pura Tirta Empul adalah pura yang terkenal dengan air sucinya hing-  |");
        puts ("|  ga para turis juga ikut meramaikan tempat ini. Pura ini juga menda-  |");
        puts ("|  patkan julukan sebagai istana air. Setiap pagi, para wisatawan akan  |");
        puts ("|  berbondong-bondong memenuhi kolam pemandian di pura ini. Lingkungan  |");
        puts ("|  yang hijau dan pemandangan alam yang masih asri  mengesankan slogan  |");
        puts ("|  back to nature.                                                      |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(bagPak==3 && rel==2){ //deskripsi untuk tempat wisata religi tujuan pura tanah lot, tabanan
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                      PURA TANAH LOT, TABANAN                          |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Pura Tanah Lot yang terletak di Desa Beraban, Tabanan, menjadi sal-  |");
        puts ("|  ah satu pura yang disucikan di Bali. Pura ini terletak di sebongkah  |");
        puts ("|  batu yang sangat besar yang terletak di pesisir pantai. Selain men-  |");
        puts ("|  jadi tempat beribadah umat Hindu, tidak sedikit pula para wisatawan  |");
        puts ("|  yang datang untuk mengabadikan foto sunset di pura ini. Jika difoto  |");
        puts ("|  melalui kejauhan, akan nampak siluet yang indah dari pura ini.       |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(bagPak==3 && rel==3){ //deskripsi untuk tempat wisata religi tujuan puja mandala, badung
        puts ("+-----------------------------------------------------------------------+");
        puts ("|                      DESKRIPSI TEMPAT WISATA                          |");
        puts ("|                        PUJA MANDALA, BADUNG                           |");
        puts ("+-----------------------------------------------------------------------+");
        puts ("|  Puja Mandala merupakan kompleks peribadatan yang lokasinya berdeka-  |");
        puts ("|  tan satu sama lain. Kawasan ini menjadi  objek wisata religi dengan  |");
        puts ("|  bangunan peribadatan yang mewakili 5 agama besar nusantara, yakni :  |");
        puts ("|  Pura Jagat Natha, Gereja Kristen Bukit Doa, Gereja BM Segala Bangsa  |");
        puts ("|  Masjid Ibnu Batutah, dan Vihara Budina Ghuna. Kelima  tempat ibadah  |");
        puts ("|  tersebut diresmikan sejak 1997.                                      |");
        puts ("+-----------------------------------------------------------------------+");
    }
    else if(bagPak==4 && pan==1){ //deskripsi untuk tempat wisata pantai tujuan pantai kuta, badung
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
    else if(bagPak==4 && pan==2){ //deskripsi untuk tempat wisata pantai tujuan pantai lovina, buleleng
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
    else if(bagPak==4 && pan==3){ //deskripsi untuk tempat wisata pantai tujuan pantai sanur, denpasar
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
    else if(bagPak==5 && shop==1){ //deskripsi untuk tempat wisata shopping tujuan mall bali galeria, badung
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
    else if(bagPak==5 && shop==2){ //deskripsi untuk tempat wisata shopping tujuan pasar seni sukawati, bangli
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
    else if(bagPak==5 && shop==3){ //deskripsi untuk tempat wisata shopping tujuan pasar kumbasari, denpasar
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
    else //Jika input user tidak sesuai, else akan tereksekusi
        printf("Kode yang anda input salah!");
}
