#include <stdio.h>

int main(int argc, const char* argv[]) {
	char answer;
	/*
	printf("Do you want me to salute you?");
	scanf_s("%c", &answer);
	if (answer == 'y') {
		printf("Hellow, user!");
	}
	else if (answer == 'n') {
		printf("I didn't want to salute you anyway");
	}
	else {
		printf("I can not understand your input!");
	}
	*/
	
	int c = 10;
	int d = 15;

	c = (c > d) ? d : 0;
	if (c > d)
		c = d;
	else	
		c = 0;

	printf("%s", (1 > 0) ? "true" : "false");

	//  >  <  >=  <=  ==
	//&&  ||  !  ^(operands should be different)
	if (1 && 0) printf("false");
	if (1 || 0) printf("true");
	if (!(1)) printf("false");
	if (1 ^ 1) printf("false");

	/*
	if (1) {
		if (1) {
			//...
		}
	}
	*/
	printf("\n");
	int x = 7;
	if ((x >= 0) && (x <= 10)) {
		int var = 0;
		printf("X Fits!");
	}

	//Boolean Algebra
	printf("\n");
	//  &  |  !  ^   <<  >>  (1-true, 0-false)
	/*
	*  1 & 0 =0
	*  1 | 0 =1
	*  0 ^ 1 =1
	* !1 =0
	*/

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



	return 0;
}

