#include <stdio.h>
#include <stdlib.h>

//deklarasi variabel
int kabupaten, kategori, kode_wisata, umur;

//deklarasi fungsi
int tiket_masuk();

//fungsi tiket masuk
int tiket_masuk(){
    if(kabupaten == 1){ //Kabupaten Badung
        if(kategori == 1){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 3){
            if(kode_wisata == 1){
                if(umur > 0 && umur < 17)
                    return 10000;
                else
                    return 20000;
            }else if(kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 4){
            if(kode_wisata == 1){
                if(umur > 0 && umur < 17)
                    return 15000;
                else
                    return 30000;
            }else if(kode_wisata == 2){
                if(umur > 0 && umur < 15)
                    return 0;
                else
                    return 200000;
            }else if(kode_wisata == 3)
                return 100000;
            else if(kode_wisata == 4){
                if(umur > 0 && umur < 17)
                    return 100000;
                else
                    return 125000;
            }else if(kode_wisata == 5){
                if(umur > 0 && umur < 17)
                    return 50000;
                else
                    return 100000;
            }
        }
    }
    else if(kabupaten == 2){ //Kota Denpasar
        if(kategori == 1){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 3){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 4){
            if(kode_wisata == 1){
                if(umur > 0 && umur < 17)
                    return 2000;
                else
                    return 5000;
            }else if(kode_wisata == 2)
                return 25000;
            else if(kode_wisata == 3)
                return 50000;
            else if(kode_wisata == 4)
                return 0;
            else if(kode_wisata == 5){
                if(umur > 0 && umur < 17)
                    return 5000;
                else
                    return 10000;
            }
        }
    }
    else if(kabupaten == 3){ //Kabupaten Tabanan
        if(kategori == 1){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 3){
            if(kode_wisata == 1){
                if(umur > 0 && umur < 17)
                    return 20000;
                else
                    return 30000;
            }else if(kode_wisata == 2)
                return 15000;
            else if(kode_wisata == 3){
                if(umur > 0 && umur < 17)
                    return 15000;
                else
                    return 20000;
            }else if(kode_wisata == 4)
                return 0;
            else if(kode_wisata == 5){
                if(umur > 0 && umur < 17)
                    return 15000;
                else
                    return 20000;
            }
        }else if(kategori == 4){
            if(kode_wisata == 1){
                if(umur > 0 && umur < 17)
                    return 0;
                else
                    return 10000;
            }else if(kode_wisata == 2)
                return 9000;
            else if(kode_wisata == 3){
                if(umur > 0 && umur < 17)
                    return 15000;
                else
                    return 20000;
            }else if(kode_wisata == 4){
                if(umur > 0 && umur < 17)
                    return 0;
                else
                    return 10000;
            }else if(kode_wisata == 5)
                return 0;
        }
    }
    else if(kabupaten == 4){ //Kabupaten Jembrana
        if(kategori == 1){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 3){
            if(kode_wisata == 1)
                return 5000;
            else if(kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 4){
            if(kode_wisata == 1)
                return 2500;
            else if(kode_wisata == 2)
                return 0;
            else if(kode_wisata == 3)
                return 60000;
            else if(kode_wisata == 4)
                return 0;
            else if(kode_wisata == 5)
                return 0;
        }
    }
    else if(kabupaten == 5){ //Kabupaten Klungkung
        if(kategori == 1){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 3){
            if(kode_wisata == 1 || kode_wisata == 4)
                return 0;
            else if(kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 5)
                return 10000;
        }else if(kategori == 4){
            if(kode_wisata == 1)
                return 5000;
            else if(kode_wisata == 2)
                return 0;
            else if(kode_wisata == 3){
                if(umur > 0 && umur < 17)
                    return 6000;
                else
                    return 12000;
            }else if(kode_wisata == 4 || kode_wisata == 5)
                return 25000;
        }
    }
    else if(kabupaten == 6){ //Kabupaten Gianyar
        if(kategori == 1){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 3){
            if(kode_wisata == 1 || kode_wisata == 2)
                return 15000;
            else if (kode_wisata == 3)
                return 0;
            else if(kode_wisata == 4){
                if(umur > 0 && umur < 17)
                    return 25000;
                else
                    return 30000;
            }else if(kode_wisata == 5)
                return 30000;
        }else if(kategori == 4){
            if(kode_wisata == 1)
                return 85000;
            else if(kode_wisata == 2)
                return 0;
            else if(kode_wisata == 3)
                return 0;
            else if(kode_wisata == 4){
                if(umur > 0 && umur < 17)
                    return 10000;
                else
                    return 20000;
            }else if(kode_wisata == 5){
                if(umur > 0 && umur < 17)
                    return 22000;
                else
                    return 37400;
            }
        }
    }
    else if(kabupaten == 7){ //Kabupaten Karangasem
        if(kategori == 1){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 3){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 4){
            if(kode_wisata == 1 || kode_wisata == 3 || kode_wisata == 5)
                return 0;
            else if(kode_wisata == 2)
                return 10000;
        }
    }
    else if(kabupaten == 8){ //Kabupaten Bangli
        if(kategori == 1){
            if(kode_wisata == 1)
                return 20000;
            else if(kode_wisata == 2)
                return 15000;
            else if(kode_wisata == 3 || kode_wisata == 5)
                return 0;
            else if(kode_wisata == 4)
                return 5000;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 3){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 4){
            if(kode_wisata == 1 || kode_wisata == 3){
                if(umur > 0 && umur < 17)
                    return 10000;
                else
                    return 15000;
            }else if(kode_wisata == 2){
                if(umur > 0 && umur < 17)
                    return 15000;
                else
                    return 20000;
            }else if(kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }
    }
    else if(kabupaten == 9){ //Kabupaten Buleleng Barat
        if(kategori == 1){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 3){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 4){
            if(kode_wisata == 1 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
            else if(kode_wisata == 2)
                return 50000;
        }
    }
    else if(kabupaten == 10){ //Kabupaten Buleleng Timur
        if(kategori == 1){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 2){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
            else if(kode_wisata == 3)
                return 15000;
        }else if(kategori == 3){
            if(kode_wisata == 1 || kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }else if(kategori == 4){
            if(kode_wisata == 1)
                return 5000;
            else if(kode_wisata == 2 || kode_wisata == 3 || kode_wisata == 4 || kode_wisata == 5)
                return 0;
        }
    }

}
