#include <stdio.h>

int main() {
    int n;
    // Kiem tra so luong phan tu mang hop le 
    do {
        printf("Nh?p vào s? lu?ng ph?n t? có trong m?ng (n > 0): ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("S? nh?p vào không h?p l?. Yêu c?u nh?p l?i.\n");
        }
    } while (n <= 0);
    // Khai báo mang
    int arr[n];
    // Nhap cac phan tu cua mang
    for (int i = 0; i < n; i++) {
        printf("Thêm ph?n t? th? %d vào m?ng arr: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Hien thi mang
    printf("M?ng sau khi thêm các ph?n t? là:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Tim va in ra cac so nguyen to
    printf("Các s? nguyên t? trong m?ng là:\n");
    for (int i = 0; i < n; i++) {
        int isPrime = 1; // Kiem tra so nguyen to
        // Kiem tra so nguyen to
        if (arr[i] <= 1) { 
            isPrime = 0; // So nho hon hoac bang 1 khong phai la so nguyen to
        } else {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isPrime = 0; // Chia het khong phai la so nguyen to 
                    break;
                }
            }
        }
        // neu la so nguyen to thi in ra
        if (isPrime) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

