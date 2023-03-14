/*Nama File : BilPrimaN.c*/
/*Deskripsi : menampilkan bilangan prima hingga N */
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Selasa, 14 Maret 2023, 07.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;
    int L;
    int BP;

    printf("Masukkan bilangan:");
    scanf("%d",&N);


    if (N<=0){
        printf("Bukan Masukan yang Benar");
    }
    else{
        printf("bilangan primanya adalah :");
        for (i=1; i<=N; i++){
            BP=0;
            for (L=1; L<=i; L++){
                if ((i % L)==0){
                    BP = BP + 1;
                }
            }
             if (BP==2){
                printf("%d ", i);
        }
        }
    }
    return 0;
}


