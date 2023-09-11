#include "Point.hpp"

Fixed triagularArea(const Point a, const Point b, const Point c)
{
	//Formula (ax*by + ay*cx + bx*cy)-(ay*bx + ax*cy + by*cx) / 2;
	Fixed	result1 = a.getXPoint() * (b.getYPoint() - c.getYPoint());
	Fixed	result2 = b.getXPoint() * (c.getYPoint() - a.getYPoint());
	Fixed	result3 = c.getXPoint() * (a.getYPoint() - b.getYPoint());

	Fixed result = result1 + result2 + result3; 
	if(result < 0)
		result = result * Fixed(-1);
	return (result);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed totalArea = triagularArea(a, b, c);
	Fixed abpArea = triagularArea(a, b, point);
	Fixed acpArea = triagularArea(a, c, point);
	Fixed bcpArea = triagularArea(b, c, point);

	if(abpArea.toFloat() == 0 || acpArea.toFloat() == 0 || bcpArea.toFloat() == 0)
		return (false);
	if(totalArea.toFloat() != abpArea.toFloat() + acpArea.toFloat()+ bcpArea.toFloat())
		return (false);
	return (true);
}
