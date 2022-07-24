#pragma once
#include "Vehicle.h"
#include <string>

class Car : public Vehicle
{
public:
	// Constructors
	Car();

	Car(string name, int miles);

	// Destructor
	~Car();

	// Member functions
	void DisplayName() override;
	void Drive(int miles) override;
};