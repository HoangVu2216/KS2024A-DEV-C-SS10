#include <stdio.h>

int main() {
    int mang[100], n, so, vi_tri[100], dem = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &so);

    for (int i = 0; i < n; i++) {
        if (mang[i] == so) {
            vi_tri[dem] = i;
            dem++;
        }
    }

    if (dem > 0) {
        printf("So %d xuat hien o vi tri: ", so);
        for (int i = 0; i < dem; i++) {
            printf("%d ", vi_tri[i]);
        }
    } else {
        printf("So %d khong xuat hien trong mang.\n", so);
    }

    return 0;
}

