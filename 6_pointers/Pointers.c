#include <stdio.h>

void swap_variables(int *x, int *y) {
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
	
}

int main(int argc, const char* argv[]) {
	int a = 50;
	printf("value of a is %d \n", a);
	printf("adress of a is %p \n", &a);

	int * pointer;
	pointer = &a;
	printf("value of pointer is %d \n", pointer);
	printf("adress of pointer is %p \n", &pointer);

	printf("variable 'pointer' points at %d \n", *pointer);
	*pointer = 70;
	printf("value of a is %d \n", a);

	int first = 50;
	int second = 40;
	printf("first = %d, second = %d  \n", first, second);
	swap_variables(&first, &second);
	printf("first = %d, second = %d  \n", first, second);

	/*
	char a = 11;
	char b = 15;
	printf("a = %d, b = %d  \n", a, b);
	a = a ^ b;
	// a = 11 ( 00001011 )
	// b = 15 ( 00001111 )
	// a ^ b = 00000100  a=4
	b = b ^ a;   //b= 00001011  (11)
	// b = 15 (00001111)
	// a = 4 ( 00000100)
	//  a ^ b = 00001011
	a = a ^ b;   //a= 15
	// a = 4 (00000100)
	// b = 11 (00001011)
	// a ^ b = 00001111  (15)
	printf("a = %d, b = %d  \n", a, b);

	a = a << 3;    // a *2 in 3   (15*8)
	b = b >> 3;    // b / (2 in 2)    (11/4)
	printf("a = %d, b = %d  \n", a, b);
	*/

	return 0;
}
