/*Nama File : hitungTahanan.c*/
/*Deskripsi : menampilkan total tahanan jika dirangkai seri*/
/*Pembuat   : Aryela Rachma Davina - 24060122140174*/
/*Tanggal   : Selasa, 7 Maret 2023, 08.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/;
    int x;
    int y;
    int z;
    int a;


    printf("Masukkan nilai tahanan 1:");
    scanf("%d", &x);

    printf("Masukkan nilai tahanan 2:");
    scanf("%d", &y);

    printf("Masukkan nilai tahanan 3:");
    scanf("%d", &z);

    /*Algoritma*/;
    if (x>=0 && y>=0 && z>=0){
        a = x + y + z;
        printf("Total dari ketiga tahanan = %d", a);
        }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
