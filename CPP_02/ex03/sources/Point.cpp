#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point::~Point() {}

Point& Point::operator= (const Point& other)
{
	(void)other;
	return (*this);
}

Fixed Point::getXPoint() const
{
	return (x);
}

Fixed Point::getYPoint() const
{
	return (y);
}

