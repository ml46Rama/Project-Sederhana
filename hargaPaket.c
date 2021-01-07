int hargaPaket()
{
    point(45, 33);
    printf(" Pilihlah kode paket perjalanan anda : ");
    scanf("%d", &paket); //menyimpan data paket pilihan user
    point(45, 34);
    printf(" Pilihlah kode bagian paket sesuai tabel di atas : ");
    scanf("%d", &bagPak); //menyimpan data bagian paket pilihan user

    if (paket == 1 && bagPak == 1) //Paket Kabupaten Badung
        hp = 200000;
    else if (paket == 1 && bagPak == 2) //Paket Kota Denpasar
        hp = 200000;
    else if (paket == 1 && bagPak == 3) //Paket Kabupaten Gianyar
        hp = 200000;
    else if (paket == 1 && bagPak == 4) //Paket Kabupaten Klungkung
        hp = 200000;
    else if (paket == 1 && bagPak == 5) //Paket Kabupaten Bangli
        hp = 200000;
    else if (paket == 1 && bagPak == 6) //Paket Kabupaten Jembrana
        hp = 200000;
    else if (paket == 1 && bagPak == 7) //Paket Kabupaten Karangasem
        hp = 200000;
    else if (paket == 1 && bagPak == 8) //Paket Kabupaten Tabanan
        hp = 200000;
    else if (paket == 1 && bagPak == 9) //Paket Kabupaten Buleleng Barat
        hp = 200000;
    else if (paket == 1 && bagPak == 10) //Paket Kabupaten Buleleng Timur
        hp = 200000;
    else if (paket == 2 && bagPak == 1) //Paket Edukasi
        hp = 200000;
    else if (paket == 2 && bagPak == 2) //Paket Konservasi
        hp = 300000;
    else if (paket == 2 && bagPak == 3) //Paket Religi
        hp = 150000;
    else if (paket == 2 && bagPak == 4) //Paket Pantai
        hp = 400000;
    else if (paket == 2 && bagPak == 5) //Paket Shopping
        hp = 100000;
    else //Jika input user tidak sesuai, else akan tereksekusi
        printf("Kode yang anda input salah!");
    clean();
}
