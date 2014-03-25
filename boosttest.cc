#include <boost/version.hpp>
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Boost version: " << std::hex
              << ((BOOST_VERSION >> 20) & 0xF)
              << "."
              << ((BOOST_VERSION >> 8) & 0xFFF)
              << "."
              << (BOOST_VERSION & 0xFF)
              << std::endl;
    return 0;
}
