#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"
#include "Airplane.h"
#include <iostream>

int main()
{
	Vehicle vehicle;
	vehicle.DisplayName();
	cout << vehicle.GetMiles() << endl;
	vehicle.Drive(400);
	cout << vehicle.GetMiles() << endl;

	cout << endl;

	Car car("Gumby", 125);
	cout << car.GetMiles() << endl;
	car.Drive(600);
	cout << car.GetMiles() << endl;
	
	cout << endl;

	Boat boat("Dobby", 300);
	boat.DisplayName();
	cout << boat.GetMiles() << endl;
	boat.Drive(1100);
	cout << boat.GetMiles() << endl;
	
	cout << endl;

	Airplane airplane("Freya", 1645);
	airplane.DisplayName();
	cout << airplane.GetMiles() << endl;
	airplane.Drive(150);
	cout << airplane.GetMiles() << endl;
	cout << airplane.GetAltitude() << endl;
	airplane.SetAltitude(50000);
	airplane.SetAltitude(-450);
	airplane.SetAltitude(6000);
	cout << airplane.GetAltitude() << endl;
	
}

