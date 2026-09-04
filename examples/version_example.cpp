#include <iostream>

#include <perception/core/version.hpp>

int main()
{
    std::cout << "perception-core version: "
              << perception::core::version()
              << '\n';

    return 0;
}