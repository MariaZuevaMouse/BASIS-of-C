//#include "pch.h"
//#include "Main.h"
#include <stdio.h>

int main(int argc, const char* argv[]) {
	// \n  \t  \\ \0
	printf("Hello world \n");
	printf("This is a new \t row with tab \n" );
	printf("This is a new \\ row with symbol");
	printf("This is a new \0 row with symbol \n");
	
	// %d (int)  %s (string)  %c  (char)  %p (indicators) 
	//%f  (float)  %lf  (long float)   %x (double)  %%
	// %.2f
	// %05d
	int a = 50;
	printf("%05d%%  \n", a);
	printf("text and %5d%%  \n", a);

	short sh = 345;  // 2 bytes -32768 .. 32767
	int number = -56;  // 4 bytes -2.147.000.0000 .... +2.147.000.000
	unsigned int uint = 400000000; //  4 bytes   0... +4 294 000 000
	unsigned char symbol = 'A';    // 0...255
	float real = 5.345f;  // 4 bytes
	double realdouble = 5.345;  //long float  - 8 bytes
	// no boolean type
	int true = 1;
	int false = 0;
	char sym = 75;  //   1 byte  -128 .. +128

	printf("Variable a has value: %d \n", a);
	printf("Variable a stored by adress: %p \n", &a);

	int input;
	printf("enter some number, please: \n");
	scanf_s("%d", &input);
	printf(" You was entered %d, we doubled it for you: %d  \n", input, input * 2);

	//  +  -  *  /
	// & | ! ^ <<  >>

	int variable = 70;
	printf("variable %d\n", variable);
	variable = variable + 50;
	variable += 50;
	printf("were summed 50 and result %d \n", variable);
	variable = variable / 4;		// дробная часть будет проигнорирована
	printf("Integer division of a variable by 4: %d\n", variable);

	int reminder = variable % 4;
	printf("The remainder of dividing 170 by 4: %d\n", reminder);
	reminder++;
	printf("increment %d \n", reminder);
	
	getchar();
	return 0;
}
