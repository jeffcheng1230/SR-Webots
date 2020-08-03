#include <string>
#include <iostream>
using namespace std;

//structure for a car with appropriate attributes

typedef struct {
	int seats;
	string brand;
	string licensePlate;
	int manufactureDate;
} Car;

//structure for sample bit field
//uses 4 bits, so one BitField object takes up 1 byte (8 bits in 1 byte, but cannot go lower that 1 byte)

typedef struct {
	bool a : 1;
	bool b : 1;
	bool c : 1;
	bool d : 1;
} BitField;

int main() {
	Car myCar;
	myCar.seats = 5;
	myCar.brand = "BMW";

	Car friendCar;
	friendCar.seats = 8;
	friendCar.licensePlate = "34C5DO";

	BitField myBitField;
	myBitField.a = 1;
	myBitField.c = 1;

	cout << myCar.brand << endl;
	cout << friendCar.seats << endl;
	cout << myBitField.a << endl;
}