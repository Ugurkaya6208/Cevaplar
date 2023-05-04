// SORU 1:

#include <stdio.h>


int main() {
    int dizi[] = {10, 20, 20, 10, 10, 20, 5, 20}; 
    int uzunluk = sizeof(dizi) / sizeof(int); 

    for (int i = 0; i < uzunluk; i++) {
        int eleman = dizi[i];
        int frekans = 1; 

        for (int j = i + 1; j < uzunluk; j++) {
            if (dizi[j] == eleman) {
                frekans++;
                dizi[j] = -1; 
            }
        }

        if (eleman != -1) {
            printf("%d › %d\n", eleman, frekans);
        }
    }

    return 0;
}
