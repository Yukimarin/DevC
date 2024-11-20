#include <stdio.h>

int main(){
// B1: Khai bao bien so firstNumber, secondNumber
	int a = 10; 
	int b = 5;
// B2: Khai bao cac bien so de luu gia tri tong tich thuong
	int sum, minus, multy;
	float devide;
// B3: Xu ly du lieu tong tich thuong 
	sum = a+b;
	minus = a-b;
	multy = a*b;
	devide = a/b;
// B4: In gia tri ra man hinh
	printf("Tong hai so: %5d\n", sum);
	printf("Hieu hai so: %d\n", minus);
	printf("Tich hai so: %d\n", multy);
	printf("Thuong hai so: %.2f\n", devide);
	return 0;
}

