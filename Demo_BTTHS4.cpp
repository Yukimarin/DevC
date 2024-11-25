#include <stdio.h>

int main(){
	//Buoc 1: Khai bao bien score; 
	int score;
	//Buoc 2: Nhap gia tri cho bien score tu nguoi dung 
	printf("Nhap diem so cua sinh vien: ");
	scanf("%d", &score);
	//Buoc 3: Kiem tra bien score (0-100)
	if(score<0 || score>100){
		printf("Diem so nhap vao khong hop le");
		return 1; // Ket thuc chuong trinh vi loi 
	}
	//Buoc 4: Kiem tra score trong cac khoang duoc yeu cau va in ra xep loai tuong ung 
	if(score>=90 && score<=100){
		printf("Xuat sac");
	}else if (score>=80 && score<=89){
		printf("Gioi");
	}else if (score>=70 && score<=79){
		printf("Kha");
	}else if (score>=60 && score<=69){
		printf("Trung binh");
	}else {
		printf("Yeu");
	}
	//Buoc 5: Ket thuc chuong trinh 
	return 0;//Ket thuc chuong trinh khong co loi
}

