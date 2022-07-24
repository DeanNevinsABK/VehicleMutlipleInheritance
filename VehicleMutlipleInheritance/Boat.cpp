#include "Boat.h"
#include <iostream>

// Constructors
Boat::Boat()
{

}

Boat::Boat(string name, int miles) : Vehicle()
{
	m_name = name;
	m_miles = miles;
}

// Destructor
Boat::~Boat()
{

}

// Member functions
void Boat::DisplayName()
{
	cout << "This boat is named " << m_name << "." << endl;
}

void Boat::Drive(int miles)
{
	m_miles += miles;
	cout << "The boat " << m_name << " drives " << miles << " miles." << endl;
}