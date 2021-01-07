int pilihan_kabupaten()
{
    proses_menu();
pilihan:
    point(53, 15);
    puts("=======================================================");
    point(53, 16);
    puts("|                   DAFTAR KABUPATEN                  |");
    point(53, 17);
    puts("=======================================================");
    point(53, 18);
    puts("|1. Badung                | 6. Gianyar                |");
    point(53, 19);
    puts("|2. Denpasar              | 7. Karangasem             |");
    point(53, 20);
    puts("|3. Tabanan               | 8. Bangli                 |");
    point(53, 21);
    puts("|4. Jembrana              | 9. Buleleng Barat         |");
    point(53, 22);
    puts("|5. Klungkung             | 10.Buleleng Timur         |");
    point(53, 23);
    puts("=======================================================");
    point(53, 24);
    puts("Ketikkan angka 0 bila ingin kembali ke menu sebelumnya");
    point(53, 25);
    printf("Ketikkan kode kabupaten untuk melihat daftar wisata : ");
    scanf("%d", &kabupaten);
    switch (kabupaten)
    {
    case 1:
        view_badung();
        goto pilihan;
        break;
    case 2:
        view_denpasar();
        goto pilihan;
        break;
    case 3:
        view_tabanan();
        goto pilihan;
        break;
    case 4:
        view_jembrana();
        goto pilihan;
        break;
    case 5:
        view_klungkung();
        goto pilihan;
        break;
    case 6:
        view_gianyar();
        goto pilihan;
        break;
    case 7:
        view_karangasem();
        goto pilihan;
        break;
    case 8:
        view_bangli();
        goto pilihan;
        break;
    case 9:
        view_buleleng_barat();
        goto pilihan;
        break;
    case 10:
        view_buleleng_timur();
        goto pilihan;
        break;
    default:
        break;
    }
    clean();
}
void view_badung()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                         TEMPAT-TEMPAT WISATA DI KABUPATEN BADUNG                                                          |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Nusa Dua           | 0     | 1. Beach Walk                | 0     | 1. Pura Uluwatu              | 20000 | 1. Agrowisata Sutera SS      | 30000 |");
    point(6, 33);
    puts("| 2. Pantai Melasti            | 0     | 2. Jalan Legian              | 0     | 2. Pura Taman Ayun           | 0     | 2. House of Alaia Studio     | 200000|");
    point(6, 34);
    puts("| 3. Pantai Uluwatu            | 0     | 3. Discovery                 | 0     | 3. Pura Puja Mandala         | 0     | 3. Dream Studio Zone         | 100000|");
    point(6, 35);
    puts("| 4. Pantai Tegal Wangi        | 0     | 4. Krisna                    | 0     | 4. Masjid Agung Palapa       | 0     | 4. Garuda Wisnu Kencana      | 125000|");
    point(6, 36);
    puts("| 5. Pantai Suluban            | 0     | 5. Lippo Plaza               | 0     | 5. GKPB Jemaat Yudea         | 0     | 5. Workshop Jenggala Keramik | 100000|");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_denpasar()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                         TEMPAT-TEMPAT WISATA DI KOTA DENPASAR                                                             |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Padang Galak       | 0     | 1. Level 21 Mall             | 0     | 1. Pura Agung Jagatnatha     | 0     | 1. Monumen Bajra Sandhi      | 5000  |");
    point(6, 33);
    puts("| 2. Pantai Biaung             | 0     | 2. Trans Studio Mall         | 0     | 2. Pura Tanah Kilap          | 0     | 2. Museum Bung Karno         | 25000 |");
    point(6, 34);
    puts("| 3. Pantai Tangtu             | 0     | 3. Pasar Kumbasari           | 0     | 3. Klenteng Bei Ji Gong      | 0     | 3. Museum Bali               | 50000 |");
    point(6, 35);
    puts("| 4. Pantai Sanur              | 0     | 4. Sanur Market              | 0     | 4. Masjid Al Muawanah        | 0     | 4. BKSDA Bali                | 0     |");
    point(6, 36);
    puts("| 5. Pantai Matahari Terbit    | 0     | 5. Dewata Oleh-oleh          | 0     | 5. Gereja Katolik Roh Kudus  | 0     | 5. Museum Le Mayeur          | 10000 |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_tabanan()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                         TEMPAT-TEMPAT WISATA DI KABUPATEN TABANAN                                                         |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Beraban            | 0     | 1. Pasar Kodok               | 0     | 1. Pura Ulun Danu            | 30000 | 1. Museum Subak              | 10000 |");
    point(6, 33);
    puts("| 2. Pantai Bedungu            | 0     | 2. Joger Baturiti            | 0     | 2. Pura Luhur Batukaru       | 15000 | 2. Kebun Raya Bedugul        | 9000  |");
    point(6, 34);
    puts("| 3. Pantai Boka               | 0     | 3. Pasar Senggol             | 0     | 3. Pura Alas Kedaton         | 20000 | 3. Hutan Monyet              | 20000 |");
    point(6, 35);
    puts("| 4. Pantai Pasut              | 0     | 4. Mall Kampoeng Lot         | 0     | 4. Pura Mekori               | 0     | 4. Puri Anyar Kerambitan     | 10000 |");
    point(6, 36);
    puts("| 5. Pantai Klecung            | 0     | 5. Matahari Duta Plaza       | 0     | 5. Pura Tanah Lot            | 20000 | 5. Taman Pahlawan            | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_jembrana()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                           TEMPAT-TEMPAT WISATA DI KABUPATEN JEMBRANA                                                      |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |          AIR TERJUN          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Perancak           | 0     | 1. Air Terjun Batu Belah     | 0     | 1. Pura Rambut Siwi          | 5000  | 1. Taman Nasional Bali Barat | 2500  |");
    point(6, 33);
    puts("| 2. Pantai Madewi             | 0     | 2. Air Terjun Bidadari       | 0     | 2. Pura Jati                 | 0     | 2. Museum Manusia Purba      | 0     |");
    point(6, 34);
    puts("| 3. Teluk Gilimanuk           | 0     | 3. Air Terjun Juwuk Manis    | 0     | 3. Pura Majapahit            | 0     | 3. Desa Sangkaragung         | 60000 |");
    point(6, 35);
    puts("| 4. Pantai Bakut Rening       | 0     | 4. Air Terjun Grojogan       | 0     | 4. Pura Gede Perancak        | 0     | 4. Makam Tua                 | 0     |");
    point(6, 36);
    puts("| 5. Pantai Delod Berawah      | 0     | 5. Air Terjun Nusamara       | 0     | 5. Klenteng Cung Ling Bio    | 0     | 5. Taman Prasasti            | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_klungkung()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                            TEMPAT-TEMPAT WISATA DI KABUPATEN KLUNGKUNG                                                    |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Dream Beach               | 0     | 1. Pasar Rakyat Semarapura   | 0     | 1. Pura Dalem Ped            | 0     | 1. Angle's Bilabong          | 5000  |");
    point(6, 33);
    puts("| 2. Pantai Jungut Batu        | 0     | 2. Pasar Endek               | 0     | 2. Pura Giri Putri           | 10000 | 2. Bukit Teletubbis          | 0     |");
    point(6, 34);
    puts("| 3. Pantai Selambung          | 0     | 3. Pasar Galiran             | 0     | 3. Pura Paluang              | 10000 | 3. Taman Kertha Gosa         | 12000 |");
    point(6, 35);
    puts("| 4. Mushroom Beach            | 0     | 4. Bintang Oleh-oleh         | 0     | 4. Pura Watu Klotok          | 0     | 4. Museum Nyoman Gunarsa     | 25000 |");
    point(6, 36);
    puts("| 5. Toya Pakeh Beach          | 0     | 5. -                         | 0     | 5. Masjid Nurul Huda         | 10000 | 5. Museum Semarajaya         | 25000 |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_gianyar()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                           TEMPAT-TEMPAT WISATA DI KABUPATEN GIANYAR                                                       |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Lebih              | 0     | 1. Arta Sedana               | 0     | 1. Pura Goa Lawah            | 15000 | 1. Taman Nusa                | 85000 |");
    point(6, 33);
    puts("| 2. Pantai Siyut              | 0     | 2. Manjari                   | 0     | 2. Pura Goa Gajah            | 15000 | 2. Museum Gedong Arca        | 0     |");
    point(6, 34);
    puts("| 3. Pantai Cucukan            | 0     | 3. Pasar Tradisional         | 0     | 3. Pura Penataran Sasih      | 0     | 3. Museum Puri Lukisan       | 0     |");
    point(6, 35);
    puts("| 4. Pantai Masceti            | 0     | 4. Giftart_Bali              | 0     | 4. Pura Tirta Empul          | 30000 | 4. The Sukarno Center        | 20000 |");
    point(6, 36);
    puts("| 5. Pantai Purnama            | 0     | 5. Blink                     | 0     | 5. Pura Gunung Kawi          | 30000 | 5. Kemenuh Butterfly Park    | 37400 |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_karangasem()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                         TEMPAT-TEMPAT WISATA DI KABUPATEN KARANGASEM                                                      |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Wates              | 0     | 1. Arta Sedana               | 0     | 1. Puri Kaleran              | 0     | 1. Museum Pustaka Lontar     | 0     |");
    point(6, 33);
    puts("| 2. Pantai Bias Tugel         | 0     | 2. Dupa Amlapura             | 0     | 2. Pura Juuk Manis           | 0     | 2. Charly's ChocolateFactory | 10000 |");
    point(6, 34);
    puts("| 3. Pantai Virgin             | 0     | 3. Clandys                   | 0     | 3. Pemerajan Agung Batuaya   | 0     | 3. Puri Agung Karangasem     | 0     |");
    point(6, 35);
    puts("| 4. Pantai Yeh Malet          | 0     | 4. Cahaya Wirama             | 0     | 4. Masjid Jami' Al Mukhlisin | 0     | 4. Desa Tengenan             | 0     |");
    point(6, 36);
    puts("| 5. Pantai Samuh              | 0     | 5. Pasar Sibetan             | 0     | 5. GKPB Philia               | 0     | 5. -                         | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_bangli()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                             TEMPAT-TEMPAT WISATA DI KABUPATEN BANGLI                                                      |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|          AIR TERJUN          | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Air Terjun Tibumana       | 20000 | 1. Bangli Mesari             | 0     | 1. Pura Pingit               | 0     | 1. Desa Penglipuran          | 15000 |");
    point(6, 33);
    puts("| 2. Air Terjun Tegunungan     | 15000 | 2. Victory Bali              | 0     | 2. Pura Penataran Sangging   | 0     | 2. Museum Geopark Batur      | 20000 |");
    point(6, 34);
    puts("| 3. Air Terjun Kuning         | 0     | 3. Pande Busana              | 0     | 3. Pura Kehen                | 0     | 3. Ayodya Oemah Strawberry   | 15000 |");
    point(6, 35);
    puts("| 4. Air Terjun Pengibul       | 5000  | 4. Randy Sejahtera           | 0     | 4. Pura Ulun Suwi Subak      | 0     | 4. Puri Kilian               | 0     |");
    point(6, 36);
    puts("| 5. Bangkiang Djaran Waterfall| 0     | 5. Kidul Market              | 0     | 5. Pura Pengrubugan          | 0     | 5. -                         | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_buleleng_barat()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                          TEMPAT-TEMPAT WISATA DI KABUPATEN BULELENG BARAT                                                 |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Pumeteran          | 0     | 1. Hardys                    | 0     | 1. GKII Gerogak              | 0     | 1. Turtle Hatchery Project   | 0     |");
    point(6, 33);
    puts("| 2. Pantai Batu Sungu         | 0     | 2. Sanchita Singaraja        | 0     | 2. Pura Taman Swasti         | 0     | 2. Grand Surya Waterpark     | 50000 |");
    point(6, 34);
    puts("| 3. Pantai Umeanyar           | 0     | 3. Pasar Seririt             | 0     | 3. Taman Sari Loka Paksa     | 0     | 3. Perkebunan Anggur Rakyat  | 0     |");
    point(6, 35);
    puts("| 4. Pantai Tanggu Wisia       | 0     | 4. Pasar Banyuatis           | 0     | 4. Pura Puseh Bestala        | 0     | 4. -                         | 0     |");
    point(6, 36);
    puts("| 5. Pantai Gili Putih         | 0     | 5. Toko Suda Aditya          | 0     | 5. Pura Tepi Siring          | 0     | 5. -                         | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
void view_buleleng_timur()
{

    point(6, 27);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 28);
    puts("|                                                          TEMPAT-TEMPAT WISATA DI KABUPATEN BULELENG TIMUR                                                 |");
    point(6, 29);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 30);
    puts("|            PANTAI            | TIKET |            SHOPPING          | TIKET |            RELIGI            | TIKET |           EDUKASI            | TIKET |");
    point(6, 31);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
    point(6, 32);
    puts("| 1. Pantai Punjuk Batu        | 0     | 1. BREM Singaraja            | 0     | 1. Griya Tirta               | 0     | 1. Museum Buleleng           | 5000  |");
    point(6, 33);
    puts("| 2. Hidden Beach Giri Emas    | 0     | 2. Marmarshopp_Singaraja     | 0     | 2. Pura Sura Lepang          | 0     | 2. Museum Gedong Kirtya      | 0     |");
    point(6, 34);
    puts("| 3. Pantai Pemaron            | 0     | 3. Krisna                    | 15000 | 3. Pura Lebah Suwug          | 0     | 3. Museum Sundal Ketjil      | 0     |");
    point(6, 35);
    puts("| 4. Pantai Kerobokan          | 0     | 4. Pasar Banyuning           | 0     | 4. Seng Hong Bio             | 0     | 4. Puri Agung Singaraja      | 0     |");
    point(6, 36);
    puts("| 5. Pantai Batu Sugu          | 0     | 5. DewaDewi Collection       | 0     | 5. Musholla Babusallam       | 0     | 5. Workshop Jenggala Keramik | 0     |");
    point(6, 37);
    puts("+-----------------------------------------------------------------------------------------------------------------------------------------------------------+");
}
