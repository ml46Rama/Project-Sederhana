int int_guide(int jumlah_guide, int jam_guide) //untuk menampilkan fitur penyewaan tour guide
{
    proses_menu(); //memanggil fungsi proses_menu
    point(68, 15);
    puts("===========================================");
    point(68, 16);
    puts("|          PENYEWAAN TOUR GUIDE           |");
    point(68, 17);
    puts("===========================================");
    point(68, 18);
    printf("Anda ingin berapa tour guide?    : ");
    scanf("%d", &jumlah_guide); //menyimpan jumlah guide yang diinput user
    point(68, 19);
    printf("Anda ingin berapa jam menyewa ?  : ");
    scanf("%d", &jam_guide); //menyimpan jam sewa guide yang diinput user

    jumlah_int = jumlah_guide * jam_guide * 20000; //menghitung pembayaran dari penyewaan tour guide

    return jumlah_int;
}
