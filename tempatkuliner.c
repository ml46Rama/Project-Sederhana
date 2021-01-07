void input_tempatmakan() //menampilkan tempat-tempat makan yang telah disediakan
{
    proses_menu();
    point(53, 15);
    puts("=======================================================");
    point(53, 16);
    puts("|                   DAFTAR KABUPATEN                  |");
    point(53, 17);
    puts("=======================================================");
    point(53, 18);
    puts("|1. Badung                   |6. Gianyar              |");
    point(53, 19);
    puts("|2. Denpasar                 |7. Karangasem           |");
    point(53, 20);
    puts("|3. Tabanan                  |8. Bangli               |");
    point(53, 21);
    puts("|4. Jembrana                 |9. Buleleng Barat       |");
    point(53, 22);
    puts("|5. Klungkung                |10.Buleleng Timur       |");
    point(53, 23);
    puts("=======================================================");
    point(53, 24);
    printf("Input kode kabupaten yang ingin kamu kunjung : ");
    scanf("%d", &kabupaten);
    clean();
    if (kabupaten == 1) //jika memilih kode 1 maka akan menampilkan tempat makan yang ada di badung
    {
        proses_menu();
        point(60, 15);
        puts("================================================");
        point(60, 16);
        puts("|                    Badung                    |");
        point(60, 17);
        puts("================================================");
        point(60, 18);
        puts("| <Nama Restoran>               ||   < Harga > |");
        point(60, 19);
        puts("| 1. D'Cost                     ||  Rp. 60.000 |");
        point(60, 20);
        puts("| 2. Plengkung                  ||  Rp. 100.000|");
        point(60, 21);
        puts("| 3. Warung Kampung             ||  Rp. 50.000 |");
        point(60, 22);
        puts("| 4. Warung Sate Tacik Lukluk   ||  Rp. 75.000 |");
        point(60, 23);
        puts("================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else if (kabupaten == 2) //jika memilih kode 2 maka akan menampilkan tempat makan yang ada di denpasar
    {
        proses_menu();
        point(60, 15);
        puts("================================================");
        point(60, 16);
        puts("|                   Denpasar                  | ");
        point(60, 17);
        puts("================================================");
        point(60, 18);
        puts("| <Nama Restoran>                ||  < Harga > |");
        point(60, 19);
        puts("| 1. Goemerot                    || Rp. 75.000 |");
        point(60, 20);
        puts("| 2. Warung Wardani              || Rp. 30.000 |");
        point(60, 21);
        puts("| 3. Jebak Bali Kuliner          || Rp. 75.000 |");
        point(60, 22);
        puts("| 4. Sate Plecing Arjuna         || Rp. 35.000 |");
        point(60, 23);
        puts("================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else if (kabupaten == 3) //jika memilih kode 3 maka akan menampilkan tempat makan yang ada di gianyar
    {
        proses_menu();
        point(60, 15);
        puts("================================================");
        point(60, 16);
        puts("|                    Gianyar                   |");
        point(60, 17);
        puts("================================================");
        point(60, 18);
        puts("| <Nama Restoran>            ||     < Harga >  |");
        point(60, 19);
        puts("| 1. The Jungle Resto        ||    Rp. 75.000  |");
        point(60, 20);
        puts("| 2. Genius Cafe             ||    Rp. 100.000 |");
        point(60, 21);
        puts("| 3. Dharma Giri Restaurant  ||    Rp. 50.000  |");
        point(60, 22);
        puts("| 4. Ngerodok Resto          ||    Rp. 50.000  |");
        point(60, 23);
        puts("================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else if (kabupaten == 4) //jika memilih kode 4 maka akan menampilkan tempat makan yang ada di klungkung
    {
        proses_menu();
        point(60, 15);
        puts("=================================================");
        point(60, 16);
        puts("|                   Klungkung                   |");
        point(60, 17);
        puts("=================================================");
        point(60, 18);
        puts("| <Nama Restoran>                ||  < Harga >  |");
        point(60, 19);
        puts("| 1. Warung Bung Tomo            || Rp. 50.000  |");
        point(60, 20);
        puts("| 2. Merta Sari Restaurant       || Rp. 100.000 |");
        point(60, 21);
        puts("| 3. Papilas Coffee And Roastery || Rp. 50.000  |");
        point(60, 22);
        puts("| 4. Warung Jumpu                || Rp. 50.000  |");
        point(60, 23);
        puts("=================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else if (kabupaten == 5) //jika memilih kode 5 maka akan menampilkan tempat makan yang ada di bangli
    {
        proses_menu();
        point(60, 15);
        puts("=================================================");
        point(60, 16);
        puts("|                    Bangli                     |");
        point(60, 17);
        puts("=================================================");
        point(60, 18);
        puts("| <Nama Restoran>               ||   < Harga >  |");
        point(60, 19);
        puts("| 1. The Amora Bali             ||  Rp. 150.000 |");
        point(60, 20);
        puts("| 2. Warung Abang Sari          ||  Rp. 125.000 |");
        point(60, 21);
        puts("| 3. Warung Makan Midori        ||  Rp. 100.000 |");
        point(60, 22);
        puts("| 4. Nasi Kajeng                ||  Rp. 50.000  |");
        point(60, 23);
        puts("=================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else if (kabupaten == 6) //jika memilih kode 6 maka akan menampilkan tempat makan yang ada di jembrana
    {
        proses_menu();
        point(60, 15);
        puts("=================================================");
        point(60, 16);
        puts("|                   Jembrana                    |");
        point(60, 17);
        puts("=================================================");
        point(60, 18);
        puts("| <Nama Restoran>               ||   < Harga >  |");
        point(60, 19);
        puts("| 1. Rumah Makan Tegal Dadong   ||  Rp. 40.000  |");
        point(60, 20);
        puts("| 2. Warung Jegeg Bagus         ||  Rp. 60.000  |");
        point(60, 21);
        puts("| 3. Kedai Jukung               ||  Rp. 30.000  |");
        point(60, 22);
        puts("| 4. Waru Kedai Steak           ||  Rp. 75.000  |");
        point(60, 23);
        puts("=================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else if (kabupaten == 7) //jika memilih kode 7 maka akan menampilkan tempat makan yang ada di karangasem
    {
        proses_menu();
        point(60, 15);
        puts("=================================================");
        point(60, 16);
        puts("|                   Karangasem                  |");
        point(60, 17);
        puts("=================================================");
        point(60, 18);
        puts("| <Nama Restoran>               ||   < Harga >  |");
        point(60, 19);
        puts("| 1. Bali Asli Restaurant       ||  Rp. 270.000 |");
        point(60, 20);
        puts("| 2. Pondok Mina                ||  Rp. 90.000  |");
        point(60, 21);
        puts("| 3. Warung Biker               ||  Rp. 70.000  |");
        point(60, 22);
        puts("| 4. Warung Padang Kecag        ||  Rp. 80.000  |");
        point(60, 23);
        puts("=================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else if (kabupaten == 8) //jika memilih kode 8 maka akan menampilkan tempat makan yang ada di tabanan
    {
        proses_menu();
        point(60, 15);
        puts("=================================================");
        point(60, 16);
        puts("|                    Tabanan                    |");
        point(60, 17);
        puts("=================================================");
        point(60, 18);
        puts("| <Nama Restoran>               ||   < Harga >  |");
        point(60, 19);
        puts("| 1. Warung Tanpa Nama          ||  Rp. 100.000 |");
        point(60, 20);
        puts("| 2. Warung Makan Dukuh         ||  Rp. 75.000  |");
        point(60, 21);
        puts("| 3. Danke                      ||  Rp. 75.000  |");
        point(60, 22);
        puts("| 4. Paon Mak Mo                ||  Rp. 90.000  |");
        point(60, 23);
        puts("=================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else if (kabupaten == 9) //jika memilih kode 9 maka akan menampilkan tempat makan yang ada di buleleng barat
    {
        proses_menu();
        point(60, 15);
        puts("=================================================");
        point(60, 16);
        puts("|                 Buleleng Barat                |");
        point(60, 17);
        puts("=================================================");
        point(60, 18);
        puts("| <Nama Restoran>               ||   < Harga >  |");
        point(60, 19);
        puts("| 1. Tanjung Alam               ||  Rp. 110.000 |");
        point(60, 20);
        puts("| 2. Terrasse Tamblingan Sari   ||  Rp. 150.000 |");
        point(60, 21);
        puts("| 3. Warung Bik Juk             ||  Rp. 80.000  |");
        point(60, 22);
        puts("| 4. Blayag Buleleng            ||  Rp. 10.000  |");
        point(60, 23);
        puts("=================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else if (kabupaten == 10) //jika memilih kode 10 maka akan menampilkan tempat makan yang ada di buleleng timur
    {
        proses_menu();
        point(60, 15);
        puts("=================================================");
        point(60, 16);
        puts("|                 Buleleng Timur                |");
        point(60, 17);
        puts("=================================================");
        point(60, 18);
        puts("| <Nama Restoran>               ||   < Harga >  |");
        point(60, 19);
        puts("| 1. Rumah Makan Manalagi 2     ||  Rp. 75.000  |");
        point(60, 20);
        puts("| 2. RM Wina Segara             ||  Rp. 75.000  |");
        point(60, 21);
        puts("| 3. Warung Jegeg               ||  Rp. 60.000  |");
        point(60, 22);
        puts("| 4. Paon Ummi Singaraja        ||  Rp. 150.000 |");
        point(60, 23);
        puts("=================================================");
        point(60, 24);
        printf("Ketikkan kode pilihan anda  : ");
        scanf("%d", &makan);
        point(60, 25);
        printf("Ketikkan harga yang dipilih : ");
        scanf("%d", &harga);
    }
    else
    {
        proses_menu();
        point(60, 25);
        printf(" Input yang anda masukkan salah!");
    }
    clean();
}
