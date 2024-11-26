#include <stdio.h>

int main(){
//b1:khai bao bien day,month,year
int day,month,year;
//b2:nhap bien
printf("Nhap vao ngay :");
scanf("%d",&day);
printf("Nhap vao thang :");
scanf("%d",&month);
printf("Nhap vao nam :");
scanf("%d",&year);
 
//b3:kiem tra cac dieu dien cua day,month,year
if(year<0) {
	printf("Nam khong hop le");
	return 1;
} else {
	switch(month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if(day>0 && day <32){
			printf("Ngay thang nam hop le");
		}else{
			printf("Ngay khong hop le");
		}
	break;
	case 4:
	case 6:
	case 9:
	case 11:
		if(day>0 && day <31){
			printf("Ngay thang nam hop le");
		}else{
			printf("Ngay khong hop le");
		}
	break;
	case 2: 
		if((year%4==0 && year%100!=0)||year%400==0){
			if(day>0 && day <30){
				printf("Ngay thang nam hop le");
			}else{
				printf("Ngay khong hop le");
			}
		}else{
			if(day>0 && day <29){
				printf("Ngay thang nam hop le");
			}else{
				printf("Ngay khong hop le");
			}
		}
		break;
	default:
		printf("Thang khong hop le");
	}
}
//b5:ket thuc
	return 0;
}

