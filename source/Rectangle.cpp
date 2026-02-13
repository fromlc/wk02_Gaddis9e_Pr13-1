//----------------------------------------------------------------------
// Rectangle.cpp : class definition
//  
// Author: Tony Gaddis
//----------------------------------------------------------------------
#include "Rectangle.h"

//----------------------------------------------------------------------
// constructor
// #TODO set a breakpoint at line 16, execution will stop there
//		every time you declare a variable of type Rectangle
//		without using passed initial values.
//----------------------------------------------------------------------
Rectangle::Rectangle()
{
	pos = 5;		// pos is an example from class
	width = 0;
	length = 0;
}

//----------------------------------------------------------------------
// constructor with passed values
// #TODO set a breakpoint at line 29, execution will stop there
//		every time you declare a variable of type Rectangle
//		using passed initial values for width and length.
//----------------------------------------------------------------------
Rectangle::Rectangle(double w, double l)
{
	width = w;
	length = l;
	pos = 0;
}

//----------------------------------------------------------------------
// setWidth assigns a value to the width member.
//----------------------------------------------------------------------
void Rectangle::setWidth(double w) { width = w; }

//----------------------------------------------------------------------
// setLength assigns a value to the length member.
//----------------------------------------------------------------------
void Rectangle::setLength(double len) { length = len; }

//----------------------------------------------------------------------
// getWidth returns the value in the width member.
//----------------------------------------------------------------------
double Rectangle::getWidth() const { return width; }

//----------------------------------------------------------------------
// getLength returns the value in the length member.
//----------------------------------------------------------------------
double Rectangle::getLength() const { return length; }

//----------------------------------------------------------------------
// getArea returns the product of width times length.
//----------------------------------------------------------------------
double Rectangle::getArea() const { return width * length; }

//----------------------------------------------------------------------
// setPos 
//----------------------------------------------------------------------
void Rectangle::setPos(unsigned int p) { pos = p; }
