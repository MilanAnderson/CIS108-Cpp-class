/* =================================================== */
/*				                Includes               */
/*==================================================== */
#include "pch.h"
#include <iostream>
#include <string>
/*==================================================== */
/*								Prototypes             */
/*==================================================== */
//There are no prototypes
/*==================================================== */
/*                               Main                  */
/*==================================================== */

int main()
{
	std::string book;
	std::string author;
	int publish_year_of_book;
	int total_number_pages_of_book;
	constexpr int current_year = 2019;
	int age_of_book;

	//Name of the book and author
	std::cout << "What is the name of the book: ";
	std::getline(std::cin, book);
	std::cout << "What is the name of the author: ";
	std::getline(std::cin, author);

	//Enter the age of the book
	std::cout << "What year was your book published: ";
	std::cin >> publish_year_of_book;
	age_of_book = (current_year - publish_year_of_book);

	//Enter the number of pages in the book
	std::cout << "What are the number of pages in your book? ";
	std::cin >> total_number_pages_of_book;

	if (age_of_book < 10)
	{
		std::cout << "This book is younger than ten years old.\n";
	}
	else
	{
		std::cout << "This book is at least ten years old.\n";
	}
	//Number of pages if statements

	if (total_number_pages_of_book < 100)
	{
		std::cout << "This book is a short book.\n";
	}
	else if ((total_number_pages_of_book > 100) && (total_number_pages_of_book < 300))
	{
		std::cout << "This book is an average book.\n";
	}
	else
	{
		std::cout << "This book is a long book.\n";
	}

	return 0;
}
/*==================================================== */
/*                          Definitions                */
/*==================================================== */
//There are no definitions
