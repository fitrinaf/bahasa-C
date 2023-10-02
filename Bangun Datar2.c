#include<stdio.h>

void hitungLuasPersegiPanjang(){
    int panjang, lebar, luas;
    printf("Masukkan panjang persegi : ");
    scanf("%d", &panjang);
    printf("Masukkan lebar persegi : ");
    scanf("%d", &lebar);

    luas = panjang*lebar;
    printf("Luas Persegi adalah : %d \n", luas);
}

void hitungLuasSegitiga(){
    float alas,tinggi, luas;

    printf("Masukkan alas segitiga : ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);

    luas = (alas*tinggi)/2;
    printf("Luas Segitiga adalah : %.2f \n", luas);
}

void hitungLuasLingkaran(){
    float jari, luas;

    printf("Masukkan jari-jari lingkaran : ");
    scanf("%f", &jari);


    luas = 3.14*(jari*jari);
    printf("Luas Lingkaran adalah : %.2f \n", luas);
}

int main()
{
    char ulangi;
    do {
    int pilih;
    printf("1. Menghitung Luas Persegi Panjang \n");
    printf("2. Menghitung Luas Segitiga \n");
    printf("3. Menghitung Luas Lingkaran \n \n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &pilih);

    if (pilih == 1) {
        hitungLuasPersegiPanjang();
    }
    else if (pilih == 2) {
        hitungLuasSegitiga();
    }
    else if (pilih == 3) {
        hitungLuasLingkaran();
    } else {
        printf("\n Pilihan tidak valid");
    }


    printf("\n Ingin Mengulang Lagi? [Y/T] :  ");
    scanf("%s", &ulangi);

    } while (ulangi == 'Y' || ulangi == 'y');

    return 0;
}
