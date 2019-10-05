#include "Calculator.h"

namespace Calculator
{
	double currentValue = 0.0f;
	double memoryValue = 0.0f;

	//set the current value to 0
	void clearValue()
	{
		currentValue = 0.0;
	}

	//add value to current value and return the current value
	double addValue(double newValue)
	{
		currentValue = currentValue + newValue; 

		return currentValue;
	}
	
	//subtracts value from the current value and returns the current value
	double subtractValue(double newValue)
	{
		currentValue = currentValue - newValue;

		return currentValue;

	}

	//multiply value from the current value and return the current value
	double multiplyValue(double newValue)
	{
		currentValue = currentValue * newValue;

		return currentValue;

	}

	//divide the value into the current value and return the current value
	double divideValue(double newValue)
	{
		currentValue = currentValue / newValue;

		return currentValue;
	}

	//stores the current value into the memory value
	void memory_storage()
	{
		memoryValue = currentValue;
	}

	//recalls the current value from storage
	double memory_recall()

	{
		currentValue = memoryValue;

		return currentValue;
	}

	//clears the memory value
	void clear_memory()
	{
		memoryValue = 0.0;
	}

	//invert the current value and return a inverted value
	double invert_value()
	{
		currentValue = currentValue * (-1);

		return currentValue;
	}

	//uses an exponent to raise the number to the exponent
	double power_value(double newValue)
	{
		currentValue = pow(currentValue, newValue);

		return currentValue;
	}
}
