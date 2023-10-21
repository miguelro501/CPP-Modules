#pragma once
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <list>

#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		//typedef
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		//Functions
		iterator begin();
		iterator end();
		//OCF
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack &operator = (const MutantStack &other);
};
//Functions
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>		
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

//OCF
template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other): std::stack<T>(other) {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
	std::stack<T>::operator=(other);
	return (*this);
}

#endif