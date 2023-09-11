#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		Fixed& operator= (const Fixed& other);

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
	private:
		int value;
		static const int nbrBits = 8;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &fixed);

#endif