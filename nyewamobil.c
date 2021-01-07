int pilihanint() //menampilkan penyewaan mobil dan daftar daftar mobil yang telah disediakan
{
    proses_menu(); //memanggil fungsi proses menu
    point(68, 15);
    puts("=========================================");
    point(68, 16);
    puts("|             DAFTAR MOBIL              |");
    point(68, 17);
    puts("=========================================");
    point(68, 18);
    puts("|1. Mobil (5 Orang)                     |");
    point(68, 19);
    puts("|2. Bis Mini                            |");
    point(68, 20);
    puts("|3. Bis Besar                           |");
    point(68, 21);
    puts("=========================================");
    point(68, 22);
    printf("Ketikkan pilihan anda : ");
    scanf("%d", &pilihmobil); //menyimpan data pada variabel pilihmobil

    if (pilihmobil == 1) //jika memilih mobil (5 orang)
    {
        point(68, 23);
        printf("Harga int perjam %d", MOBIL1);
        point(68, 24);
        printf("Anda mau menyewa mobil berapa jam : ");
        scanf("%d", &jam); //menyimpan data pada variabel jam
        hargaint = jam * MOBIL1; //menghitung pembayaran penyewaan mobil (5 orang)
    }
    else if (pilihmobil == 2) //jika memilih bis mini
    {
        point(68, 23);
        printf("Harga int perjam %d", MOBIL2);
        point(68, 24);
        printf("Anda mau menyewa mobil berapa jam : ");
        scanf("%d", &jam); //menyimpan data pada variabel jam
        hargaint = jam * MOBIL2; //menghitung pembayaran penyewaan bis mini
    }
    else if (pilihmobil == 3) //jika memilih bis besar
    {
        point(68, 23);
        printf("Harga int perjam %d", MOBIL3);
        point(68, 24);
        printf("Anda mau menyewa mobil berapa jam : ");
        scanf("%d", &jam); //menyimpan data pada variabel jam
        hargaint = jam * MOBIL3; //menghitung pembayaran penyewaan bis besar
    }
    else
    {
        point(68, 23);
        printf("Input yang anda masukkan salah!");
    }
    clean(); //membersihkan tampilan layar
}
