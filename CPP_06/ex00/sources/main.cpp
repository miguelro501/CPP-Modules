#include "Converter.hpp"

int main(int argc, char *argv[]) 
{
	if (argc != 2) 
	{
		std::cout << "Error: invalid parameters\n";
		return 1;
	}

	Converter::convert(argv[1]);

	return 0;
}