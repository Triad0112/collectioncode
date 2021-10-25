#include <stdio.h>

int main()
{
    int opsi;
    float rata_rata, nilaiPemrogramanDasar, nilaiKalkulus, nilaiOrkom, nilaiPTI;
    printf("Tolong inputkan nilai Pemrograman Dasar, Nilai Kalkulus, Nilai Orkom, Nilai PTI: ");
    scanf("%f %f %f %f", &nilaiPemrogramanDasar, &nilaiKalkulus, &nilaiOrkom, &nilaiPTI);
    do {
        printf("Apakah anda yakin data berikut ini sudah benar \n");
        printf("Nilai Pemrograman Dasar: %f \n", nilaiPemrogramanDasar);
        printf("Nilai Kalkulus         : %f \n", nilaiKalkulus);
        printf("Nilai Orkom            : %f \n", nilaiOrkom);
        printf("Nilai PTI              : %f \n \n", nilaiPTI);
        printf("Tolong Masukkan opsi yang diinginkan \n");
        printf("1. Benar saya ingin melihat status kelulusan \n");
        printf("2. Tidak, saya ingin merubahnya \n");
        printf("Ketik apapun selain opsi diatas untuk menutup program \n");
        scanf("%d", &opsi);
        printf("\n");
        switch (opsi)
        {
            case 1:
                rata_rata = (nilaiPemrogramanDasar+nilaiKalkulus+nilaiOrkom+nilaiPTI)/4;
                if (rata_rata>=75){
                    printf("Selamat anda dinyatakan LULUS dengan nilai rata rata : %f \n \n", rata_rata);
                } else {
                    printf("Maaf anda dinyatakan TIDAK LULUS \n \n");
                }
                break;
            case 2:
                printf("Tolong inputkan kembali nilai Pemrograman Dasar, Nilai Kalkulus, Nilai Orkom dan Nilai PTI: ");
                scanf("%f %f %f %f", &nilaiPemrogramanDasar, &nilaiKalkulus, &nilaiOrkom, &nilaiPTI);
                break;
        }
    }while(opsi<3 && opsi>0);
}
