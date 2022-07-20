
#include <iostream>

int main()
{
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;
    if (year % 4) {
        std::cout << year << " is not a leap year\n";
    }
    else {
        std::cout << year << " is a leap year\n";
    }
    return 0;
}
