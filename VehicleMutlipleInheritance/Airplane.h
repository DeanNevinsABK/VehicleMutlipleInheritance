#pragma once
#include "Vehicle.h"

class Airplane : public Vehicle
{
private:
	const int m_maxAltitude{30'000};
	int m_altitude;
public:
	// Constructors
	Airplane();

	Airplane(string name, int miles);

	// Deconstructor
	~Airplane();

	// Member functions
	void DisplayName() override;
	void Drive(int miles) override;
	int GetAltitude();
	void SetAltitude(int altitude);
};