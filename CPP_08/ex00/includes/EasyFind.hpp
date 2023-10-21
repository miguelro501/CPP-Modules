#pragma once
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator easyfind(T& x, int num)
{
	typename T::iterator i = std::find(x.begin(), x.end(), num);
	return i;
}
#endif