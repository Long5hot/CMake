#include<iostream>
#include<concepts>

template <typename T>
requires std::integral<T>
T add( T a , T b) {
    return a+b;
}

int main() {

    std::cout << "Hello C++ 20 with CMake on Linux" << std::endl;
    std::cout << "The Sum of a + b = " << add(7,5) << std::endl;
    return 0;
}