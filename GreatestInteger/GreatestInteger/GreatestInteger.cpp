
#include <iostream>

int main()
{
	//int list[] = { 5, 2, 25, 46, 84, 9, 16 };
	int list[] = { 48, 59, 72, 237, 8, 169, 48, 25, 37, 19 };
	int size = sizeof(list) / sizeof(list[0]);
	int largest = -1;

	for (int i = 0; i < size; i++) {
		if (list[i] > largest) {
			largest = list[i];
		}
	}

	std::cout << "The largest number in the list is " << largest << "\n";

	return 0;
}
