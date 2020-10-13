#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int arr[10];
	int i;
	srand(time(NULL));

	printf("Array with 10 Ints:\n");

	for (i = 0; i < 9; i++) {
		*(arr + i) = rand();		
	}

	arr[9] = 0;

	for (i = 0; i < 10; i++) {
		printf("Value %d: %d\n", i + 1, *(arr+i));		
	}

	printf("\nNew Array in Reverse Order:\n");

	int arr_pt[10];
	int *apt = arr_pt;
	int *ar = arr;

	for (i = 0; i < 10; i++) {
		*(arr_pt + i) = *(arr + (9 - i));	
	}

	apt = arr_pt;
	for (i = 0; i < 10; i++) {
		printf("Value %d: %d\n",i + 1, arr_pt[i]);
	}

	return 0;
}