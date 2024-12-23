#include <stdio.h>
#include <string.h>
int main(){
	
//	
//	// Khai bao bien tu kieu du lieu cau truc
//	struct Student user01={1,"Do Ngoc Dan",18,"0354744360"};
//	struct Student user02;
	
//	//Truy xuat 
//	printf("In thong tin sinh vien:\n");
//	printf("%d\n", user01.id);
//	printf("%s\n", user01.fullName);
//	printf("%d\n", user01.age);
//	printf("%s\n", user01.phone);
//	
//	//Cap nhat gia tri 
//	printf("Sau khi cap nhat gia tri age:\n");
//	user01.age=81;
//	printf("%d\n", user01.age);
//	printf("Sau khi cap nhat so dien thoai\n");
//	// Su dung strcpy(str1,str2)
////	user01.phone="0904662012"; Khong the gan truc tiep phai su dung strcpy
//	strcpy(user01.phone,"0904662012");
//	printf("%s\n", user01.phone);
	
	// Nhap gia tri danh cho cac phan tu trong user02
//	printf("Moi ban nhap thong tin cho user02:\n");
//	printf("Moi ban nhap id cho sinh vien: ");
//	scanf("%d", &user02.id);
//	fflush(stdin);
//	printf("Moi ban nhap ho va ten cho sinh vien:\n");
//	fgets(user02.fullName,sizeof(user02.fullName),stdin);
//	printf("Moi ban nhap tuoi cho sinh vien:\n");
//	scanf("%d",&user02.age);
//	fflush(stdin);
//	printf("Moi ban nhap so dien thoai cho sinh vien:\n");
//	fgets(user02.phone,sizeof(user02.phone),stdin);
//	
//	printf("In thong tin sinh vien:\n");
//	printf("%d\n", user02.id);
//	printf("%s\n", user02.fullName);
//	printf("%d\n", user02.age);
//	printf("%s\n", user02.phone);
	
	struct Student{
		int id;
		char fullName[100];
		int age;
		char phone[20];
	};
	
	// Mang cau truc
	struct Student students[5]={
		{1,"Nguyen Xuan Bach",18,"0123456789"},
		{2,"Nguyen Quang An",81,"0123456456"},
		{3,"Nguyen Duy Quang",105,"0913456456"},
	};
	printf("%s",students[2].fullName);
	
	return 0;
}

