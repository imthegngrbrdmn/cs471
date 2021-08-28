//
//  main.cpp
//  hw1
//
//  Created by Millard Arnold on 8/27/21.
//

#define DOCTEST_CONFIG_IMPLEMENT
#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS
#include "doctest.h"

#include <iostream>
#include <string>

const std::string test_suite_name = "cs471-HW1";

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
