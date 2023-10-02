#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char jurusan[25], jenjang[11], nim[10], nama[20];

    printf("Masukkan Nama Anda : \n"); gets(nama);
    printf("Masukkan NPM Anda : \n"); gets(nim);

    switch(nim[2]) {
        case '1' : strcpy(jurusan, "Teknik Informatika");
        break;
        case '2' : strcpy(jurusan, "Sistem Informasi");
        break;
        case '3' : strcpy(jurusan, "Teknik Komputer");
        break;
        case '4' : strcpy(jurusan, "Komputerisasi Akuntansi");
        break;
        default : printf("Anda Salah Memasukkan NPM. Coba Periksa Lagi!\n");
        break;
    }

    if(nim[4] == '5')
    {
        strcpy(jenjang, "Strata-1\n");
    }
    else if(nim[4] == '3')
    {
        strcpy(jenjang, "Diploma-3\n");
    } else
        printf("Anda Salah Memasukkan NPM. Coba Lagi!\n");

    printf("Data Mahasiswa Gunadarma\n");
    printf("Nama       : %s\n", nama);
    printf("NPM        : %s\n", nim);
    printf("Jurusan    : %s\n", jurusan);
    printf("Jenjang    : %s\n", jenjang);
    main();
}
