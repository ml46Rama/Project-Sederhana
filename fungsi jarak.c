int input_jarak(int jarak, int kendaraan, int bbm) //menampilkan jarak tempat wisata yang akan dituju beserta bbm yang digunakan dan harganya
{
    proses_menu(); //memanggil fungsi proses_menu
    point(55, 15);
    puts("=============================================================================");
    point(55, 16);
    puts("|                               JARAK & MOBIL                               |");
    point(55, 17);
    puts("=============================================================================");
    point(55, 18);
    printf("|     Cek jarak tempuh di google maps dan sesuaikan dengan kendaraan anda    |"); //user disuruh untuk melihat jarak pada google maps
    point(55, 19);
    puts("=============================================================================");
    point(55, 20);
    printf(" Ketikkan perkiraan jarak tempat anda sekarang ke tujuan  : ");
    scanf("%d", &jarak); //menyimpan jarak yang telah diinput user
    point(55, 21);
    printf("          1. Mobil             |||                     2. Motor            "); //user memilih kendaraan
    point(55, 22);
    printf(" Ketikkan kode kendaraan yang anda pergunakan             : ");
    scanf("%d", &kendaraan); //menyimpan kode kendaraan yang telah diinput user
    point(55, 23);
    printf("        1. Pertalite           |||                  2. Pertamax            "); //user memilih bbm yang digunakan
    point(55, 24);
    printf(" Ketikkan kode bahan bakar yang anda pergunakan           : ");
    scanf("%d", &bbm); //menyimpan kode bahan bakar yang telah diinput user

    if (kendaraan == 1) //jika memilih mobil, ini akan tereksekusi
    {
        if (bbm == 1)
            bensin = (jarak * KONS * PERTALITE) / K_MOBIL; //menghitung biaya harga bensin pertalite jika menggunakan mobil
        else if (bbm == 2)
            bensin = (jarak * KONS * PERTAMAX) / K_MOBIL; //menghitung biaya harga bensin pertamax jika menggunakan mobil
    }
    else if (kendaraan == 2) //jika memilih motor, ini akan tereksekusi
    {
        if (bbm == 1)
            bensin = (jarak * KONS * PERTALITE) / K_MOTOR; //menghitung biaya harga bensin pertalite jika menggunakan motor
        else if (bbm == 2)
            bensin = (jarak * KONS * PERTAMAX) / K_MOTOR; //menghitung biaya harga bensin pertamax jika menggunakan motor
    }
    else
        printf("salah!");
    clean();
}
