#include <iostream>
#include <vector>
#include <chrono>

//Simple program that shows the use of std::chrono::months and std::chrono::year

// both were added in c++20 and to compile you will need gcc-10
int main()
{
 
    constexpr auto ym {std::chrono::years(2021)};  
    std::cout << (ym.year() == std::chrono::years(2021)) << ' ';
    std::cout << (ym.month() == std::chrono::months(7)) << '\n';
 
}


//should return 'true true'
/*compiling with command gcc-10 std-c++2a HW3.cpp */
//years and months were added in c++20 according to