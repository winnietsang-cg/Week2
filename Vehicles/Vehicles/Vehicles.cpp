
#include <iostream>
#include <stdlib.h>

class Vehicle {
public:
	Vehicle(int mph);
	virtual void Drive(int minutes) = 0;

protected:
	int m_mph;
};

class Car : Vehicle {
public:
	Car(int minutes) : Vehicle(minutes) { }
	void Drive(int minutes);
};

class Boat : Vehicle {
public:
	Boat(int minutes) : Vehicle(minutes) { }
	void Drive(int minutes);
};

class Airplane : Vehicle {
public:
	Airplane(int minutes) : Vehicle(minutes) { }
	void Drive(int minutes);
};



int main()
{
	Car car1(60);
	Boat boat1(30);
	Airplane airplane1(500);

	int m;
	std::cout << "Vehicle Test\nInput number of minutes: ";
	std::cin >> m;

	car1.Drive(m);
	boat1.Drive(m);
	airplane1.Drive(m);

/*
	bool running = true;

	while (running) {
		std::cout << "Select vehicle:\n1.) Car\n2.) Boat\n3.) Airplane\n4.) Quit\n";
		int input;
		std::cin >> input;

		switch (input) {
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:
			running = false;
			break;
		default:
			std::cout << "Invalid input. Press Enter to continue.";
		}

		std::cin.clear();
		std::cin.ignore(100, '\n');
		system("cls");
	}
*/
	return 0;
}



Vehicle::Vehicle(int mph) {
	m_mph = mph;
}

void Car::Drive(int minutes) {
	std::cout << "Car drove " << m_mph * minutes / 60.0f << " miles at " << m_mph << " mph.\n";
}

void Boat::Drive(int minutes) {
	std::cout << "Boat traveled " << m_mph * minutes / 60.0f << " miles at " << m_mph << "mph.\n";
}

void Airplane::Drive(int minutes) {
	std::cout << "Airplane flew " << m_mph * minutes / 60.0f << " miles at " << m_mph << "mph.\n";
}