#include "MutantStack.hpp"

void testMutantStack(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(7);
	mstack.push(737);
	mstack.push(0);
	std::cout << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void testList(void)
{
	std::list<int> ls;
	ls.push_back(5);
	ls.push_back(17);
	std::cout << ls.back() << std::endl;
	ls.pop_back();
	std::cout << ls.size() << std::endl;
	ls.push_back(3);
	ls.push_back(7);
	ls.push_back(737);
	ls.push_back(0);
	std::cout << ls.size() << std::endl;
	std::list<int>::iterator lit = ls.begin();
	std::list<int>::iterator lite = ls.end();
	++lit;
	--lit;
	while (lit != lite) {
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> ls2(ls);
}

int main()
{
	std::cout << "------------Testing Mutant---------\n";
	testMutantStack();
	std::cout << "------------Testing List---------\n";
	testMutantStack();	
	return 0;
}