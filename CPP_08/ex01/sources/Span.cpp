#include "Span.hpp"

//-----------------Functions------------------------
void Span::addNumber(int nbr)
{
	if (this->it.size() < this->size)
		this->it.push_back(nbr);
	else
		throw SpanIsFullExecption();
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{

	if (this->it.size() + std::distance(begin, end) <= this->size)
		this->it.insert(this->it.end(), begin, end);
	else
		throw SpanIsFullExecption();
}

unsigned int Span::shortestSpan(void)
{
	if (this->size < 2 || this->it.size() < 2)
		throw SizeTooSmallExecption();
	 std::sort(this->it.begin(), this->it.end());

    unsigned int minSpan = this->it[1] - this->it[0];

    for (size_t i = 2; i < this->it.size(); i++)
    {
        unsigned int currentSpan = this->it[i] - this->it[i - 1];
        if (currentSpan < minSpan)
            minSpan = currentSpan;
    }
    return minSpan;
}

unsigned int Span::longestSpan(void)
{

	if (this->size < 2 || this->it.size() < 2)
		throw SizeTooSmallExecption();

	unsigned int maxSpan;
	maxSpan = *std::max_element(this->it.begin(), this->it.end()) - \
			*std::min_element(this->it.begin(), this->it.end());
	return (maxSpan);
}

//-------------Constructors------------------------
Span::Span()
{
	//std::cout << "Default constructor called \n";
}

Span::Span(unsigned int n): size(n) 
{
	
	//std::cout << "Span constructor called \n";
}

Span::~Span()
{
	//std::cout << "Span default destructor called \n";
}

Span::Span(const Span &other): size(other.size), it(other.it)
{
	*this = other;
	//std::cout << "Span default constructor called \n";
}
//---------------Execptions-----------------------
const char * Span::SpanIsFullExecption::what() const throw()
{
	return ("Error: Span is full\n");
}

const char * Span::SizeTooSmallExecption::what() const throw()
{
	return ("Error: Span length is too small\n");
}

//---------------Overloads------------------------	
Span &Span::operator = (const Span &other)
{
	if (this == &other)
		return (*this);
	this->it = other.it;
	this->size = other.size;
	return (*this);
}

