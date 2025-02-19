﻿#include "tasks.h"

/*	Task X. The Next Even Number [следующее чётное число]
*
*	На вход дается натуральное число N. 
*	Вычислите эффективным способом следующее за ним чётное число.
* 
*	Примечание
*	Для эффективной реализации алгоритма функции постарайтесь использовать 
*	только АРИФМЕТИЧЕСКИЕ операции языка C/C++
* 
*	Формат входных данных [input]
*	На вход дается целое положительное число N.
*
*	Формат выходных данных [output]
*	Выведите одно целое число - ответ на задачу.
*
*	[Sample function input 1]: 1
*	[Sample function output 1]: 2
*
*	[ input 2]: 2
*	[output 2]: 4
*
*	[ input 3]: 3
*	[output 3]: 4
*/

int taskX(int number) {

	if (number < 0) {
		return -1;
	}

	int res = 0;

	do {
		number++;
		res = number % 2 == 0 ? number : res;

	} while (number % 2 != 0);

	return res;
}
