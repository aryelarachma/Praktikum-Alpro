/*Nama File : BilSempNt.c*/
/*Deskripsi : menampilkan bilangan sempurna hingga integer tak tentu */
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Selasa, 14 Maret 2023, 09.00*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;
    int L;
    int BS;

    printf("Masukkan bilangan:");
    scanf("%d",&N);


    if (N<=0){
        printf("Bukan Masukan yang Benar");
    }
    else{
        for (i=1; i<=N; i++){
            BS=0;
            for (L=1; L<i; L++){
                if ((i % L)==0){
                    BS = BS + L;
                }
            }
             if (BS==i){
                printf("%d ", i );
        }
        }
    }
    return 0;
}



