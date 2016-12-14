//written by Jtaim
//date 15 Sept 2015
//updated 1 Dec 2016
//Programming: Principles and Practice Using C++ Second Edition

/*
Section 3.3 try this exercise
Get the “name and age” example to run.
Then, modify it to write out the age in months:
read the input in years and multiply (using the * operator) by 12.
Read the age into a double to allow for children who can be very
proud of being five and a half years old rather than just five.
*/

#include <iostream>
#include <string>
#include "section3.h" //custom header

//C++ programs start by executing the function main
int main()
{
	std::cout << "Please enter your first name: ";
	std::string first_name = "???"; 		//string variable
											//("???" means "don't know the name")
	std::cin >> first_name;
	std::cout << "Please enter your age: ";
	double age = -1;						//integer variable (-1 means "don't know the age")
	std::cin >> age;
	double age_months = (age * 12);
	std::cout << "Hello, " << first_name
		<< " (age " << age << ")"
		<< "(age in months " << age_months << ")\n";
	keep_window_open();
	return 0;
}
