#include <stdio.h>
#include <stdlib.h>

int main(){
	// Demo voi malloc: pointer = (castType*)malloc(size)
	// Cap phat bo nho cho 1 bien int 
	int *numbPtr; // Khai bao bien con tro 
	numbPtr= (int *)malloc(sizeof(int));
	*numbPtr=16;
	printf("%d: ", *numbPtr);
	//Giai phong bo nho: free(pointer)
	free(numbPtr);
	

	return 0;
}



