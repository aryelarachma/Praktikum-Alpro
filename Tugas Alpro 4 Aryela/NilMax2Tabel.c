/*Nama File : NilMax2Tabel.c/
/*Deskripsi : Menampilkan nilai maksimum kedua*/
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Kamis, 23 Maret 2023, 20.00*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    //Kamus//
    int N;
    printf("Masukkan jumlah anggota array:");
    scanf("%d", &N);
    int T[N];
    int i;
    int max;
    int max2;

    for(i=1; i<=N; i++){
        printf("Masukkan nilai array:");
        scanf("%d", &T[i]);
    }

    //Algoritma//
    max = 0;
    max2 = 0;

    for(i=1; i<=N; i++){
        if(max<T[i]){
            max2=max;
            max = T[i];
        }
        if(T[i]>max2 && T[i]<max){
            max2 = T[i];
        }
    }

    printf("Nilai maksimum kedua : %d ",max2);


    return 0;
}
