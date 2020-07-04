#include <stdio.h>
#define SIZE 10

void work_number_three();

int main(int argc, const char* argv[]) {
	//const int SIZE = 10;
	
	//void malloc(<memory size>);   memory allocation

	int variable;
	//int * area = (int*)malloc(sizeof(int) * SIZE);
	int * area = (int*)calloc(SIZE, sizeof(int));  //clear and allocate memory
	// the same
	int array[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) array[i] = i * 10;
	for (i = 0; i < SIZE; i++) printf("%d ", array[i]);
	puts("");
//	for (i = 0; i < SIZE; i++) *(area+i) = i * 10;
	for (i = 0; i < SIZE; i++) printf("%d ", *(area+i));
//	free(area);
	puts("");
	int newsize = SIZE + 10;
	area = realloc(area, sizeof(int)*(newsize + 10));
	for (i = 0; i < newsize; i++) *(area + i) = i * 10;
	for (i = 0; i < newsize; i++) printf("%d ", *(area + i));
	
	work_number_three();
	return 0;
}