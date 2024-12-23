#include <stdio.h>
#include <string.h>
// Khai bao kieu du lieu cau truc Student gom id, fullName,age, phone
	typedef struct  {
		int id;
		char fullName[100];
		int age;
		char phone[25];
	} Student;
// Khai bao nguyen mau ham 
void printMember(Student user);
void changePhone(Student *user, char updateNumber[]);
int main(){
	
	// Khai bao bien tu kieu du lieu cau truc Student (co gia tri)
	Student user1= {1,"Pham Thai Son",18,"0339801708"};
//	printf("Id- %d", user1.id);
	// Tham chieu gian tiep toi cac member trong user1 thong qua con tro 
	Student *user1Ptr= &user1;
	printf("In thong tin sinh vien: \n");
//	printf("Id :%d\n", user1Ptr->id);
//	printf("Ho va ten :%s\n", user1Ptr->fullName);
//	printf("Tuoi :%d\n", user1Ptr->age);
//	printf("So dien thoai :%s\n", user1Ptr->phone);
	
	// Truyen tham tri 
	// Xay dung 1 ham de in toan bo thong sinh vien user1
	// printMember(struct Student user)
	printMember(user1);
	// Truyen tham chieu 
	// Xay dung 1 ham de thay doi so dien thoai cho sinh vien user 1 thanh 0987654321
	// changePhone(struct Student user, char updateNumber[])
	printf("In thong tin sinh vien sau khi thay doi sdt: \n");
	changePhone(user1Ptr,"0987654321");
	printMember(user1);
	return 0;	
}

// Khai bao logic ham 
void printMember(Student user){
	printf("Id :%d\n", user.id);
	printf("Ho va ten :%s\n",  user.fullName);
	printf("Tuoi :%d\n",user.age);
	printf("So dien thoai :%s\n", user.phone);
}

void changePhone(Student *user, char updateNumber[]){
	strcpy(user->phone, updateNumber);
}
