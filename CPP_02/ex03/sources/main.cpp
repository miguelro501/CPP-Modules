#include "Point.hpp"

//wont work for small triagles
int main( void )
{
	Point	p1(0.0f, 0.0f);
	Point	p2(6.0f, 0.0f);
	Point	p3(3.0f, 3.0f);
	Point	pFind_0(0.0f, 0.0f);
	Point	pFind_1(0.0f, 1.0f);
	Point	pFind_2(3.0f, 1.5f);
	Point	pFind_3(1.25f, -0.02f);

	std::cout << std::endl;

	std::cout << "Point 1 - " << pFind_0.getXPoint() << " / " << pFind_0.getYPoint() <<std::endl;
	if (bsp(p1, p2, p3, pFind_0) == true)
		std::cout << "The point is inside the triangle!" << std::endl;
	else
		std::cout << "The point is not inside the triangle!" << std::endl;

	std::cout << std::endl;

	std::cout << "Point 2 - " << pFind_1.getXPoint() << " / " << pFind_1.getYPoint() <<std::endl;
	if (bsp(p1, p2, p3, pFind_1) == true)
		std::cout << "The point is inside the triangle!" << std::endl;
	else
		std::cout << "The point is not inside the triangle!" << std::endl;

	std::cout << std::endl;

	std::cout << "Point 3 - " << pFind_2.getXPoint() << " / " << pFind_2.getYPoint() <<std::endl;
	if (bsp(p1, p2, p3, pFind_2) == true)
		std::cout << "The point is inside the triangle!" << std::endl;
	else
		std::cout << "The point is not inside the triangle!" << std::endl;

	std::cout << std::endl;

	std::cout << "Point 4 - " << pFind_3.getXPoint() << " / " << pFind_3.getYPoint() <<std::endl;
	if (bsp(p1, p2, p3, pFind_3) == true)
		std::cout << "The point is inside the triangle!" << std::endl;
	else
		std::cout << "The point is not inside the triangle!" << std::endl;

	std::cout << std::endl;
}