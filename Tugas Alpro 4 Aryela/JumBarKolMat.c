/*Nama File : JumBarKolMat.c/
/*Deskripsi : menampilkan jumlah elemen pada baris dan kolom*/
/*Pembuat   : Aryela Rachma Davina-24060122140174*/
/*Tanggal   : Jumat, 24 maret 2023, 14.00*/

#include<stdio.h>

int main()
{
    //Kamus//
    int N;
    printf("Ukuran Baris:");
    scanf("%d",&N);

    int jumlahbaris;
    int jumlahkolom;

    int L;
    printf("Ukuran Kolom:");
    scanf("%d",&L);
    int i;
    int j;
    int T[N][L];
    printf("Masukkan Nilai:\n");

    //Algoritma//
    for (i=0; i<N; i++){
        for(j=0; j<L; j++){
            scanf("%d", &T[i] [j]);
        }
    }

    for (i=0; i<N; i++){
        jumlahbaris=0;
        for (j=0; j<L; j++){
            jumlahbaris=jumlahbaris + T[i][j];
        }
        printf("Jumlah elemen baris %d = %d \n", i+1, jumlahbaris);
    }

    for (j=0; j<L; j++){
        jumlahkolom=0;
        for (i=0; i<N; i++){
            jumlahkolom =jumlahkolom + T[i][j];
        }
        printf("Jumlah elemen kolom %d = %d\n", j+1, jumlahkolom);
    }
return 0;

}
