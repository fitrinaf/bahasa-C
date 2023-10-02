#include <stdio.h>

void main(){
    int menu;
    char ulang;

    do {
    printf("==========Daftar Menu=========\n");
    printf("1. Nasi Goreng\n");
    printf("2. Bakso\n");
    printf("3. Ayam Bakar\n");
    printf("Masukkan Pilihan Menu : ");
    scanf("%d", &menu);

    switch(menu){
        case 1:
        printf("\nNasi Goreng : Rp15.000\n");
        break;
        case 2:
        printf("\nBakso : Rp16.000\n");
        break;
        case 3:
        printf("\nAyam Bakar : Rp22.000\n");
        break;
        default:
        printf("Menu Tidak Tersedia\n");
    }

        printf("\n");

    printf("Ingin memilih menu lain (y/t)? ");
    scanf(" %c",&ulang);
    printf("\n");
  }
  while (ulang!= 't');

    printf("\nTerima kasih atas Pesanan Anda. Harap Tunggu Terlebih Dahulu.");
}
