#include "Harl.hpp"

int main(int argc, char *argv[]) {
	Harl *harl;

	harl = new Harl;
	for (int i = 1; i < argc; i++) {
		if (i > 1) std::cout << std::endl;
		harl->complain(argv[i]);
	}
	delete harl;

	return 0;
}