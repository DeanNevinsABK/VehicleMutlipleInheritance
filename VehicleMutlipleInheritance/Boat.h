#pragma once
#include "Vehicle.h"
#include <string>

class Boat : public Vehicle
{
public:
	// Constructors
	Boat();

	Boat(string name, int miles);

	// Destructor
	~Boat();

	// Member functions
	void DisplayName() override;
	void Drive(int miles) override;
};