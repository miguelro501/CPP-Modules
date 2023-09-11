#include "Fixed.hpp"


//----------------------Constructors--------------------------------
Fixed::Fixed() : value(0) {}

Fixed::Fixed(const Fixed& other) : value(other.value) {}

Fixed::Fixed(const int value) : value(value << nbrBits) {}

Fixed::Fixed(const float value) : value(roundf(value * (1 << nbrBits))) {}

Fixed::~Fixed() {}

//----------------------Overloads--------------------------------
Fixed& Fixed::operator= (const Fixed& other)
{
	if (this != &other) {
		this->value = other.getRawBits();
	}
	return *this;
}

bool Fixed::operator== (const Fixed& other) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!= (const Fixed& other) const
{
	return this->getRawBits() != other.getRawBits();
}

bool Fixed::operator< (const Fixed& other) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator<= (const Fixed& other) const
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator> (const Fixed& other) const
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator>= (const Fixed& other) const
{
	return this->getRawBits() >= other.getRawBits();
}

//----------------------Operators---------------------------------

Fixed Fixed::operator+(const Fixed& other) const
{
	return (this->value + other.value);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed res;

	res.value = (this->value - other.value);
	return res;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed res(this->toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed res(this->toFloat() / other.toFloat());
	return res;
}

//----------------------Increment/Decrement---------------------------------
Fixed& Fixed::operator++()
{
	++(this->value);
	return (*this);
}

Fixed& Fixed::operator--()
{
	--(this->value);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed prev(*this);

	++(this->value);
	return prev;
}

Fixed Fixed::operator--(int)
{
	Fixed prev(*this);

	--(this->value);
	return prev;
}

//----------------------Max/Min---------------------------------
Fixed& Fixed::min(Fixed& left, Fixed& right)
{
	if (left < right) 
		return left;
	return right;
}

Fixed& Fixed::max(Fixed& left, Fixed& right)
{
	if (left > right) 
		return left;
	return right;
}

const Fixed& Fixed::min(const Fixed& left, const Fixed& right)
{
	if (left < right) 
		return left;
	return right;
}

const Fixed& Fixed::max(const Fixed& left, const Fixed& right)
{
	if (left > right) 
		return left;
	return right;
}
//----------------------Converters--------------------------------
float Fixed::toFloat(void) const
{
	return ((float)value / (1 << nbrBits));
}

int Fixed::toInt(void) const
{
	return (value >> nbrBits);
}

//----------------------Getters/Setters--------------------------------
void Fixed::setRawBits(const int rawBits)
{
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