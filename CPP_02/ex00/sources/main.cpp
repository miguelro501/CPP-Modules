#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	std::cout << "----------------------------------\n\n";
	Fixed b( a );
	std::cout << "----------------------------------\n\n";
	Fixed c;
	std::cout << "----------------------------------\n\n";

	c = b;
	std::cout << "----------------------------------\n\n";
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}