int pilihanint()
{
    proses_menu();
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
    scanf("%d", &pilihmobil);

    if (pilihmobil == 1)
    {
        point(68, 23);
        printf("Harga int perjam %d", MOBIL1);
        point(68, 24);
        printf("Anda mau menyewa mobil berapa jam : ");
        scanf("%d", &jam);
        hargaint = jam * MOBIL1;
    }
    else if (pilihmobil == 2)
    {
        point(68, 23);
        printf("Harga int perjam %d", MOBIL2);
        point(68, 24);
        printf("Anda mau menyewa mobil berapa jam : ");
        scanf("%d", &jam);
        hargaint = jam * MOBIL2;
    }
    else if (pilihmobil == 3)
    {
        point(68, 23);
        printf("Harga int perjam %d", MOBIL3);
        point(68, 24);
        printf("Anda mau menyewa mobil berapa jam : ");
        scanf("%d", &jam);
        hargaint = jam * MOBIL3;
    }
    else
    {
        point(68, 23);
        printf("Input yang anda masukkan salah!");
    }
    clean();
}
