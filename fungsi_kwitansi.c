int writeKuitansi(sign_up mhs)
{
    time_t waktuSekarang; //tanggal user menginput data
    time(&waktuSekarang);
    struct tm *waktuUser = localtime(&waktuSekarang);

    FILE *pr;
    pr = fopen("KwitansiPembayaran.txt", "a+");
    fprintf(pr, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pr, "\n\t\t\t\t\t\t|-----------------------Kuitansi Pembayaran----------------------|");
    fprintf(pr, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pr, "\n\t\t\t\t\t\t|%i/%i/%i                                                       ", waktuUser->tm_mday, waktuUser->tm_mon + 1, waktuUser->tm_year + 1900);
    fprintf(pr, "\n\t\t\t\t\t\t|User atas nama %s                                                 \n", mhs.nama);
    fprintf(pr, "\n\t\t\t\t\t\t|                                                                ");
    fprintf(pr, "\n\t\t\t\t\t\t|Total Pembayaran                                                ");
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk tempat makan memakan biaya               : %d             ", harga);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk menyewa guide memakan biaya              : %d             ", jumlah_int);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk menyewa mobil memakan biaya              : %d             ", hargaint);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk estimasi bensin memakan biaya            : %d             ", bensin);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk harga penginapan memakan biaya           : %d             ", harga_penginapan);
    fprintf(pr, "\n\t\t\t\t\t\t|Untuk harga tiket masuk                        : %d             ", o * sum);
    fprintf(pr, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pr, "\n\t\t\t\t\t\t|Total Perkiraan Jumlah Biaya Liburan           = %d             ", harga + jumlah_int + hargaint + bensin + harga_penginapan + (o * sum));
    fprintf(pr, "\n\t\t\t\t\t\t==================================================================");

    fprintf(pr, "\n\t\t\t\t\t\t  -------------------------------------------------------------------");
    fprintf(pr, "\n\t\t\t\t\t\t +---Terima Kasih Telah Menggunakan Program Choose Your Vacation---+");
    fprintf(pr, "\n\t\t\t\t\t\t ***********************Selamat Berlibur****************************");
    fprintf(pr, "\n\t\t\t\t\t\t  -------------------------------------------------------------------");

    fclose(pr);
}
int writeKuitansiPaket(sign_up mhs)
{
    time_t waktuSekarang; //tanggal user menginput data
    time(&waktuSekarang);
    struct tm *waktuUser = localtime(&waktuSekarang);

    FILE *pt;
    pt = fopen("KwitansiPaket.txt", "a+");

    fprintf(pt, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pt, "\n\t\t\t\t\t\t|-----------------------Kuitansi Pembayaran----------------------|");
    fprintf(pt, "\n\t\t\t\t\t\t==================================================================");
    fprintf(pt, "\n\t\t\t\t\t\t||%i/%i/%i                                                         \n", waktuUser->tm_mday, waktuUser->tm_mon + 1, waktuUser->tm_year + 1900);
    fprintf(pt, "\t\t\t\t\t\t||Pemesanan atas nama %s                                           \n", mhs.nama);

    fprintf(pt, "\t\t\t\t\t\t||                                                                 \n");
    fprintf(pt, "\t\t\t\t\t\t||Total Pembayaran           =  %d                                 \n", hp);
    fprintf(pt, "\n\t\t\t\t\t\t  -------------------------------------------------------------------");
    fprintf(pt, "\n\t\t\t\t\t\t +---Terima Kasih Telah Menggunakan Program Choose Your Vacation---+");
    fprintf(pt, "\n\t\t\t\t\t\t ***********************Selamat Berlibur****************************");
    fprintf(pt, "\n\t\t\t\t\t\t  -------------------------------------------------------------------");

    fclose(pt);
}
