/*Nama File : SimetriTabel.c/
/*Deskripsi : Membandingkan dua tabel apakah simetri atau tidak*/
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Jumat, 24 Maret 2023, 12.00*/

#include <stdio.h>
#include<stdlib.h>


    int main()
{
    //Kamus//
    int N;
    int x;
    int y;
    int i;
    int T1[N];

    scanf("%d", &N);

    for(i=0; i<N; i++){
        scanf("%d", &T1[i]);
    }
    scanf("%d", &x);
    int T2[x];
    for(i=0; i<x; i++){
        scanf("%d", &T2[i]);
    }

    //Algoritma//

    if ( N==x ){
        y=0;
        for (i=0; i<N; i++){
            if(T1[i]==T2[i]){
                y = y+1;
            }
        }
        if (y==N){
            printf("T1 dan T2 Simetri");
        }
        else{
            printf("T1 dan T2 Tidak simetri");
        }
    }
    else{
        printf("T1 dan T2 Tidak simetri");
    }
    return 0;
}

