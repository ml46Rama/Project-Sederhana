int main()
{
    proses();
    clean();

    sign_up mhs;
    mhs = masuk_akun(mhs);
    mhs = menu_login(mhs);

    menu_cys(mhs);
    menu_inputan(mhs);

    return 0;
}

void point(int x, int y)      //untuk memposisikan program ditengah-tengah
{
    //COORD adalah sebuah struct yang berisikan dua variabel bertipe SHORT, yaitu X dan Y.
    coord.X = x;
    coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tunda(int det)
{
    Sleep(det);               //Fungsi sleep adalah fungsi yang digunakan untuk menghentikan sementara kerja program kita, bisa juga dibilang “pause”.
}

void clean()                  //untuk membersihkan fitur sebelumnya
{
    system("cls");
}

void setwarna(unsigned short warna)   //untuk memberi waran backgrund dan warna teks
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, warna);
}

void proses()
{
    point(48, 15);
    for (int i = 1; i <= 35; i++)
    {
        setwarna(249);
        printf("%c", 223);
        Sleep(60);
    }
}

void proses_menu()      //untuk menampilkan sebuah kata sebelum menuju fitur selanjutnya
{
    char menu_1[50] = ">>>>>PLEASE WAIT<<<<<";
    point(72, 14);
    for (v = 0; v < 30; v++)
    {
        Sleep(50);
        printf("%c", menu_1[v]);
    }
    clean();
}
void penutup() //menampilkan kata - kata penutup dari program choose your vacation
{
    char menu_2[50] = ">>TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI<<";
    char menu_3[50] = ">>SILAKAN MENGECEK KWITANSI DALAM BENTUK .TXT<<";
    char menu_4[50] = ">>>>>>>>>>>>>>>SELAMAT BERLIBUR<<<<<<<<<<<<<<<<";

    point(65, 14);
    for (i = 0; i < 50; i++)
    {
        Sleep(50);
        printf("%c", menu_2[i]);
    }
    point(65, 16);
    for (i = 0; i < 50; i++)
    {
        Sleep(50);
        printf("%c", menu_3[i]);
    }
    point(65, 18);
    for (i = 0; i < 50; i++)
    {
        Sleep(50);
        printf("%c", menu_4[i]);
    }
    clean();
}
