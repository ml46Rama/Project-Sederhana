#include <stdio.h>
#include <string.h>
typedef char string[100]; //untuk mengubah tipe data char agar dirubah menjadi string

typedef struct
{
    string nama;
    string password;
} login;
typedef struct
{
    int umur;
    login psw;
} sign_in;

sign_in masuk_akun(sign_in mhs) //user disuruh masuk dulu untuk membuat akun, seperti input nama, password serta umur
{
    puts("Untuk pertama kali masuk anda harus sign-in terlebih dahulu");
    printf("\nmasukkan umur anda        :"); //fungsi umur nanti akan berkaitan dengan harga tiket
    scanf("%d", &mhs.umur);
    printf("\nmasukkan nama             :");
    getchar();
    gets(mhs.psw.nama);
    printf("\nmasukkan password anda    :");
    scanf("%s", &mhs.psw.password);
    return mhs;
}
void tampil_login(login psw, sign_in mhs)
{
    printf("\n      umur anda                 :%d", mhs.umur);
    printf("\n      nama akun anda            :%s", psw.nama);
    printf("\n      password anda             :%9s", psw.password);
}
login menu(login psw, sign_in mhs)
{
pilihan:
    puts("\n Anda harus memasukkan kembali nama dan password untuk vertifikasi");
    printf("\n\nMasukkan nama anda      :");
    getchar();
    gets(psw.nama);
    printf("\n\nmasukkan password       :");
    scanf("%9s", &psw.password);
    if (strcmp(mhs.psw.nama, psw.nama) != 0)
    {
        printf("error, masukkan nama dan password anda dengan benar!!!!");
        goto pilihan;
    }
    else if (strcmp(mhs.psw.password, psw.password) != 0)
    {
        printf("error, masukkan nama dan password anda dengan benar!!!!");
        goto pilihan;
    }
    else
    {
        printf("benar, selamat");
    }
    return psw;
}

int main()
{

    sign_in mhs;
    mhs = masuk_akun(mhs);
    login psw;
    psw = menu(psw, mhs);
    tampil_login(psw, mhs);
    return 0;
}
