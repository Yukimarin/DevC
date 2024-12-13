#include <stdio.h>
// Khai bao nguyen mau ham 
void inputArray(int arr[], int n);
void printArray(int arr[], int n);
int addElement(int arr[], int n, int position, int value);
void updateElement(int arr[], int n, int position, int value);
int deleteElement(int arr[], int n, int position);
void sortArray(int arr[], int n, int asc);
int linearSearch(int arr[], int n, int searchValue);
int binarySearch(int arr[], int n, int searchValue);

int main() {
    int arr[100];
    int n = 0, choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
        	printf("Moi ban nhap vao so luong phan tu: ");
			scanf("%d", &n);
        	inputArray(arr,n);
            break;
        case 2:
        	printArray(arr,n);
            break;
        case 3: {
        	int position, value;
        	printf("Moi ban nhap vi tri muon them phan tu: ");
        	scanf("%d", &position);
        	printf("Moi ban nhap gia tri muon them: ");
        	scanf("%d", &value);
        	n = addElement(arr,n,position,value);
            break;
        }
        case 4: {
        	int position, value;
        	printf("Moi ban nhap vi tri muon sua phan tu: ");
        	scanf("%d", &position);
        	printf("Moi ban nhap gia tri muon sua: ");
        	scanf("%d", &value);
        	updateElement(arr,n,position,value);
            break;
        }
        case 5: {
        	int position;
        	printf("Moi ban nhap vi tri muon xoa phan tu: ");
        	scanf("%d", &position);
        	n= deleteElement(arr,n,position);
            break;
        }
        case 6: {
        	//sortArray
        	int subChoice;
        	printf("\n a. Giam dan \n b. Tang dan \n Moi ban lua chon: ");
        	getchar();
        	subChoice =getchar();
        	if(subChoice == 'a'){
        		sortArray(arr,n,0);
			}else if (subChoice =='b'){
				sortArray(arr,n,1);
			}else {
				printf("Lua chon khong hop le");
			}
            break;
        }
        case 7: {
        	int subChoice, searchValue;
        	printf("Moi ban nhap vao gia tri can tim: ");
        	scanf("%d", &searchValue);
        	printf("\n a. Linear Search \n b.Binary Search \n Moi ban lua chon: ");
        	getchar();
        	subChoice =getchar();
        	if(subChoice == 'a'){
        		int index = linearSearch(arr,n,searchValue);
        		if(index !=-1){
        			printf("Gia tri tim thay o vi tri %d \n", index);
				}else{
					printf("Khong tim thay gia tri\n");
				}
			}else if (subChoice =='b'){
				sortArray(arr,n,1);// sap xep truoc khi dung binary search
				int index =binarySearch(arr,n,searchValue);
				if(index !=-1){
        			printf("Gia tri tim thay o vi tri %d \n", index);
				}else{
					printf("Khong tim thay gia tri\n");
				}
			}else {
				printf("Lua chon khong hop le");
			}
            break;
        }
        case 8:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);
    return 0;
}

// Khai bao logic ham 
void inputArray(int arr[], int n){
	for(int i=0; i<n;i++){
		printf("Moi ban nhap vao phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("\n");
}

void printArray(int arr[], int n){
	printf("Cac phan tu trong mang: ");
	for(int i=0; i<n;i++){
		printf("%3d",arr[i]);
	}
	printf("\n");
}

int addElement(int arr[], int n, int position, int value){
	if(position<0 || position >n|| n>=100){
		printf("Vi tri ban nhap khong hop le\n");
		return n;
	} 
	for(int i=n;i>position;i--){
		arr[i]= arr[i-1];
	}
	arr[position]=value;
	n++;
	return n;
}

void updateElement(int arr[], int n, int position, int value){
	if(position<0||position >=n){
		printf("Vi tri ban nhap khong hop le");
	}
	arr[position]=value;
}

int deleteElement(int arr[], int n, int position){
	if(position<0||position>=n){
		printf("Vi tri khong hop le");
		return n;
	}
	for(int i=0;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
	return n;
}

void sortArray(int arr[], int n, int asc){
	for(int i=0;i<n-1; i++){
		for(int j=i+1; j<n;j++){
			if((asc && arr[i]>arr[j])|| (!asc && arr[i]<arr[j])){
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Mang da duoc sap xep. Vui long thuc hien chuc nang 2 de kiem tra!");
}

int linearSearch(int arr[], int n, int searchValue){
	for(int i =0; i<n;i++){
		if(arr[i]==searchValue){
			return i;
		}
	}
	return -1;
}

int binarySearch(int arr[], int n, int searchValue){
	int start =0, end = n-1;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]>searchValue){
			end = mid-1;
		}else if(arr[mid]<searchValue){
			start=mid+1;
		}else{
			return mid;
		}
	}
	return -1;
}


