#include<cmath>

namespace Calculator
{

	//set the current value to 0
	void clearValue();

	//add value to current value and returns the current value
	double addValue(double newValue);

	//subtracts the value from the current value and returns the current value
	double subtractValue(double newValue);

	//multiplies the value from the current value and returns the current value
	double multiplyValue(double newValue);

	//divide the value into the current value and return the current value
	double divideValue(double newValue);

	//stores the current value into the memory value
	void memory_storage();

	//recalls the current value from storage
	double memory_recall();

	//clears the memory value
	void clear_memory();

	//invert the current value and return a inverted value
	double invert_value();

	//uses an exponent to raise the number to the exponent
	double power_value(double newValue);









}
