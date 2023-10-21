#include "EasyFind.hpp"

int main() 
{
	std::vector<int> v;
	std::vector<int>::iterator it;

	for (int i = 0; i < 10; ++i) 
		v.push_back(i);
	std::cout << "Vector:" << std::endl;
	
	for (it = v.begin(); it != v.end(); ++it) 
		std::cout << *it << " ";
	std::cout << "\n";

	std::cout << "\nSearching 6:\n";
	it = easyfind(v, 6);
	if (it == v.end()) 
		std::cout << "6 not found\n";
	else 
		std::cout << "6 found in pos: " << *it << "\n";

	std::cout << "\nSearching -6:\n";
	it = easyfind(v, -6);
	if (it == v.end()) 
		std::cout << "-6 not found\n";
	else 
		std::cout << "-6 found in pos: " << *it << "\n";
	return 0;
}