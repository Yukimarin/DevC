#include <stdio.h>

int main(){
	// Xay dung menu thuc hien cac chuc nang sap xep
	// Buoc 1: Khai bao mang arr[]={1,2,-4,-2,5,4}
	int arr[]={1,2,-4,-2,5,4};
	int n =6;
	// Buoc 2: Khai bao bien choice de nguoi dung lua chon 
	int choice;
	// BUoc 3: Su dung vong lap do while de hien thi menu cho nguoi dung 
	do{
		printf("---MENU---\n");
		printf("1. In cac phan tu trong mang\n");
		printf("2. Sap xep chen (Insert Sort)\n");
		printf("3. Sap xep lua chon (Select Sort)\n");
		printf("4. Sap xep noi bot (Bubble Sort)\n");
		printf("5. Thoat\n");
		// 3.1 Gan va kiem tra gia tri cua choice 
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &choice);
		// 3.2 Su dung switch case hoac if else de tao ca luong xu ly chuong trinh 
		switch(choice){
				case 1: // In cac phan tu
			printf("Cac phan tu trong mang la:\n");
			for(int i=0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break;
			case 2: // Sap xep chen
			for(int i =1; i<n; i++){
				int key = arr[i];
				int j;
				for(j=i-1; j>=0&&arr[j]>key; j--){
					arr[j+1]= arr[j];
				}
				arr[j+1]=key;
			}
			printf("Cac phan tu trong mang sau khi sap xep la:\n");
			for(int i=0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break; 
			case 3: // Sap xep lua chon
			for (int i=0; i<n-1;i++){
				for(j=i+1; j=n;j++){
					if(arr[i]>arr[j]){
						int temp =arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
			printf("Cac phan tu trong mang sau khi sap xep la:\n");
			for(int i=0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break;
			case 4: // Sap xep noi bot
			for(int i=0;i<n-1;i++){
				for(int j=0; j<n-i-1;){
					if(arr[i]>arr[j]){
						int temp = arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
			printf("Cac phan tu trong mang sau khi sap xep la:\n");
			for(int i=0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break;
			case 5: // Thoat
			printf("Thoat khoi chuong trinh.Hen gap lai ban!!! \n")
			default: 
			printf("Lua chon khong hop le. Vui long chon lai");
		}
	}while(choice!=5);
	// Buoc 4: Ket thuc chuong trinh 
	return 0;
}

