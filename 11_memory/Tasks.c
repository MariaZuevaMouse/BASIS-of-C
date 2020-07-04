#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/*
 * 1. Строки.
 *    Описать функцию, возвращающую строку с двоичным представлением десятичного числа,
 *    переданного в аргументе этой функции.
 *
 * 2. Структуры.
 *    Описать структуру "прямоугольник", содержащую целочисленные значения длины, ширины,
 *    периметра и площади прямоугольника. Написать функцию, принимающую на вход указатель
 *    на структуру, подсчитывающую и записывающую площадь и периметр данного прямоугольника в структуру.
 *
 * 3. Выделение памяти.
 *    Написать функцию-обёртку, возвращающую указатель на область памяти, которую затем можно
 *    использовать как массив из элементов типа integer. Количество элементов указывается в
 *    аргументе функции. Массив должен быть гарантированно инициализирован нулями. Для проверки -
 *    заполните этот массив и выведите на экран.
 *
 * 4. *.
 *    Описать структуру "прямая линия" которая должна состоять из длины и двух внутренних структур типа
 *    "точка", в каждой из которых должны содержаться координаты по оси 'х' и по оси 'у'. Описать
 *    функцию принимающую на вход координаты двух точек, и возвращающую структуру "линия" с подсчитанной длиной.
 */
typedef struct rectangle {
	int height;
	int width;
	int area;
	int perimeter;
} Rectangle;

typedef struct point {
	int x;
	int y;
} Point;

typedef struct line {
	float length;
	Point p1;
	Point p2;
} Line;

Line initLine(int x1, int y1, int x2, int y2) {
	Line line;
	line.p1.x = x1;
	line.p1.y = y1;
	line.p2.x = x2;
	line.p2.y = y2;
	line.length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return line;
}

void decToBin(int in, char* result) {
	char out[64];
	int i = 0;
	int temp = in;
	while (temp != 0) {
		temp = temp >> 1;
		i++;
	}
	out[i] = '\0';
	while (in > 0) {
		out[--i] = (in % 2) ? '1' : '0';
		in /= 2;
	}
	//strcat_s(result, out);
}

void calcRectangle(Rectangle *r) {
	r->area = r->height * r->width;
	r->perimeter = (r->height + r->width) * 2;
}

int* arrayInit(int l) {
	return calloc(l, sizeof(int));
}

void work_number_three() {
	// 1. Strings decToBin()
	/*
	char bin[64] = "b'";
	int number;

	printf("Please, enter a number to convert:");
	scanf_s("%d", &number);

	decToBin(number, bin);
	printf("Your number in binary is: %s\n", bin);
	*/
	// 2. Structures rectangle
	Rectangle rectangle;
	printf("Enter rect. height: ");
	scanf_s("%d", &rectangle.height);
	printf("Enter rect. width: ");
	scanf_s("%d", &rectangle.width);
	calcRectangle(&rectangle);
	printf("Your rectangle's area is %d, and perimeter length is %d\n", rectangle.area, rectangle.perimeter);

	// 3. mem allocation array of int
	const int ARR_SIZE = 5;
	int * array = arrayInit(ARR_SIZE);
	int i;
	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", *(array + i));
	puts("");

	for (i = 0; i < ARR_SIZE; i++)
		*(array + i) = i * 10;

	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", *(array + i));
	puts("");

	// 4. Starred. line (points)
	Line l = initLine(5, 4, 8, 9);
	printf("Your line's point1 is: x = %d, y = %d \n", l.p1.x, l.p1.y);
	printf("Your line's point2 is: x = %d, y = %d \n", l.p2.x, l.p2.y);
	printf("Your line's length is: %f \n \n", l.length);

}
