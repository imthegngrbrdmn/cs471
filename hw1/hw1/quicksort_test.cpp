/*
	quicksort_test.cpp
	Millard A. Arnold V
	2021/08/28

	Test program for CS471 homework 1
*/

//For Doctest
#define DOCTEST_CONFIG_IMPLEMENT
#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS
#include "doctest.h"

//Includes for test program
#include "quicksort.h"
#include <iostream>
#include <string>
#include <algorithm>

//Make output easier.
const std::string test_suite_name = "cs471-HW1";

TEST_CASE("Sorted")
{
	SUBCASE("Empty")
	{
		INFO("Empty Vector");
		std::vector<int> emptyVect{};
		quicksort(emptyVect, 0, 0);
		REQUIRE(emptyVect.empty());
	}
	SUBCASE("Single Element")
	{
		std::vector<int> single{1};
		quicksort(single, 0, 0);
		INFO("Vector has length 1");
		REQUIRE(single.size()==1);
		INFO("Vector contains the same element");
		REQUIRE(single[0]==1);
	}
	SUBCASE("Two Elements")
	{
		std::vector<int> positiveSorted{1,2};
		std::vector<int> untouchedCopy(positiveSorted);
		quicksort(positiveSorted, 0, 1);
		INFO("Positive vector has length 2");
		REQUIRE(positiveSorted.size()==2);
		INFO("Positive vector contains the same elements & order");
		REQUIRE(positiveSorted==untouchedCopy);
		std::vector<int> signedSorted{-1,2};
		untouchedCopy=signedSorted;
		quicksort(signedSorted, 0, 1);
		INFO("Mixed vector has length 2");
		REQUIRE(signedSorted.size()==2);
		INFO("Mixed vector contains the same elements & order");
		REQUIRE(signedSorted==untouchedCopy);
	}
	SUBCASE("More Elements")
	{
		std::vector<int> sorted{-700,-7,-6,0,1,2,38,100};
		std::vector<int> untouchedCopy(sorted);
		quicksort(sorted, 0, ((int)sorted.size())-1);
		INFO("Vector has same length");
		REQUIRE(sorted.size()==untouchedCopy.size());
		INFO("Vector contains the same elements");
		REQUIRE(sorted==untouchedCopy);
	}
}

TEST_CASE("Unsorted")
{
	SUBCASE("Length 2")
	{
		std::vector<int> data{28,-32};
		std::vector<int> standardSort(data);
		quicksort(data, 0, 1);
		std::sort(standardSort.begin(), standardSort.end());
		INFO("Vector has length 2");
		REQUIRE(data.size()==2);
		INFO("Vector is sorted");
		REQUIRE(data==standardSort);
	}
}

//Run tests & show results
int main(int argc, char** argv)
{
	doctest::Context dtcontext;
	int dtresult;
	dtcontext.applyCommandLine(argc, argv);
	dtresult = 0;
	if(!dtresult)
	{
		std::cout << "Begin tests for " << test_suite_name << std::endl;
		dtresult = dtcontext.run();
		std::cout << "End tests " << test_suite_name << std::endl;
	}
	std::cout << "Press ENTER to quit";
	std::cout.flush();
	while (std::cin.get() != '\n');
	return dtresult;
}
