#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
    private:
        std::string name;
        AMateria* inventory[4];
        int         size;
        

    public:
        Character();
        Character(std::string const & name);
        Character(const Character &other);
        Character& operator=(const Character &other);
        ~Character(); 

        const std::string  & getName() const override;
        const int getsize() const;
        const AMateria* const* getInventory() const;
        void equip(AMateria* m) override;
        void unequip(int idx) override; 
        void use(int idx, ICharacter& target) override;
};

#endif
