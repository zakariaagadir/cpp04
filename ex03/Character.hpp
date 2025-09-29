#ifndef CARACTER_HPP
#define CARACTER_HPP

#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter{
    private:
        std::string name;
        AMateria* _inventory[4]; 
    public:
        Character();
        Character(const std::string &newname);
        Character(const Character &other);
        Character& operator=(const Character &other);
        std::string const & getName() const override;
        void settName(const std::string &newname);
        void equip(AMateria* m) override;
        void unequip(int idx) override;
        void use(int idx, ICharacter& target) override;
        virtual ~Character();
};






#endif