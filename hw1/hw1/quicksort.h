/*
	quicksort_test.cpp
	Millard A. Arnold V
	2021/08/28

	Header file for quicksort
*/

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <algorithm>	//std::swap
#include <cstddef>		//std::size_t

template <typename A>
void quicksort(A data, std::size_t lo, std::size_t hi);

template <typename A>
void partition(A data, std::size_t lo, std::size_t hi);

#endif //QUICKSORT_H
