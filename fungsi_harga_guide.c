int int_guide(int jumlah_guide, int jam_guide)
{
    proses_menu();
    point(68, 15);
    puts("===========================================");
    point(68, 16);
    puts("|          PENYEWAAN TOUR GUIDE           |");
    point(68, 17);
    puts("===========================================");
    point(68, 18);
    printf("Anda ingin berapa tour guide?    : ");
    scanf("%d", &jumlah_guide);
    point(68, 19);
    printf("Anda ingin berapa jam menyewa ?  : ");
    scanf("%d", &jam_guide);

    jumlah_int = jumlah_guide * jam_guide * 20000;

    return jumlah_int;
}

