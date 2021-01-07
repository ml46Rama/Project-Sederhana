sign_up masuk_akun(sign_up mhs) //user disuruh masuk dulu untuk membuat akun, seperti input nama, password serta umur
{
    point(52, 15);
    puts("^=================================================================^");
    point(52, 16);
    puts("|                                                                 |");
    point(52, 17);
    puts("|                        SELAMAT DATANG                           |");
    point(52, 18);
    puts("|                         PADA PROGRAM                            |");
    point(52, 19);
    puts("|                     CHOOSE YOUR VACATION                        |");
    point(52, 20);
    puts("|                                                                 |");
    point(52, 21);
    puts("+=================================================================+");
    point(52, 22);
    puts("|  Untuk pertama kali masuk anda harus sign-in terlebih dahulu!   |");
    point(52, 23);
    puts("+-----------------------------------------------------------------+");
    point(52, 24);
    printf(" Masukkan umur anda        : "); //fungsi umur nanti akan berkaitan dengan harga tiket
    scanf("%d", &umur);
    point(52, 25);
    printf(" Masukkan nama             : "); //menginputkan nama user
    getchar();
    gets(mhs.nama);
    point(52, 26);
    printf(" Masukkan password anda    : ");
    scanf("%s", &mhs.password);

    clean();
    return mhs;
}

sign_up menu_login(sign_up mhs) //user akan disuruh memverifikasi dengan menginput nama dan password
{
    proses_menu();
pilihan:
    point(48, 15);
    puts("^======================================================================^");
    point(48, 16);
    puts("|                                                                      |");
    point(48, 17);
    puts("|                             -VERFIKASI-                              |");
    point(48, 18);
    puts("|                                                                      |");
    point(48, 19);
    puts("+======================================================================+");
    point(48, 20);
    puts("|   Anda harus memasukkan kembali nama dan password untuk verifikasi   |");
    point(48, 21);
    puts("+----------------------------------------------------------------------+");
    point(48, 22);
    printf(" Masukkan nama anda      : ");
    getchar();
    gets(mhs.nama1);
    point(48, 23);
    printf(" Masukkan password       : ");
    scanf("%9s", &mhs.password1);
    if (strcmp(mhs.nama1, mhs.nama) != 0)
    {
        point(48, 25);
        printf("error, masukkan nama dan password anda dengan benar!!!\n");
        clean();
        goto pilihan;
    }
    else if (strcmp(mhs.password1, mhs.password) != 0)
    {
        point(48, 25);
        printf("error, masukkan nama dan password anda dengan benar!!!\n");
        clean();
        goto pilihan;
    }
    else
    {
        clean();
        menu_cys(mhs);
    }
    clean();
    return mhs;
}

