int input_jarak(int jarak, int kendaraan, int bbm)
{
    proses_menu();
    point(55, 15);
    puts("=============================================================================");
    point(55, 16);
    puts("|                               JARAK & MOBIL                               |");
    point(55, 17);
    puts("=============================================================================");
    point(55, 18);
    printf("|     Cek jarak tempuh di google maps dan sesuaikan dengan kendaraan anda    |");
    point(55, 19);
    puts("=============================================================================");
    point(55, 20);
    printf(" Ketikkan perkiraan jarak tempat anda sekarang ke tujuan  : ");
    scanf("%d", &jarak);
    point(55, 21);
    printf("          1. Mobil             |||                     2. Motor            ");
    point(55, 22);
    printf(" Ketikkan kode kendaraan yang anda pergunakan             : ");
    scanf("%d", &kendaraan);
    point(55, 23);
    printf("        1. Pertalite           |||                  2. Pertamax            ");
    point(55, 24);
    printf(" Ketikkan kode bahan bakar yang anda pergunakan           : ");
    scanf("%d", &bbm);

    if (kendaraan == 1)
    {
        if (bbm == 1)
            bensin = (jarak * KONS * PERTALITE) / K_MOBIL;
        else if (bbm == 2)
            bensin = (jarak * KONS * PERTAMAX) / K_MOBIL;
    }
    else if (kendaraan == 2)
    {
        if (bbm == 1)
            bensin = (jarak * KONS * PERTALITE) / K_MOTOR;
        else if (bbm == 2)
            bensin = (jarak * KONS * PERTAMAX) / K_MOTOR;
    }
    else
        printf("salah!");
    clean();
}
