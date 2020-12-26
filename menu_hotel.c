#include <stdio.h>
#include <stdlib.h>
int a;                //variabe untuk mewakili apakah user ingin meginap
int b;                //mewakili user memilih jenis tempat penginapan
int c;                //mewakili user jika menginputkan berapa banyak org yang akan menginap
int lama;             //untuk menanyakan berapa lama user menginap
int harga_penginapan; //jumlah harga total
void fungsi_hotel(int a);
void jenis_hotel(int b, int lama, int c);
int fungsi_homestay(int harga_penginapan, int lama);
int fungsi_bintang3(int harga_penginapan, int lama);
int fungsi_bintang5(int harga_penginapan, int lama);
int fungsi_villa(int harga_penginapan, int lama);
int tampilkan(int harga_penginapan);

int main()
{
    fungsi_hotel(a);
  
    return 0;
}
void fungsi_hotel(int a)
{
    printf("apakah anda ingin menginap di suatu tempat?\n");
    printf("1.for yes 2. for no");
    scanf("%d", &a);
    if (a == 1)
    {
        jenis_hotel(b, lama, c);
    }
    else
    {
        printf("salah");
    }
}
void jenis_hotel(int b, int lama, int c)
{
    printf("jenis hotel apa yang anda inginkan  :\n");
    printf("1.home stay 2. bintang 3 3. bintang more than 3 4. vila");
    scanf("%d", &b);

    printf("anda ingin menginap berapa lama?");
    scanf("%d", &lama);
    printf("anda ingin pesan untuk berapa orang(kecuali vila)?");
    scanf("%d", &c);
    if (b == 1)
    {
        fungsi_homestay(harga_penginapan, lama);
    }
    else if (b == 2)
    {
        fungsi_bintang3(harga_penginapan, lama);
        //fungsi bintang 3
    }
    else if (b == 3)
    {
        fungsi_bintang5(harga_penginapan, lama);
    }
    else if (b == 4)
    {
        fungsi_villa(harga_penginapan, lama);
    }
    else
    {
        printf("salah");
    }
}
int fungsi_homestay(int harga_penginapan, int lama)
{
    printf("Nama Homestay");
    puts("Cottage DenAyu");
    puts("Lembayung Sari");
    puts("Bakungan diJero");
    puts("Segara Urip");
    puts("Milla");
    puts("Nassybe");
    puts("Ida");
    puts("D karang");
    puts("Taruna");
    puts("Madhasativa");
    harga_penginapan = lama * 200000 * c;
    return harga_penginapan;
}
int fungsi_bintang3(int harga_penginapan, int lama)
{
    printf("Nama Hotel Bintang 3");
    puts("Losari");
    puts("Quest San");
    puts("Puri Taman Sari");
    puts("The Galuh Pakuntan");
    puts("The Sunjaya");
    puts("Puri Saron");
    puts("Camessa Hotel Amed");
    puts("The Volcania");
    puts("Sunia Loka");
    puts("Melka Excelsior");
    harga_penginapan = lama * 300000 * c;
    return harga_penginapan;
}
int fungsi_bintang5(int harga_penginapan, int lama)
{
    printf("Nama Hotel Bintang 4/5");
    puts("Aryaduta");
    puts("Grand Mega");
    puts("Umadathu");
    puts("Taman Wana");
    puts("Vision Resort");
    puts("UnudOne");
    puts("Rising Star");
    puts("The Klumpu Bali");
    puts("Taman Sari Resort");
    puts("Nugraha Lovina");
    harga_penginapan = lama * 400000 * c;
    return harga_penginapan;
}
int fungsi_villa(int harga_penginapan, int lama)
{
    printf("Nama Villa");
    puts("De Bharata");
    puts("Banyumas");
    puts("Hati Indah");
    puts("Madewi Surf");
    puts("Karma Loka");
    puts("L'Orange Bali");
    puts("Akasa Villa Tulamben");
    puts("Asli Bali");
    puts("Amertha");
    puts("Araminth");
    harga_penginapan = lama * 500000;
    return harga_penginapan;
}
