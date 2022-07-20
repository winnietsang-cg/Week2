
#include <iostream>

int main()
{
	do {
		int n;
		std::cout << "Enter an integer: ";
		std::cin >> n;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(100, '\n');
			std::cout << "Invalid input\n";
		}
		else {
			std::cout << "Factors of " << n << ": ";
			for (int i = 1; i <= n; i++) {
				if (!(n % i)) {
					std::cout << i << " ";
				}
			}
			break;
		}

	} while (true);

	return 0;
}
