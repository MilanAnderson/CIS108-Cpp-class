// Exercise 2.cpp : This file contains the 'main' function. Program execution begins and ends there
/* =================================================== */
/*				                Includes               */
/*==================================================== */
#include <iostream>
#include <string>
using namespace std;
/*==================================================== */
/*								Prototypes             */
/*==================================================== */
void collect_user_inputs(string& userFirstName, string& userLastName, int& userAge, int& userConfidence);
void display_user_outputs(string userFirstName, string userLastName, int userAge, int userDogYears, double userConfidence);
/*==================================================== */
/*                               Main                  */
/*==================================================== */
int main()
{
	string First_name;
	string Last_name;
	int Age;
	int Confidence;
	int Dog_years;
	double converted_confidence = 0;
	
	collect_user_inputs( First_name, Last_name, Age, Confidence);

	//Calculate the age of the user in dog years (1 human year = 7 dog years)

	Dog_years = 7 * Age;
	//Convert their programmer confidence to a double. If their confidence is less than 50% (0.5), output the statement: "I agree, programmers can't be trusted!", otherwise output the statement "Writing good code takes hard work!"

	converted_confidence = (double)Confidence / 100;

	display_user_outputs(First_name, Last_name, Age, Dog_years, converted_confidence);

	return 0;
}
/*==================================================== */
/*                          Definitions                */
/*==================================================== */
void collect_user_inputs(string& userFirstName, string& userLastName, int& userAge, int& userConfidence)
{
	// Ask for the first name
	cout << "Enter your first name: ";
	cin >> userFirstName;

	// Ask for the last name
	cout << "Enter your last namne: ";
	cin >> userLastName;

	//Enter their age
	cout << "Enter your age: ";
	cin >> userAge;

	// Enter confidence in programming
	cout << "Enter your confidence in programmers in percentage (0-100): ";
	cin >> userConfidence;

	return;
}
void display_user_outputs(string userFirstName, string userLastName, int userAge, int userDogYears, double userConfidence)
{
	//Output a gretting the form: "Hello first_name  last_name, nice to meet you! You might be age in human years, but in dog years you are dog_age."
	cout << "Hello " << userFirstName << " " << userLastName << " " << "nice to meet you! " << "You might be " << userAge << " in human years " << "but in dog years you are " << userDogYears << ". ";

	if (userConfidence < 0.5)
	{
		cout << "I agree, programmers can't be trusted ";
	}
	else
	{
		cout << "Writing good code takes hard work! ";
	}
	//Use functions to get the input from the user, and a function to handle the output.


	//Greet the user
	return;


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
