#include "Vehicle.h"
#include <iostream>

// Constructors
Vehicle::Vehicle()
	:m_name("Unknown")
	, m_miles(0)
{

}

Vehicle::Vehicle(string name, int miles)
	: m_name(name)
	, m_miles(miles)
{

}

// Destructor
Vehicle::~Vehicle()
{

}

// Member Functions
int Vehicle::GetMiles() { return m_miles; }

void Vehicle::DisplayName()
{
	cout << "This vehicle is named " << m_name << "." << endl;
}

void Vehicle::Drive(int miles)
{
	m_miles += miles;
	cout << "The vehicle " << m_name << " drives " << miles << " miles." << endl;
}