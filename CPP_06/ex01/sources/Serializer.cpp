#include "Serializer.hpp"

//-----Functions---------------------

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

//-----Constructors-------------------
Serializer::Serializer(){}

Serializer::Serializer(const Serializer &other)
{
	*this = other;
}

Serializer::~Serializer(){}

Serializer &Serializer::operator=(const Serializer &other)
{
	(void)other;
	return (*this);
}