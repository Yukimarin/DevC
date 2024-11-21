#include <stdio.h>

int main(){
	// Buoc 1: Khai bao bien Pi, bankinh, chuvi, dientich
	int bankinh = 4;
	const float pi = 3.14;
	float chuvi, dientich;
	// Buoc 2: Tinh chuvi va dientich
	chuvi = 2*pi*bankinh;
	dientich = pi*bankinh*bankinh;
	// Buoc 3: In ra man hinh
	printf("Chu vi hinh tron la: %.2f\n", chuvi);
	printf("Dien tich hinh tron la: %.2f\n", dientich);
	// Buoc 4: Ket thuc chuong trinh
	return 0;
}

