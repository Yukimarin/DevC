#include <stdio.h>

int main(){
	//Nhap vao n va in ra n so fibonaci 
	// Buoc 1: Khai bao va nhap gia tri cho n 
	int n; 
	printf("Nhap vao gia tri n: ");
	scanf("%d", &n);
	// Buoc 2: Khai bao f1, f2, fn
	int f1= 0;
	int f2=1;
	int fn;
	// In f1,f2
	// Buoc 3: Su dung vong lap for de tao ra day fibonacci
	for(int i=0; i<n; i++){
		// 3.1 Gan fn = f1+f2; f1=f2;f2=fn
		// 3.2 In ket qua 
		printf("%d\n", f1);
		fn= f1+f2;
		f1=f2;
		f2=fn;
	}
	// Buoc 4: Ket thuc chuong trinh 
	return 0;
}

