int menu_cys(sign_up mhs) //menampilkan beberapa main fitur dari program choose your vacation
{
    proses_menu(); //memanggil fungsi proses menu
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
    scanf("%d", &pilihan_program); //menyimpan data pada variabel pilihan_program
    clean(); //membersihkan tampilan layar
    switch (pilihan_program)
    {

    case 1:
        pilihan_kabupaten(); //menuju fungsi untuk melihat daftar tempat int
        clean(); //membersihkan tampilan layar
        goto menu;
        break;

    case 2:
        proses_menu();    //menuju menu fitur-fitur dari program chose your vacation
        tampilan_pilihan_kabupaten(); //memanggil fungsi tampilan pilihan kabupaten
        menu_inputan(mhs);      //tampilan menu menu inputan
        clean(); //membersihkan tampilan layar
        goto menu;
        break;

    case 3:
        pilihPaket(mhs); //menuju fitur paket-paket yang telah disediakan
        writeKuitansiPaket(mhs);  //untuk membuat kwitansi paket
        penutup();      //untuk menampilkan kata - kata penutup
        exit(0);        //untuk menyelesaikan program
        break;
    default:
        goto menu;
        break;
    }
    clean();
}
int menu_inputan(sign_up mhs) //untuk menampilkan fitur menu inputan
{
    proses_menu(); //memanggil fungsi proses menu
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
    puts("|1. Input Tempat Wisata    ||3. Tempat Makan      ||8. Tampilkan Data     |");
    point(45, 21);
    puts("|2. Input Tiket Masuk      ||4. Menyewa Guide     ||9. Exit               |");
    point(45, 22);
    puts("|                          ||5. Menyewa Mobil     ||                      |");
    point(45, 23);
    puts("|                          ||6. Menghitung bensin ||                      |");
    point(45, 24);
    puts("|                          ||7. Pesan Penginapan  ||                      |");
    point(45, 25);
    puts("===========================================================================");
    point(45, 26);
    printf("Masukkan inputan yang anda inginkan : ");
    scanf("%d", &pilihan_menu); //menyimpan data pada variabel pilihan_menu
    clean(); //membersihkan tampilan layar

    switch (pilihan_menu)
    {
    case 1:
        input_data();   //user menginput tempat wisata yang ingin dituju (maksimal 5)
        proses_menu(); //menuju menu fitur-fitur dari program chose your vacation
        goto inputan;
        break;
    case 2:
        tiket_masuk(); //user menginput tempat tujuan dan harga tiket
        clean(); //membersihkan tampilan layar
        proses_menu(); //menuju menu fitur-fitur dari program chose your vacation
        goto inputan;
        break;

    case 3:
        input_tempatmakan(); //user menginput nama nama tempat makan yang disediakan
        clean(); //membersihkan tampilan layar
        proses_menu(); //menuju menu fitur-fitur dari program chose your vacation
        goto inputan;
        break;

    case 4:
        int_guide(jumlah_guide, jam_guide); //user menginput penyewaan guide
        clean(); //membersihkan tampilan layar
        proses_menu(); //menuju menu fitur-fitur dari program chose your vacation
        goto inputan;
        break;

    case 5:
        pilihanint(); //user menginput penyewaan mobil
        clean(); //membersihkan tampilan layar
        proses_menu(); //menuju menu fitur-fitur dari program chose your vacation
        goto inputan;
        break;

    case 6:
        input_jarak(jarak, kendaraan, bbm); //user menginput jarak dan bensin yang kira kira digunakan
        clean(); //membersihkan tampilan layar
        proses_menu(); //menuju menu fitur-fitur dari program chose your vacation
        goto inputan;
        break;

    case 7:
        fungsi_hotel(); //user menginput penyewaan hotel
        clean(); //membersihkan tampilan layar
        proses_menu(); //menuju menu fitur-fitur dari program chose your vacation
        goto inputan;
        break;
    case 8:
        tampilkan(); //user dapat melihat tampilan data yang sudah diinput
        tampilkan_data(mhs);  //memanggil funsgi tampilkan_data
        break;
    case 9:
        penutup(); //user diarahkan menuju keluar dari program
        writeKuitansi(mhs); //membuat hasil data user yang telah diinput berupa kwitansi dalam bentuk file .txt
        exit(0);
    default:
        break;
    }
    clean(); //membersihkan tampilan layar
}
