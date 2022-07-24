#include "Car.h"
#include <iostream>

// Constructors
Car::Car()
{
	
}

Car::Car(string name, int miles) : Vehicle()
{
	m_name = name;
	m_miles = miles;
}

// Destructor
Car::~Car()
{

}

// Member functions
void Car::DisplayName()
{
	cout << "This car is named " << m_name << "." << endl;
}

void Car::Drive(int miles)
{
	m_miles += miles;
	cout << "The car " << m_name << " drives " << miles << " miles." << endl;
}