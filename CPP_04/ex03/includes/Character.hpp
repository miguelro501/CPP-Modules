#pragma once

#include <ICharacter.hpp>

#define NBR_SLOTS 4

class Character: public ICharacter
{
    public:

        void                equip(AMateria *materia);
        void                unequip(int idx);
        void                use(int idx, ICharacter &target);
        const std::string   &getName(void) const;
        void                showInventory(void) const;

        Character &operator=(const Character &other);

		//constructors
        Character();
        Character(const std::string &name);
        Character(const Character &other);
        ~Character(void);

    private:
        std::string name;
        AMateria    *inventory[NBR_SLOTS];
        int         nbrMaterias;
};