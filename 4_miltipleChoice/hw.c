/* 1. Математика.
*    Есть формула(расчёта резисторного делителя) Uo = Ui * (R1 / (R2 + R1)).
*    Напишите формулы расчёта каждой переменной по отдельности, в формате :
*Ui = ...;
*R1 = ...;
*R2 = ...;
*
* 2. Условия.
*    Запросить у пользователя любое целое число.Написать программу которая проверит,
*входит ли введённое число в диапазон(например, от 0 до 100, включительно) и
*    выведет на экран сообщение о результате проверки.
*
* 3. Циклы.
*    Запросить у пользователя десять чисел.Вывести на экран среднее арифметическое введённых чисел.
*
* 4. *.
*    Запросить у пользователя количество используемых для вывода строк.
*    Написать программу, которая при помощи циклов и символа ^ будет рисовать
*    на указанном количестве строк равнобедренный треугольник.
*/
//#include "hw.h"
#include <stdio.h>

void work_one() {
	// 1. Maths. Uo = Ui * (R1 / (R2 + R1))
	int Ui;
	int Uo;
	int R1;
	int R2;
	// scanf any three variables and get the fourth
	//Ui = Uo * (R1 + R2) / R1;
	//R1 = R2 * Uo / (Ui - Uo);
	//R2 = (Ui - Uo) * R1 / Uo;

	// 2. Terms 0..100
	const int RANGE_MIN = 0;
	const int RANGE_MAX = 100;
	int input;
	printf("\n Enter a number: ");
	scanf_s("%d", &input);
	printf("Your number '%d' %sfit the range of (%d to %d)\n",
		input,
		(input >= RANGE_MIN && input <= RANGE_MAX) ? "" : "does not ",
		RANGE_MIN,
		RANGE_MAX
	);

	// 3. Cycles mean()
	const int NUMS_TO_ASK = 10;
	int i = 0;
	float total = 0;
	do {
		printf("Enter a number: ");
		scanf_s("%d", &input);
		total += input;
	} while (++i < NUMS_TO_ASK);
	printf("The mean of entered numbers is: %.2f\n", total / i);

	// 4. Starred triangle
	int lines;
	printf("Enter number of lines: ");
	scanf_s("%d", &lines);
	int j;
	for (i = 0; i < lines; i++) {
		for (j = 1; j < lines - i; j++)
			printf(" ");

		for (j = lines - i * 2; j <= lines; j++)
			printf("^");

		printf("\n");
	}
}