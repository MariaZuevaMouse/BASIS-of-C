#include <stdio.h>

int main() {
	float first;
	float second;
	int operator;
	printf("enter fist operand: ");
	scanf_s("%f", &first);
	printf("enter 1 for +, 2 for -, 3 for *, 4 for / operation \n");
	scanf_s("%d", &operator);
	if (operator == 4) {
		do {
			printf("\n enter second operand: ");
			scanf_s("%f", &second);
		} while (second == 0);
	}
	printf("\n enter second operand: ");
	scanf_s("%f", &second);
	float result;
	char c;
	switch (operator) {
	case 1:
		c = '+';
		result = first + second;
		printf("%f %c %f = %f", first, c, second, result);
		break;
	case 2:
		c = '-';
		result = first - second;
		printf("%f %c %f = %f", first, c, second, result);
		break;
	case 3:
		c = '*';
		result = first * second;
		printf("%f %c %f = %f", first, c, second, result);
		break;
	case 4:
		c = '/';
		result = first / second;
		printf("%f %c %f = %f", first, c, second, result);
		break;
	default:
		printf("unknown operation!");
	}
	work_one();
	
	return 0;
}