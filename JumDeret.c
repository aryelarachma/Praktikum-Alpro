/*Nama File : JumDeret.c*/
/*Deskripsi : menjumlahkan bilangan */
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Selasa, 7 Maret 2023, 21.00*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    int N;
    int i;
    int Sum;

    printf("Masukkan input:");
    scanf("%d", &N);

    Sum=0;
    for(i=1; i<=N; ++i){
        Sum = Sum + i;
    }

    printf("Jumlah Deret : %d", Sum);

    return 0;

}
