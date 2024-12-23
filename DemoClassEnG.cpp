#include <stdio.h>
#include <string.h>
int main(){
	struct Address{
		char city[100];
		char street[100];
	};
	// Khai bao kieu du lieu cau truc 
	struct Student {
		int id;
		char fullName[100];
		int age;
		char gender[50];
		char phone[20];
		struct Address address;
	};
	
	// Khai bao bien tu kieu du lieu cau truc 
//	struct Student user01={1,"Nguyen Xuan Bach",34,"Male","0904662012",{"Ha Noi", "Tran Phu"}};
//	struct Student user02;
//	printf("%s",user01.address.city);
	// Nhap thong tin cho user02 
//	printf("Moi ban nhap vao thong tin cua sinh vien:\n");
//	printf("Moi ban nhap vao id sinh vien:");
//	scanf("%d", &user02.id);
//	fflush(stdin);
//	printf("Moi ban nhap vao ho va ten sinh vien:");
//	fgets(user02.fullName,sizeof(user02.fullName),stdin);
//	printf("Moi ban nhap vao tuoi sinh vien:");
//	scanf("%d", &user02.age);
//	fflush(stdin);
//	printf("Moi ban nhap vao gioi tinh sinh vien:");
//	scanf("%s", &user02.gender);
//	fflush(stdin);
//	printf("Moi ban nhap vao so dien thoai sinh vien:");
//	fgets(user02.phone,sizeof(user02.phone),stdin);	
//		
//	printf("Thong tin sinh vien la:\n");
//	printf("Id: %d\n",user02.id);
//	printf("Ho va ten: %s\n",user02.fullName);
//	printf("Tuoi: %d\n",user02.age);
//	printf("Gioi tinh: %s\n",user02.gender);
//	printf("So dien thoai: %s\n",user02.phone);


	//Truy xuat 
//	printf("Thong tin sinh vien la:\n");
//	printf("Id: %d\n",user01.id);
//	printf("Ho va ten: %s\n",user01.fullName);
//	printf("Tuoi: %d\n",user01.age);
//	printf("Gioi tinh: %s\n",user01.gender);
//	printf("So dien thoai: %s\n",user01.phone);

	// Cap nhat gia tri cho phan tu 
//	user01.age=18;
//	printf("Sau khi di choi voi Duong tuoi cua ban la: %d",user01.age);
////	user01.phone="0123456789";
////	Gan gia tri cho chuoi can su dung ham strcpy(str1,str2);
//	strcpy(user01.phone,"0123456789");
//	printf("\nSau khi di choi voi Duong tuoi cua ban la: %s",user01.phone);

	// Mang cau truc 
	struct Student students[5]={
		{1,"Nguyen Xuan Bach", 34, "nam", "09078656235"},
		{2,"Nguyen Duy Quang", 45, "Nu", "09123555"},
		{3,"Nguyen Manh Duong", 34, "LGBT", "0907832235"},
	};
	printf("%s", students[1].fullName);
	return 0;
}

