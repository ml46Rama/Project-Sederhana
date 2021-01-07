int tampilkan_data(sign_up mhs)
{
    int w;

    point(65, 15);
    puts("======================================");
    point(65, 16);
    puts("|            TAMPILAN DATA           |");
    point(65, 17);
    puts("======================================");
    point(65, 18);
    printf("|Tempat Makan          = %d        ", harga);
    point(65, 19);
    printf("|Menyewa Guide         = %d        ", jumlah_int);
    point(65, 20);
    printf("|Menyewa Mobil         = %d        ", hargaint);
    point(65, 21);
    printf("|Estimasi Bensin       = %d        ", bensin);
    point(65, 22);
    printf("|Penginapan            = %d        ", harga_penginapan);
    point(65, 23);
    printf("|Tiket                 = %d        ", sumtot);
    point(65, 24);
    puts("=====================================|");
    point(65, 25);
    printf("Siapkan Budget Sebesar = %d", harga + jumlah_int + hargaint + bensin + harga_penginapan + sumtot);
    point(65, 30);
    puts("=====================================|");
    point(65, 31);
    printf(" Apakah anda ingin kembali ke bagian menu sebelumnya ? ");
    point(65, 32);
    printf(" Ketik (1) Jika IYA | Ketik (2) Jika SELESAI : ");
    scanf("%d", &w);

    if (w == 1)
    {
        menu_inputan(mhs);
    }
    else if (w == 2)
    {
        clean();
        penutup();
        writeKuitansi(mhs);
        exit(0);
    }
    else
    {
        point(65, 34);
        printf(" Kode yang anda masukkan tidak sesuai");
    }
    clean();
    return 0;
}
