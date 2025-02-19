﻿#include "tasks.h"

/*	Task 04. The Number of hundreds [число сотен]
*
*	Дано целое число N, определите число сотен в нём (третью цифру с конца).
*	Если такой цифры нет, то можно считать, что число сотен равно нулю.
*
*	Формат входных данных [input]
*	На вход дается любое целое число N в диапазоне С++ типа int.
*
*	Формат выходных данных [output]
*	Выведите одно целое число - ответ на задачу.
*
*	[sample function input 1]: 456
*	[sample function output 1]: 4
*
*	[ input 2]: -1234567
*	[output 2]: 5
*
*	[ input 3]: 1000
*	[output 3]: 0
*
*	[ input 4]: -12
*	[output 4]: 0
*/

int task04(int number) {

	if (number > -100 && number < 100) {
		return 0;
	}

	int hundreds = (number % 1000) / 100;

	return abs(hundreds);
}