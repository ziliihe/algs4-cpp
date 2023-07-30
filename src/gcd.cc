#include <iostream>
#include <cstdlib>
#include "algs.hpp"

int main(int argc, char* argv[]) {
    if (argc != 3 ) {
        std::cout << "Usage: " << argv[0] << " num1 num2" << std::endl;
        return 1;
    }

    int num1 = std::atoi(argv[1]);
    int num2 = std::atoi(argv[2]);
    std::cout << "gcd(" << num1 << "," << num2 << ") = " << gcd(num1, num2) << std::endl;

    return 0;
}