/*Nama File : Tugas Sorting*/
/*Deskripsi : Program sederhana untuk mengurutkan array acak*/
/*Pembuat   : Aryela Rachma Davina - 24060122140174*/
/*Tanggal   : Selasa, 23 Mei 2023, 10.00*/

#include <stdio.h>
#include <stdlib.h>

/*Fungsi mencetak array*/
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*Fungsi Bubble Sort*/
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/* Fungsi Counting Sort*/
void countingSort(int arr[], int n, int range) {
    int count[range + 1];
    int output[n];
    for (int i = 0; i <= range; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 1; i <= range; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

/*Fungsi Insertion Sort*/
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

/*Fungsi Selection Sort*/
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    printf("============= PROGRAM SORTING ==============\n");
    printf("Masukkan Panjang array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Masukkan arraynya : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray yang belum terurut : ");
    printArray(arr, n);

    char choice;
    printf("Pilih sort yang digunakan (A/B/C/D): ");
    scanf(" %c", &choice);

    printf("Sorting yang digunakan adalah ");
    switch (choice) {
        case 'A':
            printf("Bubble Sort\n");
            bubbleSort(arr, n);
            break;
        case 'B':
            printf("Counting Sort\n");
            int range;
            printf("Masukkan rentang nilai array: ");
            scanf("%d", &range);
            countingSort(arr, n, range);
            break;
        case 'C':
            printf("Insertion Sort\n");
            insertionSort(arr, n);
            break;
        case 'D':
            printf("Selection Sort\n");
            selectionSort(arr, n);
            break;
        default:
            printf("Pilihan tidak valid.\n");
            return 0;
    }

    printf("\nArray yang sudah terurut : ");
    printArray(arr, n);

    printf("\nProgram selesai\n");
    printf("==============================================");

    return 0;
}
