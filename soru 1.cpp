// SORU 1:

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int freq[MAX_SIZE];
    int n, i, j, count;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    printf("Dizi elemanlarini girin: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Eleman\tFrekans\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}

