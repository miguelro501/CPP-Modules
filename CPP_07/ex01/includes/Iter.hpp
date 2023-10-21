#pragma once
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Func>
void	iter(T *array, size_t len, Func foo)
{
	for (size_t i = 0; i < len; i++)
		foo(array[i]);
}

#endif