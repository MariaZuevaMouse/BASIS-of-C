#include <stdio.h>
#include <string.h>
#include <math.h>
#define ARRAY_SIZE 10

/*
/*
 * 1. ���������.
 *    ��������� ������������ ���� <math.h>, ������� �������,
 *    int calculateSquareEquality(int a, int b, int c, float* x1, float* x2);
 *    ������� ����� ������ ���������� ��������� ���� a * x ^ 2 + b * x + c = 0,
 *    � ���������� ����� ����� ��������� � ����������, ������ ������� ��������
 *    � �������� ���������� �1 � �2. ������� ������ ������� -1, ���� ���������
 *    �� ����� ������, 0, ���� � ��������� ���� ���� ������, � 1, ���� � ��������� ��� �����.
 * 2. �������.
 *    ���������������� ������ �� ����� �����, ������� �������, ����������� ��
 *    ���� ���� ������. ������� ������ ������� ����, ���� � ������� ��� �������� �����,
 *    � ��������� ������ ������� ��� �������� ����� � ������� � ������� �������.
 *    ����� ���������� �������, ���� ������ ��� ������, ������� ��� ����� �� ������� �� �����.
 * 4. *.
 *    ��� ��������, ���������� ���� integer �������� � ������ 4 �����, � ����������
 *    ���� short ��� �����. ������� �������, ������� ��������� ������ �� ���������������������
 *    ����� (���� int), � ������� ��� �� ����� ��������������������� ������� (���� short).
 *    ���, �� ����, ������ ���������� ���� �������. ������ ����������� ��� ���������������
 *    ������ �� �������� ������� ��� ����� �������� ������.
 */

int calculateSquareEquation(float a, float b, float c, float* x1, float* x2) {
	double D; //discriminant
	D = b * b - 4 * a * c;
	if (a == 0) {
		*x1 = (float)(-c / b);
		return 0;
	}
	else if (D > 0) {
		*x1 = (float)((-b + sqrt(D)) / 2 * a);
		*x2 = (float)((-b - sqrt(D)) / 2 * a);
		return 1;
	}
	else if (D == 0) {
		*x1 = (float)(-b / (2 * a));
		return 0;
	}
	else {
		// D < 0;
		return -1;
	}
}
int oddDoubler(int* arr, int len) {
	int i;
	int changed = 0;
	for (i = 0; i < len; i++) {
		if (arr[i] % 2 != 0) {
			arr[i] *= 2;
			changed = 1;
		}
	}
	return changed;
}

void asShortPrint(unsigned int* a, int len) {
	int i;
	unsigned short* out = a;
	for (i = 0; i < len * 2; i++) {
		printf("%d ", *(out + i));
	}

}
void work_number_two() {
	// 1. Pointers ax2 + bx + c = 0
	float a, b, c, x1, x2;

	printf("This program will calculate a square equation 'ax2 + bx + c = 0'");
	printf("\n Enter a: ");
	scanf_s("%f", &a);
	printf("\n Enter b: ");
	scanf_s("%f", &b);
	printf("\n Enter c: ");
	scanf_s("%f", &c);

	int result;
	result = calculateSquareEquation(a, b, c, &x1, &x2);
	switch (result) {
	case 0:
		printf("Equation has a unique root x = %f", x1);
		break;
	case 1:
		printf("Equation has two roots x1 = %f, x2 = %f", x1, x2);
		break;
	case -1:
		printf("Equation has no roots");
		break;
	default:
		printf("Exceptional answer: %d", result);
	}
	printf("\n");
	
	// 2. Arrays double odd (1 if changed)
	//const int ARRAY_SIZE = 10;
	int ARRAY[ARRAY_SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i;
	if (oddDoubler(ARRAY, ARRAY_SIZE))
		for (i = 0; i < ARRAY_SIZE; i++)
			printf("%d ", *(ARRAY + i));
	printf("\n");

	// 4. Starred int to short
	unsigned int arr[ARRAY_SIZE] = { 2000000, 1000000, 3000000, 4000000, 100000, 200000, 30000, 400000, 65535, 65536 };
	asShortPrint(arr, ARRAY_SIZE);
	
}
