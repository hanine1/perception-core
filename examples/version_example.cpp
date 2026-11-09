#include <iostream>

#include <perception/core/version.hpp>
#include <perception/core/point3d.hpp>

int main()
{
    std::cout << "perception-core version: "
              << perception::core::version()
              << std::endl;

    const perception::core::Point3f point(1.F, 2.F, 3.F);
    std::cout << "Point: " << point.transpose() << std::endl;

    return 0;
}