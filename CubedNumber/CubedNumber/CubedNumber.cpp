
#include <iostream>

float Cube(float n);

int main()
{
    float number;

    std::cout << "Input number: ";
    std::cin >> number;
    std::cout << "N^3 = " << Cube(number) << "\n";

    return 0;
}

float Cube(float n) {
    return n * n * n;
}
