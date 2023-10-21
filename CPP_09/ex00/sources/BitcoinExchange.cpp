#include "BitcoinExchange.hpp"

//Functions
std::string trim(const std::string& str)
{
    size_t first = str.find_first_not_of(" \t\n\r");
    if (std::string::npos == first) {
        return str;
    }
    size_t last = str.find_last_not_of(" \t\n\r");
    return str.substr(first, (last - first + 1));
}

void BitcoinExchange::exchange(std::string fileName)
{
	std::ifstream file(fileName.c_str());
	std::string line;
	size_t	pipePos;
	std::getline(file, line);
	if (!file.is_open())
		std::cout << "Error: could not open file.\n";
	while (std::getline(file, line))
	{
		pipePos = line.find('|');
		if (pipePos == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << "\n";
			continue;
		}
		std::string date = line.substr(0, pipePos);
		std::string valueStr = line.substr(pipePos + 1, line.length());
		date = trim (date);
		valueStr = trim (valueStr);
		if (!validDate(date))
			continue;
		if (!validValue(valueStr))
			continue;
		std::map<std::string, double>::iterator it = dataBase.lower_bound(date);
		if (dataBase.empty() ||  it == dataBase.end())
		{
			std::cout << "Error: cant find date => " << line << "\n";
			continue;
		}
		double exchangeRate = it->second;
		std::istringstream stream(valueStr);
		double value;
		if (!(stream >> value))
		if (pipePos == std::string::npos)
		{
			std::cout << "Error: bad input in value => " << line << "\n";
			continue;
		}
		std::cout << date << " => " << valueStr << " = " << value * exchangeRate << '\n';
	}
}

bool BitcoinExchange::validDate(std::string date)
{
	int year, month, day;
	char sep;
	std::istringstream stream(date);
	if (!(stream >> year >> sep >> month >> sep >> day))
	{
		std::cerr << "Error: bad input => " << date << '\n';
		return false;
	}
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11))
		return false;
	if (month == 2) 
	{
		bool isLeap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if ((isLeap && day > 29) || (!isLeap && day > 28))
			return false;
	}
	return true;
}

bool BitcoinExchange::validValue(std::string valueStr)
{
	float value;
	std::istringstream stream(valueStr);
	if (!(stream >> value))
	{
		std::cerr << "Error: bad input => " << valueStr << '\n';
		return false;
	}
	if (value < 0)
	{
		std::cerr << "Error: not a positive number.\n";
		return false;
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number.\n";
		return false;
	}
	return true;
}

//OCF
BitcoinExchange::BitcoinExchange(const std::string csvFile)
{
	std::ifstream file(csvFile.c_str());
	std::string line;
	size_t	commaPos;
	std::getline(file, line);
	if (!file.is_open())
		std::cout << "Error: could not open file.\n";
	while (std::getline(file, line))
	{
		commaPos = line.find(',');
		if (commaPos == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << "\n";
			continue;
		}
		std::string date = line.substr(0, commaPos);
		std::string value = line.substr(commaPos + 1, line.length());

		double rate;
		std::istringstream valueStream(value);
		if (!(valueStream >> rate))
		{
			std::cerr << "Error: bad input => " << value << '\n';
			continue;
		}
		this->dataBase[date] = rate;
	}
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}	

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this == &other)
		return (*this);
	this->dataBase = other.dataBase;
	return (*this);
}