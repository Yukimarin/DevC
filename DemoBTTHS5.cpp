#include <stdio.h>

int main(){
	// Nhap vao so n va tinh tong tu 1 den n
	// Buoc 1: Khai bao n, sum
	int n;
	int sum =0;
	// Buoc 2: Nhap gia tri cho n 
	printf("Nhap so nguyen duong n");
	scanf("%d", &n);
	// Buoc 3: Xu ly tinh toan (su dung vong lap for)
	for(int i =0; i<=n; i++){
		sum = sum + i;
		printf("Lan lap thu %d, ket qua sum la: %d\n", i+1, sum);
	}
	// Buoc 4: In ket qua 
	printf("Ket qua sum la: %d", sum);
	// Buoc 5: Ket thuc chuong trinh

	return 0;
}

