#include <stdio.h>

int main() {
    int mang[] = {45, 12, 78, 34, 23, 89, 56};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau:\n");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    for (int i = 0; i < kich_thuoc - 1; i++) {
        for (int j = 0; j < kich_thuoc - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
                int tam = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = tam;
            }
        }
    }

    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    int so_can_tim;
    printf("Nhap mot so nguyen can tim: ");
    scanf("%d", &so_can_tim);

    int trai = 0, phai = kich_thuoc - 1, giua, vi_tri = -1;
    while (trai <= phai) {
        giua = (trai + phai) / 2;
        if (mang[giua] == so_can_tim) {
            vi_tri = giua;
            break;
        } else if (mang[giua] < so_can_tim) {
            trai = giua + 1;
        } else {
            phai = giua - 1;
        }
    }

    if (vi_tri != -1) {
        printf("Phan tu %d duoc tim thay o vi tri %d (chi so bat dau tu 0).\n", so_can_tim, vi_tri);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", so_can_tim);
    }

    return 0;
}

