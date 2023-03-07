/*Nama File : CekSegitiga.c*/
/*Deskripsi : megecek dan menampilkan jenis segitiga ketika diberika nilai sisi segitiga*/
/*Pembuat   : Aryela Rachma Davina - 24060122140174*/
/*Tanggal   : Selasa, 28 Februari 2023, 16.00*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int H;

    /*Algoritma*/
    printf("Masukkan nama dari nomor hari:");
    scanf("%d", &H);

    switch(H){
    case 1:
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jumat");
        break;
    case 6:
        printf("Sabtu");
        break;
    case 7:
        printf("Minggu");
        break;
    default:
        printf("Masukan nomor hari tidak tepat");
    }

    return 0;
}
