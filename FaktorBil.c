/*Nama File : FaktorBil.c*/
/*Deskripsi : menampilkan faktor bilangan */
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Selasa, 7 Maret 2023, 22.00*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;

    printf("Masukkan input:");
    scanf("%d", &N);

    if (N<=0){
        printf("Bukan Masukan yang Benar");
    }
    else{
       printf("faktor bilangan : ", N);
       for(i=1; i<=N; i++) {
            if ((N%i)==0){
                printf("%d ", i);
            }
       }
    }
    return 0;
}
