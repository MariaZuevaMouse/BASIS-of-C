#include <stdio.h>
//#include "header.h"
int sum(int x, int y) {
	int result = x + y;
	return result;
}


int main(int argc, const char* argv[]) {
	int a;
	printf("enter a number");
	scanf_s("%d", &a);
	sum(50, a);
	printf("%d  \n", sum(50, a));

	int number = 71;
	printf("Number %d is %s simple number \n", number, isPrime(number) ? "a" : "not");
	return 0;
}
