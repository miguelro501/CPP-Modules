#include <Brain.hpp>


Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < NBR_IDEAS; i++)
	{
		if (other.ideas[i] != this->ideas[i])
			this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain Copy Assignment" << std::endl;
	return (*this);
}
//---------------constructors--------------------------
Brain::Brain()
{
	std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Brain Copy Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}