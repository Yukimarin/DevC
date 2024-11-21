#include <stdio.h>

int main(){
	// Buoc 1: Khai bao cac bien numb1; numb2; numb3; sum; ave
	int numb1, numb2, numb3;
	int sum;
	float ave;
	// Buoc 2: Cho nguoi dung nhap vao gia tri cua numb1; numb2; numb3
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &numb1);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &numb2);
	printf("Nhap vao so thu ba: ");
	scanf("%d", &numb3);
	// Buoc 3: Xu ly tinh toan sum va ave
	sum = numb1+ numb2+ numb3;
	ave = (float) sum/3;
	// Buoc 4: In ra gia tri 3 so va sum, ave
	printf(" Lan luot ba so nhap vao la: %d %d %d\n ", numb1, numb2, numb3);
	printf(" Tong cac so la: %d\n", sum);
	printf(" Gia tri trung binh la: %.2f\n", ave);
	// Buoc 5: Ket thuc chuong trinh
	return 0;
}

