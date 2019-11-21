// CIS108_Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include "MusicDB.h"
#include <iostream>
#include <string>

using namespace std;

void print_menu();

int main()
{
	string input; 
	// step 1: Load in a database file
	MusicBox::load_music();
	MusicBox::total_numberofsongs();
	// step 2: Print the menu 
	print_menu();
	// step 3: User commands
	while (true)
	{
		cin >> input;
		if(input == "add")
		{
			MusicBox::addnew_song();
		}
		else if (input == "list")
		{
			MusicBox::song_information();
		}
		else if (input == "save")
		{
			MusicBox::save_music();
		}
		else if (input == "help")
		{
			print_menu();
		}
		else if (input == "exit")
		{
			return 0;
		}
		else
		{
			cout << "Invalid command \n";
			print_menu();
		}
	}

	return 0;
}
void print_menu()
{
	cout << "add : Add a new song to the music database \n";
	cout << "list : List the songs in the music database \n";
	cout << "save : Save the music database \n";
	cout << "help : Display this menu \n";
	cout << "exit : Exit the program \n";

}