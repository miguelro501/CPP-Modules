#include "Sed.hpp"

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Wrong number of parameters" << std::endl;
		return 0;
	}
	Sed* sed = new Sed(argv[1], argv[2], argv[3]);
	sed->replace();
	delete sed;
	
	return 0;
}