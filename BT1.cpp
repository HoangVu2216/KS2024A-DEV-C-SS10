#include <stdio.h>

int main() {
    int mang[100] = {1, 3, 5, 7, 9, 11};
    int currentLength = 6;
    int phanTu, timThay = 0;

    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &phanTu);

    for (int i = 0; i < currentLength; i++) {
        if (mang[i] == phanTu) {
            printf("Phan tu %d ton tai o vi tri %d trong mang.\n", phanTu, i);
            timThay = 1;
        }
    }

    if (!timThay) {
        printf("Phan tu %d khong ton tai trong mang.\n", phanTu);
    }

    return 0;
}

