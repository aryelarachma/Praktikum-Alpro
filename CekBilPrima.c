/*Nama File : CekBilPrima.c*/
/*Deskripsi : mengecek bilangan prima atau bukan */
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Selasa, 14 Maret 2023,07.30 .00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;
    int P;

    printf("Masukkan bilangan:");
    scanf("%d",&N);


    if (N<=0){
        printf("Bukan Masukan yang Benar");
    }
    else{
        P=0;
        for (i=1; i<=N; i++){
            if((N % i) == 0){
                 P = P + 1 ;
            }

        }
            if (P==2){
                printf("Bilangan Prima");
            }
    }
    return 0;
}

