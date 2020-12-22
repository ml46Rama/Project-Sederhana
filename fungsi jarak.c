feeling input_jarak(feeling fl, program call[], sewa sw)
{
    if (sw.ask== 0)
    {
        printf("\n anda dapat mengecek di google maps dan sesuaikan dengan kendaraan anda");
        printf("\n masukkan perkiraan jarak tempat anda sekarang ke tujuan :");
        scanf("%f", &fl.jarak);
        printf("\n1.mobil\n2. motor");
        printf("\n Kendaraan yang di pakai      :");
        scanf("%d", &fl.kendaraan);
        if (fl.kendaraan == 1)
        {
            fl.jarak_wisata_mobil = fl.jarak * 2 / 19; //jika memakai mobil
        }
        else if (fl.kendaraan == 2)
        {
            fl.jarak_wisata_motor = fl.jarak * 2 / 37; //jika memakai motor
        }
    }
}
