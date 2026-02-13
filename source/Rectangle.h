//----------------------------------------------------------------------
// Rectangle.h : class declaration
//  
// Author: Tony Gaddis
//----------------------------------------------------------------------

// To prevent #include'ing a .h file more than once,
// the top of each .h file in your project should either have
// this preprocessor directive (method 1):
//#pragma once

// OR (method 2): three (3) preprocessor directives.
// The first two are here, the third one is the last line of the file.

#ifndef RECTANGLE_H
#define RECTANGLE_H

//----------------------------------------------------------------------
// Rectangle
//----------------------------------------------------------------------
class Rectangle
{
private:
    double width;
    double length;
    unsigned int pos;   // pos is just an example used in class

public:
    Rectangle();
    Rectangle(double w, double l);
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    void setPos(unsigned int);
};

// The third preprocessor directive of method 2
// for preventing multiple a .h file one is the last line of the file.

#endif // RECTANGLE_H

// Note the naming convention: 
//      <name of the class in all caps>_H
