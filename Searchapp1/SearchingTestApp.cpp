#include "Searching.h"
#include <iostream>
#include <vector>
#include <array>

int main() {
    std::vector<int> a({ 2,4,7,9,12,15,15,15,29,70,80 });
    std::array<int, 10> b = { 1,3,5,7,9,11,13,15,17,19 };

    // vector test
    int result = binarySearchFirst(a, 15);
    std::cout << "First index of 15 in vector = " << result << std::endl;

    result = binarySearchFirst(a, 100);
    std::cout << "First index of 100 in vector = " << result << std::endl; // -1

    // array test
    result = binarySearchFirst(b, 7);
    std::cout << "First index of 7 in array = " << result << std::endl;

    result = binarySearchFirst(b, 2);
    std::cout << "First index of 2 in array = " << result << std::endl; // -1

    return 0;
}
