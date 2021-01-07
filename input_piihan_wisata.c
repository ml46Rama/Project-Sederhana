int input_data()  //user menginput nama nama kabupaten yang ingin dituju
{

    proses_menu(); //memanggil fungsi proses menu
    switch (kabupaten)
    {
    case 1:
        view_badung(); //memanggil fungsi view badung
        break;
    case 2:
        view_denpasar(); //memanggil fungsi view denpasar
        break;
    case 3:
        view_tabanan(); //memanggil fungsi view tabanan
        break;
    case 4:
        view_jembrana(); //memanggil fungsi view jembrana
        break;
    case 5:
        view_klungkung(); //memanggil fungsi view klungkung
        break;
    case 6:
        view_gianyar(); //memanggil fungsi view gianyar
        break;
    case 7:
        view_karangasem(); //memanggil fungsi view karangasem
        break;
    case 8:
        view_bangli(); //memanggil fungsi view bangli
        break;
    case 9:
        view_buleleng_barat(); //memanggil fungsi view buleleng barat
        break;
    case 10:
        view_buleleng_timur(); //memanggil fungsi view buleleng timur
        break;
    default:
        break;
    }

    point(6, 39);
    printf("Berapa tempat wisata yang ingin anda kunjungi (max 5)  : "); //menginput maksimal 5 tempat tujuan
    scanf("%d", &N); //menyimpan data pada variabel N
    point(6, 40);
    printf("Masukkan pilihan anda : ");

    for (i = 0; i <= N; i++)
    {
        point(30, 41);
        n[i] = malloc(sizeof(char) * MAXLEN); //fungsi standar untuk mengalokasikan memori dari sizeof(char)
        fgets(n[i], 10000, stdin); //fgets untuk membaca string dari file sampai ditemukannya karakter baris baru
    }

    clean(); //membersihkan tampilan layar
    return 0;
}
void tampilkan() //menampilkan data yang telah user input
{
    proses_menu();
    point(75, 5);
    printf("yang anda pilih:");
    for (i = 0; i <= N; i++)
    {

        printf("\t\t\t\t\t\t\t\t\t\t%s", n[i]);
    }

    for (i = 0; i <= N; i++)
    {
        free(n[i]); //membebaskan memori yang telah dipakai dalam fungsi malloc()

    }

}
