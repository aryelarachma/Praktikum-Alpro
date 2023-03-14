/*Nama File : CekBilSemp.c*/
/*Deskripsi : mengecek bilangan sempurna atau bukan */
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Selasa, 14 Maret 2023, 08.30*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;
    int S;

    printf("Masukkan bilangan:");
    scanf("%d",&N);


    if (N<=0){
        printf("Bukan Masukan yang Benar");
    }
    else{
        S=0;
        for (i=1; i<N; i++){
            if((N % i) == 0){
                 S = S + i ;
            }

        }
            if (N==S){
                printf("Merupakan Bilangan Sempurna");
            }
            else{
                printf("bukan bilangan sempurna");
            }
    }
    return 0;
}


