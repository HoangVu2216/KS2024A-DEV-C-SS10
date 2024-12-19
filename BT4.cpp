#include <stdio.h>

int main() {
    int mang[] = {64, 34, 25, 12, 22, 11, 90};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau:\n");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    for (int i = 0; i < kich_thuoc - 1; i++) {
        int chi_so_min = i;
        for (int j = i + 1; j < kich_thuoc; j++) {
            if (mang[j] < mang[chi_so_min]) {
                chi_so_min = j;
            }
        }
        int tam = mang[i];
        mang[i] = mang[chi_so_min];
        mang[chi_so_min] = tam;
    }

    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

