#include "Airplane.h"
#include <iostream>

// Constructors
Airplane::Airplane()
{
	m_altitude = 0;
}

Airplane::Airplane(string name, int miles) : Vehicle()
{
	m_name = name;
	m_miles = miles;
	m_altitude = 0;
}

// Deconstructor
Airplane::~Airplane()
{

}

// Member functions
void Airplane::DisplayName()
{
	cout << "This airplane is named " << m_name << "." << endl;
}

void Airplane::Drive(int miles)
{
	m_miles += miles;
	cout << "The airplane " << m_name << " drives " << miles << " miles." << endl;
}

int Airplane::GetAltitude()
{
	return m_altitude;
}

void Airplane::SetAltitude(int altitude)
{
	if (altitude > m_maxAltitude)
	{
		cout << "Set altitude failed! Altitude can not go above 30,000." << endl;
	}
	else if (altitude < 0)
	{
		cout << "Set altitude failed! Altitude can not go below 0." << endl;
	}
	else
	{
		m_altitude = altitude;
		cout << "The altitude of " << m_name << " has been successfully set to " << m_altitude << "." << endl;
	}
}