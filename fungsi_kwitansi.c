int writeKuitansi(sign_up mhs) //mencetak data - data fitur yang telah diinput oleh user dalam bentuk file .txt
{
    time_t waktuSekarang; //tanggal user menginput data
    time(&waktuSekarang);
    struct tm *waktuUser = localtime(&waktuSekarang);

    FILE *pr;
    pr = fopen("KwitansiPembayaran.txt", "a+");
    fprintf(pr, "\n==================================================================");
    fprintf(pr, "\n|-----------------------Kuitansi Pembayaran----------------------|");
    fprintf(pr, "\n==================================================================");
    fprintf(pr, "\n|%i/%i/%i                                                       ", waktuUser->tm_mday, waktuUser->tm_mon + 1, waktuUser->tm_year + 1900);
    fprintf(pr, "\n|user atas nama %s                                                 \n", mhs.nama);
    fprintf(pr, "\n|                                                                ");
    fprintf(pr, "\n|Total Pembayaran                                                ");
    fprintf(pr, "\n|Untuk tempat makan memakan biaya               : %d             ", harga);
    fprintf(pr, "\n|Untuk menyewa guide memakan biaya              : %d             ", jumlah_int);
    fprintf(pr, "\n|Untuk menyewa mobil memakan biaya              : %d             ", hargaint);
    fprintf(pr, "\n|Untuk estimasi bensin memakan biaya            : %d             ", bensin);
    fprintf(pr, "\n|Untuk harga penginapan memakan biaya           : %d             ", harga_penginapan);
    fprintf(pr, "\n|Untuk harga tiket masuk                        : %d             ", o * sum);
    fprintf(pr, "\n==================================================================");
    fprintf(pr, "\n|Total Perkiraan Jumlah Biaya Liburan           = %d             ", harga + jumlah_int + hargaint + bensin + harga_penginapan + (o * sum));
    fprintf(pr, "\n==================================================================");

    fprintf(pr, "\n\t\t\t  -------------------------------------------------------------------");
    fprintf(pr, "\n\t\t\t +---Terima Kasih Telah Menggunakan Program Choose Your Vacation---+");
    fprintf(pr, "\n\t\t\t ***********************Selamat Berlibur****************************");
    fprintf(pr, "\n\t\t\t  -------------------------------------------------------------------");

    fclose(pr);
}
int writeKuitansiPaket(sign_up mhs) //mencetak data - data paket yang telah diinput oleh user dalam bentuk file .txt
{
    time_t waktuSekarang; //tanggal user menginput data
    time(&waktuSekarang);
    struct tm *waktuUser = localtime(&waktuSekarang);

    FILE *pt;
    pt = fopen("kwitansipaket.txt", "a+");

    fprintf(pt, "\n==================================================================");
    fprintf(pt, "\n|-----------------------Kuitansi Pembayaran----------------------|");
    fprintf(pt, "\n==================================================================");
    fprintf(pt, "||%i/%i/%i                                                         \n", waktuUser->tm_mday, waktuUser->tm_mon + 1, waktuUser->tm_year + 1900);
    fprintf(pt, "||pemesanan atas nama %s                                           \n", mhs.nama);

    fprintf(pt, "||                                                                 \n");
    fprintf(pt, "||Total Pembayaran           =  %d                                 \n", hp);
    fprintf(pt, "\n\t\t\t  -------------------------------------------------------------------");
    fprintf(pt, "\n\t\t\t +---Terima Kasih Telah Menggunakan Program Choose Your Vacation---+");
    fprintf(pt, "\n\t\t\t ***********************Selamat Berlibur****************************");
    fprintf(pt, "\n\t\t\t  -------------------------------------------------------------------");

    fclose(pt);
}
