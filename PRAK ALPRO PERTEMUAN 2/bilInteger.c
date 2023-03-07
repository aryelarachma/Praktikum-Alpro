/*Nama File : CekSegitiga.c*/
/*Deskripsi : megecek dan menampilkan jenis segitiga ketika diberika nilai sisi segitiga*/
/*Pembuat   : Aryela Rachma Davina - 24060122140174*/
/*Tanggal   : Selasa, 28 Februari 2023, 16.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int a;

    /*Algoritma*/
    printf("Masukan Bilangan:");
    if (scanf("%d", &a)){
        if (a>0){
            printf("bilangan bulat positif");
            }
        else if (a==0) {
                printf("nol");
            }
         else if (a<0) {
            printf("bilangan bulat negatif");
         }
        }
    else {
        printf("Bukan termasuk sebuah bilangan");
        }

    return 0;
}
