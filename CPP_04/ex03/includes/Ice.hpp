#pragma once

#include <AMateria.hpp>
#include <ICharacter.hpp>

class Ice: public AMateria
{
    public:
	
        void				use(ICharacter &target);
        virtual AMateria    *clone(void) const;
    
        Ice			&operator=(const Ice &other);
		
		//constructors
        Ice(void);
        Ice(const Ice &other);
        virtual ~Ice(void);

    private:

};