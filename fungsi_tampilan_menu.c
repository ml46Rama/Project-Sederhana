int menu_cys(sign_up mhs)
{
    proses_menu();
menu:
    point(52, 15);
    puts("=============================================================");
    point(52, 16);
    puts("|                  +---------------------+                  |");
    point(52, 17);
    puts("|                  |    Terima Kasih     |                  |");
    point(52, 18);
    puts("|                  | Akun Anda Terdaftar |                  |");
    point(52, 19);
    puts("|                  |Silahkan Memilih Menu|                  |");
    point(52, 20);
    puts("|                  +---------------------+                  |");
    point(52, 21);
    puts("=============================================================");
    point(52, 23);
    puts("=============================================================");
    point(52, 24);
    puts("|                           Menu                            |");
    point(52, 25);
    puts("=============================================================");
    point(52, 26);
    printf("|1.Daftar Tempat Wisata||2.Inputan Wisata||3.Langsung Paket||");
    point(52, 27);
    puts("-------------------------------------------------------------");
    point(52, 28);
    puts("|  Deskripsi Daftar pilihan  |                              |");
    point(52, 29);
    puts("I----------------------------I                              |");
    point(52, 30);
    puts("|1. Untuk Menampilkan Daftar Tempat Wisata                  |");
    point(52, 31);
    puts("|2. Menginput Sesuai Kebutuhan User (Sewa mobil, guide, dll)|");
    point(52, 32);
    puts("|3. Memesan Paket Wisata                                    |");
    point(52, 33);
    puts("=============================================================");
    point(52, 34);
    printf("Masukkan pilihan anda : ");
    scanf("%d", &pilihan_program);
    clean();
    switch (pilihan_program)
    {

    case 1:
        pilihan_kabupaten(); //menuju fungsi untuk melihat daftar tempat int
        clean();
        goto menu;
        break;

    case 2:
        proses_menu();
        tampilan_pilihan_kabupaten();
        menu_inputan(mhs);
        clean();
        goto menu;
        break;

    case 3:
        pilihPaket(mhs);
        writeKuitansiPaket(mhs);
        penutup();
        exit(0);
        break;
    default:
        goto menu;
        break;
    }
    clean();
}
int menu_inputan(sign_up mhs)
{
    proses_menu();
inputan:
    point(45, 16);
    puts("===========================================================================");
    point(45, 17);
    puts("|                              MENU SELANJUTNYA                           |");
    point(45, 18);
    puts("===========================================================================");
    point(45, 19);
    puts("|          -WAJIB-         ||      -OPSIONAL-     ||      -LAINNYA-       |");
    point(45, 20);
    puts("| 1. Tempat Wisata         || 3. Tempat Makan     || 8. Tampilkan Data    |");
    point(45, 21);
    puts("| 2. Tiket Masuk           || 4. Tour Guide       || 9. Exit              |");
    point(45, 22);
    puts("|                          || 5. Sewa Mobil       ||                      |");
    point(45, 23);
    puts("|                          || 6. Jarak dan Bensin ||                      |");
    point(45, 24);
    puts("|                          || 7. Pesan Penginapan ||                      |");
    point(45, 25);
    puts("===========================================================================");
    point(45, 26);
    printf("Masukkan inputan yang anda inginkan : ");
    scanf("%d", &pilihan_menu);
    clean();

    switch (pilihan_menu)
    {
    case 1:
        input_data();
        proses_menu();
        goto inputan;
        break;
    case 2:
        tiket_masuk();
        clean();
        proses_menu();
        goto inputan;
        break;

    case 3:
        input_tempatmakan();
        clean();
        proses_menu();
        goto inputan;
        break;

    case 4:
        int_guide(jumlah_guide, jam_guide);
        clean();
        proses_menu();
        goto inputan;
        break;

    case 5:
        pilihanint();
        clean();
        proses_menu();
        goto inputan;
        break;

    case 6:
        input_jarak(jarak, kendaraan, bbm);
        clean();
        proses_menu();
        goto inputan;
        break;

    case 7:
        fungsi_hotel();
        clean();
        proses_menu();
        goto inputan;
        break;
    case 8:
        tampilkan();
        tampilkan_data(mhs);
        break;
    case 9:
        penutup();
        writeKuitansi(mhs);
        exit(0);
    default:
        break;
    }
    clean();
}
