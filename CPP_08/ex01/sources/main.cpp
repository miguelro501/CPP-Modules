#include "Span.hpp"

int main() 
{
	std::cout << "-----------OK Test--------------------\n";
	try 
	{
		Span s(10);
		for (int i = 0; i < 10; i++)
		{
			s.addNumber(i * i);
			std::cout << i * i << ",";
		}
		std::cout << "\n";
		std::cout << "Short span: " << s.shortestSpan() << "\n";
		std::cout << "Long span : " << s.longestSpan() << "\n";
	} 
	catch (std::exception& e) 
	{
		std::cerr << "EXCEPTION: " << e.what();
	}

	std::cout << "-----------Span Full Test--------------------\n";

	try 
	{
		Span s(5);
		for (int i = 0; i < 10; i++)
		{
			s.addNumber(i * i);
			std::cout << i * i << ",";
		}
		std::cout << "\n";
		std::cout << "Short span: " << s.shortestSpan() << "\n";
		std::cout << "Long span : " << s.longestSpan() << "\n";
	} 
	catch (std::exception& e) 
	{
		std::cerr << "EXCEPTION: " << e.what();
	}

	std::cout << "------------Span Too Small Test-------------------\n";

	try 
	{
		Span s(1);
		s.addNumber(0);
		std::cout << "Short span: " << s.shortestSpan() << "\n";
		std::cout << "Long span : " << s.longestSpan() << "\n";
	} 
	catch (std::exception& e) 
	{
		std::cerr << "EXCEPTION: " << e.what();
	}
	std::cout << "--------------Span Multiple Nbrs Test-----------------\n";

	std::vector<int> nbrs(100);
	
	for (int i = 0; i < 100; ++i) 
		nbrs[i] = i;
	
	try 
	{
		Span s(100);
		s.addNumbers(nbrs.begin(), nbrs.end());
		std::cout << "Short span: " << s.shortestSpan() << "\n";
		std::cout << "Long span : " << s.longestSpan() << "\n";
	} 
	catch (std::exception& e) 
	{
		std::cerr << "EXCEPTION: " << e.what();
	}

	return 0;
}