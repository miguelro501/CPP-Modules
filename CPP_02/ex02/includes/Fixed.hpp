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

		bool operator== (const Fixed& other) const ;
		bool operator!= (const Fixed& other) const ;
		bool operator< (const Fixed& other) const ;
		bool operator<= (const Fixed& other) const ;
		bool operator> (const Fixed& other) const ;
		bool operator>= (const Fixed& other) const ;

		Fixed operator+ (const Fixed& other) const ;
		Fixed operator- (const Fixed& other) const ;
		Fixed operator* (const Fixed& other) const ;
		Fixed operator/ (const Fixed& other) const ;

		Fixed& operator++();
		Fixed& operator--();

		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed& min(Fixed& left, Fixed& right);
		static Fixed& max(Fixed& left, Fixed& right);
		static const Fixed& min(const Fixed& left, const Fixed& right);
		static const Fixed& max(const Fixed& left, const Fixed& right);

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