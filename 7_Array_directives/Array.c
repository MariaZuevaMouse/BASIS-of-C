#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LENGHT 10
#define NUMBERS_AMMOUNT 1000000
#define boolean int
#define true 1
#define false 0

void printArray(int* array, int lenght) {
	for (int i = 0; i < lenght; i++)
		printf("%d ", array[i]);
}
float avarage(int* array, int lenght) {
	float result =0; 
	int i;
	for (i = 0; i < lenght; i++)
		result += *(array + i);

	return result/lenght;
}

void advancedArraysMain();
//int calculateSquareEquation(int a, int b, int c, float* x1, float* x2);
void work_number_two();
int main(int argc, const char* argv[]) {
	
	advancedArraysMain();

	work_number_two();

	/*int a = ARRAY_LENGHT;

	int array1[ARRAY_LENGHT];
	array1[0] = 10;
	array1[1] = 20;
	//....

	int array2[5] = { 0, 1, 2, 3, 4 };
	*/
	/*
	srand(time(NULL));
	int freaquency[ARRAY_LENGHT] = { 0 };
	int a, i;
	for (i = 0; i < NUMBERS_AMMOUNT; i++) {
		a = rand() % ARRAY_LENGHT;
		freaquency[a]++;
	}

	for (i = 0; i < ARRAY_LENGHT; i++) {
		printf("Number %d generated %6d (%5.2f%%) times \n", i, freaquency[i], ((float)freaquency[i] / NUMBERS_AMMOUNT * 100));

	}
	*/
	int arr[ARRAY_LENGHT];  //  [ [] [] [] [] [] [] [] [] [] [] ]
	//arr[0] = 20;            //  [ []                            ]
	//arr[1] = 50;            //  [    []                         ]
	//arr[10] = 60;           //  [                               ] []

	int i = 0;
	float result = 0;
	while (i < ARRAY_LENGHT) {
		printf("Enter value no. %d: \n", i);
		scanf_s("%d", arr + i);
		i++;
	}
	printf(" Our array is: ");
	//for (i = 0; i < ARRAY_LENGHT; i++) 
		//printf("%d ", arr[i]);
	printArray(arr, ARRAY_LENGHT);
	
	printf("\n and the average is: ");
	//for (i = 0; i < ARRAY_LENGHT; i++)
		//result += *(arr + i);

	printf("%f \n", avarage(arr, ARRAY_LENGHT));

	return 0;
}