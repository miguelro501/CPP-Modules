#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << nbrBits;
}


Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << nbrBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->value = other.getRawBits();
	}
	return *this;
}

float Fixed::toFloat(void) const
{
	return ((float)value / (1 << nbrBits));
}
int Fixed::toInt(void) const
{
	return (value >> nbrBits);
}

void Fixed::setRawBits(const int rawBits)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = rawBits;
}

int Fixed::getRawBits() const
{
	return this->value;
}

std::ostream &operator<<(std::ostream &os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}