#include <stdio.h>

void main() {
    char nama[30], npm[10], kelas[10];

    printf("==========Program Input Biodata==========\n");
    printf("Masukkan Nama Anda: ");
    scanf("%s",&nama);
    printf("Masukkaan NPM Anda: ");
    scanf("%s",&npm);
    printf("Masukkan Kelas Anda: ");
    scanf("%s",&kelas);

    printf("\n==========Biodata==========\n");
    printf("Nama Anda : %s\n", nama);
    printf("NPM Anda : %s\n", npm);
    printf("Kelas Anda : %s\n", kelas);
}
