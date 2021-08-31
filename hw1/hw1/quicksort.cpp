/*
	quicksort_test.cpp
	Millard A. Arnold V
	2021/08/28

	Source file for quicksort
*/

#include "quicksort.h"

void quicksort(std::vector<int> &data, int lo, int hi)
{
    if(data.empty()) return;
    if(lo>=0 && hi>=0)
    {
        if(lo<hi)
        {
            int p=partition(data, lo, hi);
            quicksort(data, lo, p-1);
            quicksort(data, p+1, hi);
        }
    }
}

int partition(std::vector<int> &data, int lo, int hi)
{
    int pivot = data[hi];
    int i = lo-1;
    for(int j = lo; j<=hi; ++j)
    {
        if(data[j] <= pivot)
        {
            ++i;
            int temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
    return i;
}
