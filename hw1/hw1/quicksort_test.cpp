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

//Make output easier.
const std::string test_suite_name = "cs471-HW1";

TEST_CASE("Sorting")
{
	SUBCASE("Special Cases")
	{
		INFO("Empty Vector");
		std::vector<int> emptyVect{};
		REQUIRE(emptyVect.empty());
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
