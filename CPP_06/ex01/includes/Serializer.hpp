#pragma once
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data 
{
	int n;
};

class Serializer
{
	public:

		//OCF
		~Serializer();

	private:
		Serializer();
		Serializer(const Serializer &other);
		Serializer &operator = (const Serializer &other);
};

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif