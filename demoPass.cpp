#include <stdio.h>
void addNumber(int *a){
	*a = *a + 5;
//	printf("Sau khi cong trong ham: %d\n", a);//15
}
int main(){
	int number =10;
	printf("Truoc khi su dung ham: %d\n", number);//10
	addNumber(&number);
	printf("Sau khi su dung ham: %d\n", number);//10
	return 0;
}

