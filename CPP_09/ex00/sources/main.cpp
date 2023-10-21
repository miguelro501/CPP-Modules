#include "BitcoinExchange.hpp"

int main(int ac, char **av) 
{
	if (ac != 2)
	{
		std::cout << "Error: Invalid parameters";
		return (1);
	}
	BitcoinExchange	btc("data.csv");
	btc.exchange(av[1]);
	return (0);
	
}