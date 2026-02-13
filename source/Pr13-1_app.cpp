//----------------------------------------------------------------------
// Pr13-1_app.cpp
// 
// Author: Tony Gaddis
// Modified by: Prof. Linda C
// 
// Modified app code for Program 13-1 on pp. 732-734 of Gaddis 9E
//----------------------------------------------------------------------
#include "Rectangle.h"

#include <cstdlib>
#include <iostream>

//----------------------------------------------------------------------
// using symbols
//----------------------------------------------------------------------
//using std::cin, std::cout, std::endl, std::string;

//----------------------------------------------------------------------
// globals
//----------------------------------------------------------------------
Rectangle g_box;

//----------------------------------------------------------------------
// local function prototypes
//----------------------------------------------------------------------
bool doAnotherRect(double&, double&);
void displayRect();
double validateDouble(std::string&);

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main() {

	double width;
	double length;

	Rectangle r1;
	r1.setWidth(5);

	Rectangle r2(6, 9);

	// app banner
	std::cout << "\nThis program calculates the area of a rectangle.\n\n";

	// run until user quits
	while (doAnotherRect(width, length))
	{
		// store user's rectangle data
		g_box.setWidth(width);
		g_box.setLength(length);

		displayRect();
	}

	std::cout << "\nGoodbye!\n\n";

	return 0;
}

//----------------------------------------------------------------------
// - store user's Rectangle dimensions in reference parameters
// - return false when user enters 0 for width, true otherwise
//----------------------------------------------------------------------
bool doAnotherRect(double& rectWidth, double& rectLength) 
{
	std::string input;

	std::cout << "Enter the width (0 quits): ";
	std::cin >> input;
	rectWidth = validateDouble(input);

	// 0 width means user wants to quit
	if (!rectWidth)
	{
		return false;
	}

	std::cout << "Enter the length: ";
	std::cin >> input;
	rectLength = validateDouble(input);

	return true;
}

//----------------------------------------------------------------------
// display Rectangle data in global g_box
//----------------------------------------------------------------------
void displayRect() 
{
	std::cout << "Your rectangle's data:\n";
	std::cout << "Width: " << g_box.getWidth() << '\n';
	std::cout << "Length: " << g_box.getLength() << '\n';
	std::cout << "Area: " << g_box.getArea() << "\n\n";
}

//----------------------------------------------------------------------
// convert user input to a non-negative double value
// if passed string can be converted to a double value then
// return the absolute value, otherwise return 0
//----------------------------------------------------------------------
double validateDouble(std::string& input)
{
	// - strtod() is a C++ library function,
	//		it converts a C string to a double value.
	// - c_str() is a std::string method,
	//		it converts std::string to a C array of char.

	// strtod() reference page:
	// https://en.cppreference.com/w/c/string/byte/strtof

	double d = strtod(input.c_str(), nullptr);

	// return the absolute value of d
	return d >= 0 ? d : -d;
}
