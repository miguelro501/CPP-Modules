#include "Converter.hpp"


//-----Functions-----------------
void Converter::convert(std::string literal)
{
	if (isPseudo(literal))
		pseudoConvert(literal);
	else if (literal.length() == 1 && !std::isdigit(literal[0]) && std::isprint(literal[0]))
		charConvert(literal);
	else if(literal.find_first_of('.') == literal.npos)
		intConvert(literal);
	else if(literal[literal.length() - 1] == 'f')
		floatConvert(literal);
	else
		doubleConvert(literal);
}

bool Converter::isPseudo(std::string literal)
{
	if (literal == "-inff" || literal == "+inff" || literal == "-inf" || literal == "+inf" || literal == "nan")
		return (true);
	return (false);
}
		
void Converter::pseudoConvert(std::string literal)
{
	
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (literal == "-inf" || literal == "+inf" || literal == "nan")
	{
		std::cout << "float: " << literal << "f" << std::endl;
		std::cout << "double: " << literal << std::endl;
	}
	else
	{
		std::cout << "float: " << literal << std::endl;
		literal.erase(literal.length() - 1);
		std::cout << "double: " << literal << std::endl;literal.erase(literal.length() - 1);
	}
}

void Converter::charConvert(std::string literal)
{
	std::string	toChar = literal;
	int			toInt = static_cast<int>(literal[0]);
	double		toDouble = static_cast<float>(literal[0]);
	float		toFloat = static_cast<double>(literal[0]);

	printConverted(toChar, toInt, toDouble, toFloat);
}

void Converter::intConvert(std::string literal)
{
	std::string	toChar = "";
	int			toInt = std::atoi(literal.c_str());
	double		toDouble = std::atof(literal.c_str());
	float		toFloat = static_cast<float>(toDouble);

	if (std::isprint(toInt))
	{
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	}
	else
		toChar = "Non displayable";
	printConverted(toChar, toInt, toDouble, toFloat);
}

void Converter::floatConvert(std::string literal)
{
	std::string	toChar = "";
	int			toInt = std::atoi(literal.c_str());
	float		toFloat = std::atof(literal.c_str());
	double		toDouble = static_cast<float>(toFloat);

	if (std::isprint(toInt))
	{
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	}
	else
		toChar = "Non displayable";
	printConverted(toChar, toInt, toDouble, toFloat);
}

void Converter::doubleConvert(std::string literal)
{
    std::string	toChar = "";
	int			toInt = std::atoi(literal.c_str());
	double		toDouble = std::atof(literal.c_str());
	float		toFloat = static_cast<float>(toDouble);

	if (std::isprint(toInt))
	{
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	}
	else
		toChar = "Non displayable";
	printConverted(toChar, toInt, toDouble, toFloat);
}

void Converter::printConverted(std::string toChar, int toInt, double toDouble, float toFloat)
{
	std::cout << "char: " << toChar << std::endl;
	std::cout << "int: " << toInt << std::endl;
	if (toFloat - static_cast<int>(toFloat) == 0)
	{
		std::cout << "float: " << toFloat << ".0f" << std::endl;
		std::cout << "double: " << toDouble << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << toFloat << "f" << std::endl;
		std::cout << "double: " << toDouble << std::endl;
	}
}

//-----Constructors-------------------
Converter::Converter(){}

Converter::Converter(const Converter &other)
{
	*this = other;
}

Converter::~Converter(){}

Converter &Converter::operator=(const Converter &other)
{
	(void)other;
	return (*this);
}