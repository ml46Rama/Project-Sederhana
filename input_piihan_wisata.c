int input_data()
{

    proses_menu();
    switch (kabupaten)
    {
    case 1:
        view_badung();
        break;
    case 2:
        view_denpasar();
        break;
    case 3:
        view_tabanan();
        break;
    case 4:
        view_jembrana();
        break;
    case 5:
        view_klungkung();
        break;
    case 6:
        view_gianyar();
        break;
    case 7:
        view_karangasem();
        break;
    case 8:
        view_bangli();
        break;
    case 9:
        view_buleleng_barat();
        break;
    case 10:
        view_buleleng_timur();
        break;
    default:
        break;
    }

    point(6, 39);
    printf("Berapa tempat wisata yang ingin anda kunjungi (max 5)  : ");
    scanf("%d", &N);
    point(6, 40);
    printf("Masukkan pilihan anda : ");

    for (i = 0; i <= N; i++)
    {
        point(30, 41);
        n[i] = malloc(sizeof(char) * MAXLEN); //fungsi standar untuk mengalokasikan memori dari sizeof(char)
        fgets(n[i], 10000, stdin);
    }

    clean();
    return 0;
}
void tampilkan()
{
    proses_menu();
    point(75, 15);
    printf(" Pilihan anda : ");
    for (i = 0; i <= N; i++)
    {

        printf("\t\t\t\t\t\t\t\t\t\t%s", n[i]);
    }

    for (i = 0; i <= N; i++)
    {
        free(n[i]);
    }
}
