#include <stdio.h>

int main(){
	// Demo for 
//	for(int i =0;i<10; i++){
//		printf("Lan lap thu  %d, ket qua la: %d\n", i+1, i);
//		if(i==5){
//			break;
//		}
//	}
//	
//	int i;
//	for(i=0; i<10; i++){
//		printf("Lan lap thu %d, ket qua la: %d\n", i+1, i);
//	}
//	printf("%d", i);

// Demo vong lap while 
	// lam chuong trinh doan so 
//	int correctAnswer = 54;
//	int answer;
//	int check = 1;
//	while(check ==1){
//		printf("Nhap vao so nguyen bat ky: \n");
//		scanf("%d", &answer);
//		if(answer > 54){
//		printf("So ban doan lon hon gia tri can tim\n");
//		} else if(answer < 54){
//		printf("So ban doan nho hon gia tri can tim\n");
//		}else {
//		printf("BINGOOOOO\n");
//		check =0;
//		}	
//	}

// Cau lenh break, coutinue;
for(int i =0; i<10; i++){
	printf("Ket qua la: %d\n",i);
	if(i==2){
		continue;
	}
	printf("hello world\n");
}
	return 0;
}

