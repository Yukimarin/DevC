#include <stdio.h>
#include <stdlib.h>

int main(){
	// Demo malloc: pointer = (castType*)malloc(size)
	// Cap phat bo nho cho 1 bien int 
	int *numbPtr;
	numbPtr = (int*) malloc(sizeof(int));
	*numbPtr=16;
	printf("%d",*numbPtr);
	return 0;
}

