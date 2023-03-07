/*Nama File : CekSegitiga.c*/
/*Deskripsi : megecek dan menampilkan jenis segitiga ketika diberika nilai sisi segitiga*/
/*Pembuat   : Aryela Rachma Davina - 24060122140174*/
/*Tanggal   : Selasa, 7 Maret 2023, 10.30*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/;
    int a;
    int b;
    int c;

    /*Algoritma*/;
    printf("Masukkan nilai sisi 1:");
    scanf("%d",&a);
    printf("Masukkan nilai sisi 2:");
    scanf("%d", &b);
    printf("Masukkan nilai sisi 3:");
    scanf("%d", &c);

    if (a<=0 || b<=0 || c<=0){
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
   else if (a==b && b==c){
        printf("Segitiga sama sisi");
    }
    else if ((a==b && b!=c) || (b==c && c!=a) || (a==c && a!=b)){
        printf("Segitiga sama kaki");
    }
    else if (a!=b && b!=c){
        printf("Segitiga sembarang");
    }

    return 0;
}
