#include <stdio.h>

int main(){
	// Co mang 5 phan tu va nhap cac gia tri cho cac phan tu trong mang 
	// Tim gia tri lon nhat va gia tri nho nhat trong mang 
	// Buoc 1: Khai bao mang co 5 phan tu 
	int arr[5];
	// Buoc 2: Nhap cac phan tu vao trong mang 
	for(int i =0;i<5; i++){
		printf("Them phan tu thu %d vao trong mang arr\n", i+1);
		scanf("%d", &arr[i]);
	}
	// Hien thi cac phan tu cua mang sau khi them moi 
	printf("Mang sau khi them moi phan tu la: \n");
	for(int i=0; i<5;i++){
		printf("%3d", arr[i]);
	}
	// max = arr[0], arr[1]> max => max = arr[1]
	// Buoc 3: Khai bao bien max bang voi gia tri cua phan tu dau tien trong mang
	int max = arr[0];
	// Buoc 4: Su dung vong lap duyet qua tung phan tu
	for(int i=0; i<5; i++){
		// + Neu max < arr[i] => max = arr[i]
		if(max<arr[i]){
			max = arr[i];
		}
	}
//	// Buoc 5: In ket qua 
	printf("So lon nhat trong mang la: %d", max);
	// Buoc 6: Ket thuc chuong trinh 
	return 0;
}

