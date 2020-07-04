#include <stdio.h>
#include <math.h>

int main(int argc, const char* argv[]) {
	int a = 10;
	int b = 20;
	int even = 0;
	while (a < b) {
		printf("%d \n", a);
		if (a % 2 == 0)
			even++;
		a++;
	}
	printf("there are %d even numbers in sequence", even);
	/*
	int input;
	do {
		printf("Enter a devided fo 100 (remember, that you can not divide by zero)\n");
		scanf_s("%d", &input);
	} while (input == 0 );

	printf("100 / %d = %d  \n", input , 100/input );
	printf(" and the remainder will be %d, by the way", 100 % input);
	*/

	int number;
	printf("Input a number, please");
	scanf_s("%d", &number);
	printf("\n");
	int d = 0, i = 1;
	while (i <= number) {
		if (number%i++ == 0)
			d++;
		else
		{
			continue;
		}
		if (d == 3)break;
	}
	printf("Number %d is %s simple number \n", number, (d == 2) ? " " : "not");

	//int i;
	int significative = 10;
	int base = 2, result = 1;
	for (i = 0; i < significative; i++) {
		result = result * base;
	}
	printf(" %d powred by %d id %d \n", base, significative, result);
	return 0;
}
