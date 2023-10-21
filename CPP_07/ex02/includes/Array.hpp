#pragma once
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <cstdlib>

template <class T>
class	Array
{
	public:

		Array() : len(0)
		{
			arr = new T[0];
		}

		Array(unsigned int n) : len(n)
		{
			arr = new T[n];
		}

		Array(Array const &other)
		{
			this->arr = NULL;
			*this = other;
		}

		Array &operator=(Array const &other)
		{
			if (arr != NULL)
				delete[] arr;
			if (other.len != 0)
			{
				len = other.len;
				arr = new T[len];
				for (size_t i = 0; i < len; i++)
					arr[i] = other.arr[i];
			}
			return (*this);
		}

		virtual ~Array()
		{
			if (this->arr != NULL)
				delete[] arr;
		}

		T &operator[](unsigned int i)
		{
			if (i < len) 
				return arr[i];
			else 
				throw Array<T>::InvalidIndexException();
		}

		class	InvalidIndexException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		T*	arr;
		unsigned int len;
};

template <typename T>
const char	*Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Invalid index\n");
}

#endif	