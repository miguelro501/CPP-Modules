#pragma once
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
#include <map>

class BitcoinExchange
{
	public:

		//Functions
		void exchange(std::string fileName);
		bool validDate(std::string);
		bool validValue(std::string valueStr);
	
		//OCF
		BitcoinExchange();
		BitcoinExchange(const std::string csvFile);
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &other);

	private:
		std::map<std::string, double>	dataBase;
};

std::string trim(const std::string& str);

#endif