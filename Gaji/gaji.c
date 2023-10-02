#include <stdio.h>

char nama[50], golongan;
int jamKerja, total_upah, upah_per_jam;

int main ()
{
    printf("## Program Bahasa C Menghitung Gaji Karyawan ## \n");
    printf("=============================================== \n\n");

    printf("Nama Karyawan: ");
    gets(nama);

    printf("Golongan: ");
    scanf("%c",&golongan);

    printf("Jumlah Jam Kerja: ");
    scanf("%d",&jamKerja);

    switch(golongan) {
    case 'A':
        upah_per_jam = 5000;
        break;
    case 'B':
        upah_per_jam = 6000;
        break;
    case 'C':
        upah_per_jam = 7000;
        break;
    case 'D':
        upah_per_jam = 10000;
        break;
    }

    total_upah = jamKerja * upah_per_jam;

  if ( (jamKerja - 48) > 0 ) {
     total_upah = total_upah + ((jamKerja - 48)*4000);
  }

    printf("\n");
    printf("%s menerima upah Rp. %d per minggu \n", nama, total_upah );

    return 0;
}


