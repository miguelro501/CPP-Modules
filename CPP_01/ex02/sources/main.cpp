#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Brain Adrress : " <<  &brain << " Value: " << brain << std::endl;
	std::cout << "StringPTR Adrress : " <<  &stringPTR << " Value: " << stringPTR << std::endl;
	std::cout << "StringREF Adrress : " <<  &stringREF << " Value: " << stringREF << std::endl;
}