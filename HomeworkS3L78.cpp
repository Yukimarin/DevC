#include <stdio.h>

int main(){
	// Nhap so nguyen co 4 chu so. Tinh tong cac chu so va in ra man hinh, in ra so dao nguoc 
	// Buoc 1: Khai bao bien number, sum , reverse, thousand, hundred, ten, unit
	int number, sum , reverse, thousand, hundred, ten, unit;
	// Buoc 2: Nhap gia tri cho bien number 
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &number);
	// Buoc 3: Xu ly tinh toan de luu gia tri cho cac bien thousand, hundred, ten, unit
	thousand= number/1000;
	hundred = (number/100)%10;
	ten= (number/10)%10;
	unit = number%10;
	// Buoc 4: Xu ly tinh toan sum va reverse 
	sum = thousand +hundred+ ten + unit;
	// 4567 =7654
	reverse= unit*1000 + ten *100 + hundred*10 + thousand*1;
	// Buoc 5: In ket qua ra man hinh 
	printf("So nguoi dung nhap vao la: %d\n", number);
	printf("Tong cac chu so cua so %d la: %d\n", number, sum);
	printf("So dao nguoc cua so %d la: %d\n", number, reverse);
	// Buoc 6: Ket thuc chuong trinh 
	return 0;
}

