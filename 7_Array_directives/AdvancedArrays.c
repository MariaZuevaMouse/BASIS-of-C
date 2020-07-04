#include <stdio.h>

void advancedArraysMain() {
	printf("multi-dimensional Arrays! \n");

	const int rows = 10, cols = 10;
	int table[10][10];
	int r, c;

	for (r = 0; r < rows; r++) {
		for (c = 0; c < cols; c++)
		{
			// scanf("%d", &table[r][c]);
			table[r][c] = (r + 1)*(c + 1);
		}
	}

	for (r = 0; r < rows; r++) {
		for (c = 0; c < cols; c++)
			printf("%3d", table[r][c]);
		printf("\n");
	}

	char*  stringArray[3] = { "Hello", "C", "World!" };
	for (c = 0; c < 3; c++) {
		printf("%s", stringArray[c]);
	}


	int twoDimensional[5][5];
	/*
	[] [] [] [] []
	[] [] [] [] []
	[] [] [] [] []
	[] [] [] [] []
	*/

	int threeDimensional[3][3][3]; // Rubic's cube
}