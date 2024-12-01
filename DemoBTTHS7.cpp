#include <stdio.h>

int main(){
	// Khai bao mang so nguyen va nhap cac phan tu cho mang so nguyen 
	// Tinh tong va trung binh cong 
	// B1 Khai bao mang va kich co mang
	int n;
	printf("nhap kich thuoc\n");
	scanf("%d", &n);
	// B2 Nhap gia tri cho tung o trong mang
	int a[n];
	printf("nhap phan tu ");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int sum = 0; 
	float avg;
	for(int i = 0; i < n; i++){
		// B3 tinh tong cac gia tri trong mang
		sum += a[i];
	}
	// B4 tinh trung binh cac phan tu trong mang
		avg = (float)sum/n;
	//B5 In ket qua
		printf("Tong cac phan tu trong mang la: %d\n", sum);
		printf("Gia tri trung binh cac phan tu trong mang la: %.2f", avg);
	//B6 Ket thuc 

	return 0;
}

