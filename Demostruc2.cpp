#include <stdio.h>
#include <string.h>
// Khai bao mot doi tuong 
	struct Student{
		int id;
		char fullName[50];
		int age;
		char email[100];
		char courses[5][100];
		struct Address{
			char city[50];
			char street[50];
		} address;
	};

int main(){
	// Khai bao 1 doi tuong cu the 
	struct Student user_1={
		1,
		"Nguyen Xuan Bach",
		33,
		"bachnx1991@gmail.com",
		{"Scratch","Lap trinh C","Web Fudamental","ReactJS","NextJS"},
		{"Ha Noi","Tran Phu"}
	};
	struct Student user_2={
		2,
		"Nguyen Quang An",
		26,
		"annq97@gmail.com",
		{"Scratch","Lap trinh C","Web Fudamental","ReactJS","NextJS"},
		{"Hung Yen","Phung Cong"}
	};
	struct Student user_3;
	// Truy cap thong tin 
	printf("In thong tin sinh vien Bach: \n ");
	printf("-%d\n", user_1.id);
	printf("- %s\n", user_1.fullName);
	printf("- %d\n", user_1.age);
	printf("- %s\n", user_1.email);
	printf("- Cac khoa hoc can tham gia: \n");
		for(int i=0;i<5;i++){
			printf("+ %s\n", user_1.courses[i]);
		}
	printf("- %s\n", user_1.address.city);
	
	// Sua thong tin 
	user_1.age = 35;
	printf("Tuoi cua Bach sau khi sua:");
	printf("- %d\n", user_1.age);
	// Su dung strcpy (str1, str2);
	strcpy(user_1.email,"bach26991@gmail.com");
	printf("Email cua Bach sau khi sua:");
	printf("- %s\n", user_1.email);
	
	// Them moi cac gia tri 
	printf("Moi ban nhap vao id cua sinh vien:");
	scanf("%d", &user_3.id);
	fflush(stdin);
	printf("Moi ban nhap ten cua sinh vien: ");
	fgets(user_3.fullName,sizeof(user_3.fullName),stdin);
	printf("Moi ban nhap vao tuoi cua sinh vien: ");
	scanf("%d", &user_3.age);
	fflush(stdin);
	printf("Moi ban nhap email cua sinh vien: ");
	fgets(user_3.email,sizeof(user_3.email),stdin);
	// Them cac khoa hoc vao user_3 
	printf("Moi ban them vao cac khoa hoc cho sinh vien 3:");
	for(int i=0;i<5;i++){
		 printf("Khoa hoc %d: ", i + 1);
		 fgets(user_3.courses[i], sizeof(user_3.courses[i]), stdin);
	}
	// Them dia chi cho user_3 
	printf("Moi ban nhap dia chi cho sinh vien:\n");
    printf("Thanh pho: ");
    fgets(user_3.address.city, sizeof(user_3.address.city), stdin);
    user_3.address.city[strcspn(user_3.address.city, "\n")] = '\0'; 

    printf("Duong: ");
    fgets(user_3.address.street, sizeof(user_3.address.street), stdin);
    user_3.address.street[strcspn(user_3.address.street, "\n")] = '\0'; 
    
    // In thong tin user_3
    printf("\nThong tin sinh vien moi:\n");
    printf("ID: %d\n", user_3.id);
    printf("Full Name: %s\n", user_3.fullName);
    printf("Age: %d\n", user_3.age);
    printf("Email: %s\n", user_3.email);
    printf("Courses: ");
    for (int i = 0; i < 5; i++) {
        printf("%s ", user_3.courses[i]);
    }
    printf("\n");
    printf("Address: %s, %s\n", user_3.address.city, user_3.address.street);
    
    
	return 0;
}

