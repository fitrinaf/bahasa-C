#include <stdio.h>

// Fungsi untuk menghitung luas persegi panjang
float hitungLuasPersegiPanjang(float panjang, float lebar) {
    return panjang * lebar;
}

// Fungsi untuk menghitung luas segitiga
float hitungLuasSegitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

// Fungsi untuk menghitung luas lingkaran
float hitungLuasLingkaran(float jariJari) {
    return 3.14 * jariJari * jariJari;
}

int main() {
    int pilihan;
    float panjang, lebar, alas, tinggi, jariJari;
    char ulang;

    do {
        printf("Program Menghitung Luas Bangun Datar\n");
        printf("1. Persegi Panjang\n");
        printf("2. Segitiga\n");
        printf("3. Lingkaran\n");
        printf("Pilih angka (1-3) untuk memilih bangun datar: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Masukkan panjang persegi panjang: ");
                scanf("%f", &panjang);
                printf("Masukkan lebar persegi panjang: ");
                scanf("%f", &lebar);
                printf("Luas persegi panjang: %.2f\n", hitungLuasPersegiPanjang(panjang, lebar));
                break;
            case 2:
                printf("Masukkan alas segitiga: ");
                scanf("%f", &alas);
                printf("Masukkan tinggi segitiga: ");
                scanf("%f", &tinggi);
                printf("Luas segitiga: %.2f\n", hitungLuasSegitiga(alas, tinggi));
                break;
            case 3:
                printf("Masukkan jari-jari lingkaran: ");
                scanf("%f", &jariJari);
                printf("Luas lingkaran: %.2f\n", hitungLuasLingkaran(jariJari));
                break;
            default:
                printf("Pilihan tidak valid.\n");
                break;
        }

        printf("Ingin menghitung lagi? (Y/T): ");
        scanf(" %c", &ulang);

    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}
