/*Nama File : kallSS.c*/
/*Deskripsi : menampilkan operasi aritmatika dari suatu bilangan*/
/*Pembuat   : Aryela Rachma Davina - 24060122140174*/
/*Tanggal   : Selasa, 7 Maret 2023, 10.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/;
    char M;
    int iA;
    int iB;
    int O;
    float iBF;
    float F;

    printf("Masukkan operasi bilangan :");
    scanf("%c", &M);
    printf("Masukkan nilai bilangan 1 :");
    scanf("%d", &iA);
    printf("Masukkan nilai bilangan 2 :");
    scanf("%d", &iB);

    switch(M){
    case 'a' :
        O = iA + iB;
        printf("Hasil dari operasi a = %d", O);
        break;
    case 'b' :
        O = iA - iB;
        printf("Hasil dari operasi b = %d", O);
        break;
    case 'c':
        O = iA * iB;
        printf("Hasil dari operasi c = %d", O);
        break;
    case 'd':
        iBF = iB;
        F = iA / iBF;
        printf("Hasil dari operasi d = %f", F);
        break;
    case 'e':
        O = iA / iB;
        printf("Hasil dari operasi e = %d", O);
        break;
    case 'f':
        O = iA % iB;
        printf("Hasil dari operasi f = %d", O);
        break;
    default :
        printf("Bukan pilihan menu yang benar");
        break;
    }
    return 0;
}

