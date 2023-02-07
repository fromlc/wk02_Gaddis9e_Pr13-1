//----------------------------------------------------------------------
// Rectangle.h : class declaration
//  
// Author: Tony Gaddis
//----------------------------------------------------------------------

//----------------------------------------------------------------------
// Rectangle
//----------------------------------------------------------------------
class Rectangle {
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};
