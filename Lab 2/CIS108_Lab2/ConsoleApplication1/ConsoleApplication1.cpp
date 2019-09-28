/* =================================================== */
/*				                Includes               */
/*==================================================== */
#include "pch.h"
#include <iostream>
/*==================================================== */
/*								Prototypes             */
/*==================================================== */
//There are no prototypes
/*==================================================== */
/*                               Main                  */
/*==================================================== */

int main()
{
	int userage;
	int age_converted;
	double Fahrenheit;
	double temperature_converted;

	//Enter their age
	std::cout << "Enter your age: ";
	std::cin >> userage;
	age_converted = userage + 10;
	std::cout << "You will be " << age_converted << " in 10 years.\n";
	std::cout << "Please enter the current temperatures in degrees Fahrenheit ";
	std::cin >> Fahrenheit;
	temperature_converted = ((Fahrenheit - 32) * (5 / 9));
	std::cout << "The current temperature in celsius is " << temperature_converted <<"\n";
		
	return 0;
}
/*==================================================== */
/*                          Definitions                */
/*==================================================== */
//There are no definitions


