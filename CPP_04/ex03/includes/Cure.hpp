#pragma once

#include <AMateria.hpp>
#include <ICharacter.hpp>

class Cure: public AMateria
{
    public:

        void				use(ICharacter &target);
        virtual AMateria	*clone(void) const;

        Cure				&operator=(const Cure &other);

		//constructors
        Cure(void);
        Cure(const Cure &other);
        virtual ~Cure(void);

};