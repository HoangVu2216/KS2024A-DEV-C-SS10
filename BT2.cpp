#include <stdio.h>

int main() {
    int mang[100] = {11, 7, 5, 9, 3, 1};
    int currentLength = 6;

    for (int i = 0; i < currentLength - 1; i++) {
        for (int j = 0; j < currentLength - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
                int temp = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan: \n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

