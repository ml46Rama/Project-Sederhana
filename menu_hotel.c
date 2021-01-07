void fungsi_hotel() //user menentukan apakah ingin menginap disebuah hotel
{
    proses_menu();
    point(65, 15);
    puts("=======================================================");
    point(65, 16);
    puts("|                       FUNGSI HOTEL                  |");
    point(65, 17);
    puts("=======================================================");
    point(65, 18);
    printf("|     Apakah anda ingin menginap di suatu tempat?     |");
    point(65, 19);
    puts("-------------------------------------------------------");
    point(65, 20);
    printf("1.Yes                       ||2. No                    ");
    point(65, 21);
    puts("-------------------------------------------------------");
    point(65, 22);
    scanf("%d", &a);
    clean();
    if (a == 1)
    {
        jenis_hotel();
    }
    else
    {
        printf("salah");
    }
}

int jenis_hotel() //menampilkan jenis - jenis hotel dan daftar nama - nama hotelnya
{
    proses_menu();
    int pilihan_penginapan;
    point(68, 15);
    puts("=============================================");
    point(68, 16);
    puts("|             JENIS HOTEL                   |");
    point(68, 17);
    puts("=============================================");
    point(68, 18);
    puts("|1. Home Stay                               |");
    point(68, 19);
    puts("|2. Hotel bintang 3                         |");
    point(68, 20);
    puts("|3. Hotel bintang 5                         |");
    point(68, 21);
    puts("|4. Villa                                   |");
    point(68, 22);
    puts("=============================================");
    point(68, 23);
    printf("jenis hotel apa yang anda inginkan  :");
    scanf("%d", &b);
    point(68, 24);
    printf("anda ingin menginap berapa lama :");
    scanf("%d", &lama);
    point(68, 25);
    printf("Bila anda memilih villa input 1 atau 2 (1 villa berkapasitas 5 orang)");
    point(68, 26);
    printf("anda ingin pesan untuk berapa orang(kecuali vila)   :");
    scanf("%d", &c);
    clean();

    if (b == 1)
    {
        point(72, 15);
        puts("===============================");
        point(72, 16);
        puts("|      DAFTAR HOME STAY       |"); //menampilkan nama - nama homestay dan harga - harga homestay
        point(72, 17);
        puts("===============================");
        point(72, 18);
        puts("|1.Cottage DenAyu             |");
        point(72, 19);
        puts("|2.Lembayung Sari             |");
        point(72, 20);
        puts("|3.Bakungan diJero            |");
        point(72, 21);
        puts("|4.Segara Urip                |");
        point(72, 22);
        puts("|5.Milla                      |");
        point(72, 23);
        puts("|6.Nassybe                    |");
        point(72, 24);
        puts("|7.Ida                        |");
        point(72, 25);
        puts("|8.D karang                   |");
        point(72, 26);
        puts("|9.Taruna                     |");
        point(72, 27);
        puts("|10.Madhasativa               |");
        point(72, 28);
        puts("===============================");
        point(72, 29);
        printf("dimana anda ingin menginap? :");
        scanf("%d", &pilihan_penginapan);
        if (pilihan_penginapan == 1)
        {
            harga_penginapan = lama * 160000 * c;
        }
        else if (pilihan_penginapan == 2)
        {
            harga_penginapan = lama * 185000 * c;
        }
        else if (pilihan_penginapan == 3)
        {
            harga_penginapan = lama * 150000 * c;
        }
        else if (pilihan_penginapan == 4)
        {
            harga_penginapan = lama * 250000 * c;
        }
        else if (pilihan_penginapan == 5)
        {
            harga_penginapan = lama * 300000 * c;
        }
        else if (pilihan_penginapan == 6)
        {
            harga_penginapan = lama * 200000 * c;
        }
        else if (pilihan_penginapan == 7)
        {
            harga_penginapan = lama * 300000 * c;
        }
        else if (pilihan_penginapan == 8)
        {
            harga_penginapan = lama * 365000 * c;
        }
        else if (pilihan_penginapan == 9)
        {
            harga_penginapan = lama * 280000 * c;
        }
        else if (pilihan_penginapan == 10)
        {
            harga_penginapan = lama * 400000 * c;
        }
    }
    else if (b == 2)
    {
        point(72, 15);
        puts("===================================");
        point(72, 16);
        puts("|      DAFTAR HOTEL BINTANG 3     |"); //menampilkan nama - nama hotel bintang 3 dan harga - harga hotel bintang 3
        point(72, 17);
        puts("===================================");
        point(72, 18);
        puts("|1.Losari                         |");
        point(72, 19);
        puts("|2.Quest San                      |");
        point(72, 20);
        puts("|3.Puri Taman Sari                |");
        point(72, 21);
        puts("|4.The Galuh Pakuntan             |");
        point(72, 22);
        puts("|5.The Sunjaya                    |");
        point(72, 23);
        puts("|6.Puri Saron                     |");
        point(72, 24);
        puts("|7.Camessa Hotel Amed             |");
        point(72, 25);
        puts("|8.The Volcania                   |");
        point(72, 26);
        puts("|9.Sunia Loka                     |");
        point(72, 27);
        puts("|10.Melka Excelsior               |");
        point(72, 28);
        puts("===================================");
        point(72, 29);
        printf("dimana anda ingin menginap? :");
        scanf("%d", &pilihan_penginapan);
        if (pilihan_penginapan == 1)
        {
            harga_penginapan = lama * 165000 * c;
        }
        else if (pilihan_penginapan == 2)
        {
            harga_penginapan = lama * 285000 * c;
        }
        else if (pilihan_penginapan == 3)
        {
            harga_penginapan = lama * 315000 * c;
        }
        else if (pilihan_penginapan == 4)
        {
            harga_penginapan = lama * 305000 * c;
        }
        else if (pilihan_penginapan == 5)
        {
            harga_penginapan = lama * 185000 * c;
        }
        else if (pilihan_penginapan == 6)
        {
            harga_penginapan = lama * 150000 * c;
        }
        else if (pilihan_penginapan == 7)
        {
            harga_penginapan = lama * 290000 * c;
        }
        else if (pilihan_penginapan == 8)
        {
            harga_penginapan = lama * 550000 * c;
        }
        else if (pilihan_penginapan == 9)
        {
            harga_penginapan = lama * 610000 * c;
        }
        else if (pilihan_penginapan == 10)
        {
            harga_penginapan = lama * 880000 * c;
        }
    }
    else if (b == 3)
    {
        point(72, 15);
        puts("=================================");
        point(72, 16);
        puts("|     DAFTAR HOTEL BINTANG 5    |"); //menampilkan nama - nama hotel bintang 5 dan harga - harga hotel bintang 5
        point(72, 17);
        puts("=================================");
        point(72, 18);
        puts("|Aryaduta                       |");
        point(72, 19);
        puts("|Grand Mega                     |");
        point(72, 20);
        puts("|Umadathu                       |");
        point(72, 21);
        puts("|Taman Wana                     |");
        point(72, 22);
        puts("|Vision Resort                  |");
        point(72, 23);
        puts("|UnudOne                        |");
        point(72, 24);
        puts("|Rising Star                    |");
        point(72, 25);
        puts("|The Klumpu Bali                |");
        point(72, 26);
        puts("|Taman Sari Resort              |");
        point(72, 27);
        puts("|Nugraha Lovina                 |");
        point(72, 28);
        puts("=================================");
        point(72, 29);
        printf("dimana anda ingin menginap? :");
        scanf("%d", &pilihan_penginapan);
        if (pilihan_penginapan == 1)
        {
            harga_penginapan = lama * 1000000 * c;
        }
        else if (pilihan_penginapan == 2)
        {
            harga_penginapan = lama * 1500000 * c;
        }
        else if (pilihan_penginapan == 3)
        {
            harga_penginapan = lama * 340000 * c;
        }
        else if (pilihan_penginapan == 4)
        {
            harga_penginapan = lama * 1000000 * c;
        }
        else if (pilihan_penginapan == 5)
        {
            harga_penginapan = lama * 400000 * c;
        }
        else if (pilihan_penginapan == 6)
        {
            harga_penginapan = lama * 360000 * c;
        }
        else if (pilihan_penginapan == 7)
        {
            harga_penginapan = lama * 300000 * c;
        }
        else if (pilihan_penginapan == 8)
        {
            harga_penginapan = lama * 5000000 * c;
        }
        else if (pilihan_penginapan == 9)
        {
            harga_penginapan = lama * 1200000 * c;
        }
        else if (pilihan_penginapan == 10)
        {
            harga_penginapan = lama * 650000 * c;
        }
    }
    else if (b == 4 && c <= 4)
    {
        point(72, 15);
        puts("==============================");
        point(72, 16);
        puts("|         DAFTAR VILLA       |"); //menampilkan nama - nama daftar villa dan harga - harga daftar villa
        point(72, 17);
        puts("==============================");
        point(72, 18);
        puts("|De Bharata                  |");
        point(72, 19);
        puts("|Banyumas                    |");
        point(72, 20);
        puts("|Hati Indah                  |");
        point(72, 21);
        puts("|Madewi Surf                 |");
        point(72, 22);
        puts("|Karma Loka                  |");
        point(72, 23);
        puts("|L'Orange Bali               |");
        point(72, 24);
        puts("|Akasa Villa Tulamben        |");
        point(72, 25);
        puts("|Asli Bali                   |");
        point(72, 26);
        puts("|Amertha                     |");
        point(72, 27);
        puts("|Araminth                    |");
        point(72, 28);
        puts("==============================");
        point(72, 29);
        printf("dimana anda ingin menginap? :");
        scanf("%d", &pilihan_penginapan);
        if (pilihan_penginapan == 1)
        {
            harga_penginapan = lama * 1320000;
        }
        else if (pilihan_penginapan == 2)
        {
            harga_penginapan = lama * 1200000;
        }
        else if (pilihan_penginapan == 3)
        {
            harga_penginapan = lama * 4000000;
        }
        else if (pilihan_penginapan == 4)
        {
            harga_penginapan = lama * 420000;
        }
        else if (pilihan_penginapan == 5)
        {
            harga_penginapan = lama * 235000;
        }
        else if (pilihan_penginapan == 6)
        {
            harga_penginapan = lama * 1530000;
        }
        else if (pilihan_penginapan == 7)
        {
            harga_penginapan = lama * 335000;
        }

        else if (pilihan_penginapan == 8)
        {
            harga_penginapan = lama * 1000000;
        }
        else if (pilihan_penginapan == 9)
        {
            harga_penginapan = lama * 1425000;
        }
        else if (pilihan_penginapan == 10)
        {
            harga_penginapan = lama * 500000;
        }
        else
        {
            printf("salah");
        }
    }
    else
    {
        printf("salah");
    }

    clean();
}
