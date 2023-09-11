#pragma once

#ifndef AMatria_HPP
#define AMatria_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	public:
		virtual void		use(ICharacter &target);
        virtual AMateria	*clone(void) const = 0;
		const std::string	&getType() const;
		
		AMateria &operator = (const AMateria &other);

		//constructors
		AMateria(const std::string  &type);
		AMateria(const AMateria &other);
		virtual ~AMateria(void);

	protected:
	  	std::string type;
        AMateria(void);

};

#endif