#include "Harl.hpp"

void Harl::complain( std::string level )
{
	const int nbrLevels = 4;
	int leveln = -1;

	std::string levels[nbrLevels] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	f functions[nbrLevels] = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < nbrLevels; i++) {
		if (levels[i].compare(level) == 0) {
			leveln = i;
			break;
		}
	}

	#pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wimplicit-fallthrough"

	switch (leveln) {
		case 0:
			(this->*(functions[0]))();
		case 1:
			(this->*(functions[1]))();
		case 2:
			(this->*(functions[2]))();
		case 3:
			(this->*(functions[3]))();
			break;
		default:
			std::cerr << "Error: Invalid complain" << std::endl;
			break;
	}
    #pragma GCC diagnostic pop
}
void Harl::debug()
{
	std::cout 
		<< "DEBUG:\n"
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
		<<"ketchup burger. I really do!\n" << std::endl;
}
void Harl::info()
{
	std::cout 
		<< "INFO:\n"
	 	<< "I cannot believe adding extra bacon costs more money. You didn't put"
		<< "enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}
void Harl::warning()
{
	std::cout 
		<< "WARNING:\n"
		<< "I think I deserve to have some extra bacon for free. I've been coming for"
		<< "years whereas you started working here since last month.\n" << std::endl;
}
void Harl::error()
{
	std::cout 
		<< "ERROR:\n"
		<< "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}