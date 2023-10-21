#pragma once
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Converter
{
	public:

		//OCF
		~Converter();

		static void convert(std::string literal);

	private:
		Converter();
		Converter(const Converter &other);
		Converter &operator = (const Converter &other);

		static bool isPseudo(std::string value);

		static void printConverted(std::string toChar, int toInt, double toDouble, float toFloat);
		
		static void	pseudoConvert(std::string value);
		static void	charConvert(std::string value);
		static void	intConvert(std::string value);
		static void	floatConvert(std::string value);
		static void	doubleConvert(std::string value);

};

#endif