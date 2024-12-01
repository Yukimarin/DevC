#include <stdio.h>

int main(){
	// Khai bao va nhap cac phan tu cho mang 2 chieu so nguyen. In mang chieu 
	// Tinh tong va tich cua cac phan tu co trong mang 2 chieu. In ra ket qua 
	// Buoc 1: Khai bao va nhap gia tri row, col
	int rows, cols; 
	printf(" Nhap so hang cua mang 2 chieu: ");
	scanf("%d", &rows);
	printf(" Nhap so cot cua mang 2 chieu: ");
	scanf("%d", &cols);
	// Kiem tra dieu kien row va col >0
	// Buoc 2: Khai bao arr[row][col]
	int arr[rows][cols];
	// Buoc 3: Nhap cac phan tu cho mang 2 chieu arr[row][col]
	printf("Nhap cac phan tu mang: \n");
	for(int i=0; i< rows; i++){
		for(int j =0; j< cols; j++){
			printf("Phan tu tai hang %d, cot %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	// Buoc 4: In mang 2 chieu 
	printf("Mang 2 chieu sau khi them cac phan tu: \n");
	for(int i=0; i< rows; i++){
		for(int j =0; j< cols; j++){
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	// Buoc 5: Khai bao sum =0 , result= 1
	int sum =0;
	long long result = 1;
	// Buoc 6: Xu ly tinh toan 
	// + Su dung vong lap de duyet cac phan 
	// va gan sum = sum + arr[i][j] va result = result * arr[i][j]
	for(int i=0; i< rows; i++){
		for(int j =0; j< cols; j++){
			sum += arr[i][j];
			result *=arr[i][j];
		}
	}
	// Buoc 7: In ra ket qua sum va result 
	printf("Tong cac phan tu trong mang 2 chieu la: %d\n", sum);
	printf("Tich cac phan tu trong mang 2 chieu la: %lld\n", result);
	// Buoc 8: Ket thuc chuong trinh 
	return 0;
}

