/*Nama File : namaBulan.c*/
/*Deskripsi : megecek dan menampilkan nama bulan dari nomor bulan*/
/*Pembuat   : Aryela Rachma Davina - 24060122140174*/
/*Tanggal   : Selasa, 28 Februari 2023, 17.00*/

#include <stdio.h>
#include <stdlib.h>
int main(){
     /*Kamus*/;
    int M;
    printf("Masukkan nama bulan dari nomor bulan:");
    scanf("%d", &M);

     /*Algoritma*/;
    switch(M){
    case 1:
        printf("Januari");
        break;
    case 2:
        printf("Februari");
        break;
    case 3:
        printf("Maret");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mei");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("Agustus");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("November");

    case 12:
        printf("Desember");
        break;
    default:
        printf("Masukan nomor bulan tidak tepat");
    }

    return 0;
}
