int tampilkan_data(sign_up mhs) //menampilkan data yang telah user input
{
    int w; //digunakan untuk menyimpan inputan user (1/2)

    point(75, 15);
    puts("========================");
    point(75, 16);
    puts("|     TAMPILAN DATA    |");
    point(75, 17);
    puts("========================");
    point(75, 18);
    printf("|Tempat Makan      = %d", harga);
    point(75, 19);
    printf("|Menyewa Guide     = %d", jumlah_int);
    point(75, 20);
    printf("|Menyewa Mobil     = %d", hargaint);
    point(75, 21);
    printf("|Estimasi Bensin   = %d", bensin);
    point(75, 22);
    printf("|Penginapan       = %d", harga_penginapan);
    point(75, 23);
    printf("|Tiket            = %d", sumtot);
    point(75, 24);
    puts("========================");
    point(75, 25);
    printf("Total               = %d", harga + jumlah_int + hargaint + bensin + harga_penginapan + sumtot);
    point(75, 26);
    printf("ingin kembali ke menu    ? ");
    point(75, 27);
    printf("1 jika iya|2 jika mengakhiri     :");
    scanf("%d", &w); //menyimpan data pada variabel w

    if (w == 1)
    {
        menu_inputan(mhs); //memanggil fungsi menu_inputan
    }
    else if (w == 2)
    {
        clean(); //memanggil fungsi view
        penutup(); //memanggil fungsi penutup
        writeKuitansi(mhs); //memanggil fungsi untuk mencetak kuitansi
        exit(0);
    }
    else
    {
        point(75, 29);
        printf("anda memasukkan kode yang salah");
    }
    clean(); //membersihkan tampilan layar
    return 0;
}
