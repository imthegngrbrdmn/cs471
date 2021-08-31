/*
	quicksort_test.cpp
	Millard A. Arnold V
	2021/08/28

	Header file for quicksort
*/

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <algorithm>	//std::swap
#include <vector>

void quicksort(std::vector<int> &data, int lo, int hi);

int partition(std::vector<int> &data, int lo, int hi);

#endif //QUICKSORT_H
