﻿#include "tasks.h"

/*	Task 01. The Treasure Seekers and gold coins (1) [искатели сокровищ и золотые монеты]
*
*	N искателей сокровищ нашли K золотых монет и решили разделить их поровну.
*	Определите, сколько золотых монет достанется каждому искателю.
*
*	Формат входных данных [input]
*	На вход даётся два целых положительных числа N и K.
*
*	Формат выходных данных [output]
*	Выведите одно целое число - ответ на задачу.
*
*	[sample function  input 1] (пример передаваемых в функцию параметров): 3 14
*	[sample function output 1] (пример возвращаемого функцией результата): 4
*
*	[ input 2]: 4 24
*	[output 2]: 6
*
*	[ input 3]: 16 1
*	[output 3]: 0
*/

int task01(int seeker, int coin) {

	if (seeker < 0 || coin < 0) {
		cout << "Out of range.";
		return -1;
	}

	return coin / seeker;
}