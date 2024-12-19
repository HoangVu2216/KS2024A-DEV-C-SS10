#include <stdio.h>

int main() {
    int mang[100] = {11, 7, 5, 9, 3, 1};
    int currentLength = 6;

    for (int i = 1; i < currentLength; i++) {
        int key = mang[i];
        int j = i - 1;

        while (j >= 0 && mang[j] > key) {
            mang[j + 1] = mang[j];
            j--;
        }
        mang[j + 1] = key;
    }

    printf("Mang sau khi sap xep tang dan: \n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

