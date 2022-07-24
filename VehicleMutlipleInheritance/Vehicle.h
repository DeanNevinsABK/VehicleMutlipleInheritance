#pragma once
#include <string>

using namespace std;

class Vehicle
{
protected:
	// Member variables
	string m_name;
	int m_miles;
public:
	// Constructors
	Vehicle();
	Vehicle(string name, int miles);

	// Destructor
	~Vehicle();

	// Member functions
	int GetMiles();
	virtual void DisplayName();
	virtual void Drive(int miles);
};