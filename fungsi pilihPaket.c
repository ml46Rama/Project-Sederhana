void pilihPaket(sign_up mhs) //tampilan fitur pemilihan paket
{
    proses_menu();
    point(45, 16);
    puts("+-------------------------------------------------------------------------------------+");
    point(45, 17);
    puts("|                            JENIS PAKET PERJALANAN WISATA                            |");
    point(45, 18);
    puts("+-------------------------------------------------------------------------------------+");
    point(45, 19);
    puts("| 1.Paket berdasarkan kabupaten               | 2.Paket berdasarkan kategori          |");
    point(45, 20);
    puts("|    1.  Badung      6.  Gianyar              |    1.  Wisata Edukasi                 |");
    point(45, 21);
    puts("|    2.  Denpasar    7.  Karangasem           |    2.  Wisata Konservasi              |");
    point(45, 22);
    puts("|    3.  Tabanan     8.  Bangli               |    3.  Wisata Religi                  |");
    point(45, 23);
    puts("|    4.  Jembrana    9.  Buleleng Barat       |    4.  Wisata Pantai                  |");
    point(45, 24);
    puts("|    5.  Klungkung   10. Buleleng Timur       |    5.  Wisata Shopping                |");
    point(45, 25);
    puts("+-------------------------------------------------------------------------------------+");
    point(45, 26);
    puts("|     Paket di atas adalah paket yang menyediakan fasilitas untuk satu orang saja     |");
    point(45, 27);
    puts("+-------------------------------------------------------------------------------------+");
    point(45, 28);
    puts("| Paket di atas telah include dengan biaya makan, jasa tour guide, dan sewa kendaraan |");
    point(45, 29);
    puts("+-------------------------------------------------------------------------------------+");
    point(45, 30);
    printf(" Apakah anda yakin untuk memilih paket ini ?");
    point(45, 31);
    printf("|NO (0)|  |YES (1)|");
    point(45, 32);
    printf(" Ketikan pilihan anda : ");
    scanf("%d", &askPaket);

    switch (askPaket)
    {
    case 0:
        menu_cys(mhs);
        break;
    case 1:
        hargaPaket(); //memanggil fungsi hargaPaket
        break;
    default:
        break;
    }
}
