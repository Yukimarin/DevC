#include <stdio.h>

int main(){
	// Buoc 1: Khai bao kieu du lieu cho a,b,c , temp;
	int a,b,c,temp;
	// Buoc 2: Nhap du lieu cho a,b,c tu nguoi dung 
	printf("Nhap so thu nhat: \n");
	scanf("%d", &a);
	printf("Nhap so thu hai: \n");
	scanf("%d", &b);
	printf("Nhap so thu ba: \n");
	scanf("%d", &c);
	// 2.1 In ket qua 3 so sau khi ma nguoi dung nhap 
	printf("Truoc khi sap xep:%d %d %d \n", a,b,c);
	// Buoc 3: Xu ly tinh toan 
	// 3.1 So sanh Neu a>b thi doi cho a voi b
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	// 3.2 So sanh Neu a>c thi doi cho a voi c
	if(a>c){
		temp=a;
		a=c;
		c=temp;
	}
	// 3.3 So sanh Neu b>c thi doi cho b voi c
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
	// Buoc 4: In ket qua ra sau khi sap xep 
	printf("Ket qua sau khi sap xep: %d %d %d \n ", a,b,c);
	// Buoc 5: Ket thuc chuong trinh 
	return 0;
}

