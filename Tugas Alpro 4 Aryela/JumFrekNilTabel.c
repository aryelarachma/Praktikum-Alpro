/*Nama File : JumFrekNilTabel.c/
/*Deskripsi : Menampilkan jumlah nilai yang muncul lebih dari dua kali*/
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Kamis, 23 Maret 2023, 23.30*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    //Kamus//
    int N;
    int i;
    int j;
    int T[N];
    int a;
    int sum;

    scanf("%d", &N);

    //Algoritma//
    for(i=0; i<N; i++){
        scanf("%d", &T[i]);
    }
    printf("Jumlah nilai yang muncul lebih dari sekali : ");

     sum =0;
     for(i=0; i<N; i++){
        a =1;
            for (j=i+1 ; j<N; j++ ){
                if(T[i]!=0 && T[i]==T[j]){
                    a++;
                    T[j]=0;
                }
        }
        if (a> 1){
            sum = sum + (a * T[i]);
            }
    }
    printf("%d ", sum);

    return 0;
}
