#include <stdio.h>

int main(){
	// Buoc 1: Khai bao mangr arr[n], choice 
	int arr[50], n, choice;
	int position, value;
	// Buoc 2: Hien thi menu 
	do{
		printf("---MENU---\n");
		printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
		switch(choice){
			case 1: // Nhap mang 
			// Nhap kich thuoc mang 
			printf("Nhap so luong phan tu cho mang: ");
			scanf("%d", &n);
			// Nhap cac phan tu cho mang
			printf("Nhap cac phan tu cho mang:\n ");
			for(int i=0; i<n;i++){
				printf("Nhap phan tu thu %d cho mang: ", i+1);
				scanf("%d", &arr[i]);
			}
			break;
			case 2: // Hien thi mang
			printf("In ra mang sau khi them moi cac phan tu: ");
			for(int i=0; i<n;i++){
				printf("%3d", arr[i]);
			}
			printf("\n");
			break;
			case 3: // Them phan tu mang 
			// Nhap vi tri can them
			printf("Nhap vi tri muon them moi phan tu: ");
			scanf("%d",&position);
			// Nhap gia tri can them 
			printf("Nhap gia tri muon them moi vao mang: ");
			scanf("%d",&value);
			// Tien hanh kiem tra position, neu hop le thi toi moi them 
			if(position<0 || position > n){
				printf("Vi tri ban nhap khong hop le\n");
			}else {
				for (int i = n; i > position; i--) {
       				arr[i] = arr[i - 1];
    			}
    			arr[position]=value;
    			n++;// Tang kich thuoc mang sau khi them phan tu 
			}
			// In lai mang sau khi them moi phan tu 
			for(int i =0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break;
			case 4: // Sua phan tu mang 
			printf("Nhap vao vi tri ban muon sua: ");
			scanf("%d", &position);
			if(position <0 || position>n){
				printf("So ban nhap khong hop le. Vui long thu lai!");
			}else{
				printf("Nhap vao gia tri ban muon thay doi: ");
				scanf("%d", &value);
			}
			arr[position]=value;
			// In laij mang sau khi sua phan tu		
			for(int i =0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");			
			break;
			case 5: // Xoa phan tu 
			printf("Nhap vao vi tri ban muon xoa: ");
			scanf("%d", &position);
			if(position <0 || position>n){
				printf("So ban nhap khong hop le. Vui long thu lai!");
			}
			// Xoa phan tu trong mang (dich chuyen cac phan tu len truoc)
			for(int i =position; i<n-1;i++){
				arr[i]=arr[i+1];
			}
			n--; // Giam kich co mang di 1 
			// In lai mang sau khi xoa phan tu
			for(int i =0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break;
			default: 
				printf("Lua chon cua ban khong hop le");
		}
				
	}while(choice!=6);
	return 0;
}

