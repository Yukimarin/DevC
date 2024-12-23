#include <stdio.h>
#include <string.h>
typedef struct {
		int id;
		char fullName[100];
		int age;
		char phone[20];
} Student;
// Khai bao nguyen mau ham 
void printMember(Student user);
void changePhone(Student *student, char updateValue[20]);
int main(){
	
	Student user01={1,"Nguyen Cong Thang", 18,"08669287362"};
	Student user02;
	// Khai bao bien con tro tu kieu du lieu cau truc 
	Student *user01Ptr = &user01;
	// Tham chieu gian tiep toi cac member cua user 01 thong qua con tro
//	printf("In thong tin sinh vien user01:\n");
//	printf("ID-:%d\n", user01Ptr->id);
//	printf("Ho va ten: %s\n",user01Ptr->fullName);
//	printf("Tuoi-:%d\n", user01Ptr->age);
//	printf("So dien thoai: %s\n", user01Ptr->phone);
	
	// Truyen tham tri
	// Xay dung ham de in cac gia tri printMember(struct Student user)
	printMember(user01);
	// Truyen tham chieu
	// Xay dung ham sua so dien thoai user01 changePhone(struct Student *student, char updateValue[20])
	changePhone(user01Ptr,"0987654321");
	printMember(user01);
	return 0;
}

// Khai bao logic ham
void printMember(Student user){
	printf("In thong tin sinh vien:\n");
	printf("ID-:%d\n", user.id);
	printf("Ho va ten: %s\n",user.fullName);
	printf("Tuoi-:%d\n", user.age);
	printf("So dien thoai: %s\n", user.phone);
}

void changePhone(Student *student, char updateValue[20]){
	strcpy(student->phone,updateValue);
}
