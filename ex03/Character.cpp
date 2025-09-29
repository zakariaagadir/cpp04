#include "Character.hpp"



Character::Character(){
    name = "default";
    for (int i = 0 ; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    size = 0;
}

Character::Character(std::string const & name){
    this->name = name;
    for (int i = 0 ; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    size = 0;
}

Character::Character(const Character &other){
    *this = other;
}

Character& Character::operator=(const Character &other){
    if (this != &other)
    {
        const AMateria *const *test;
        test = other.getInventory();
        for (int i=0; i < 4 ; i++)
        {
            if(inventory[i] != NULL)
            {
                delete (inventory[i]);
            }
            if(test[i] != NULL)
            {
                inventory[i] = test[i]->clone();
            } else
            {
                inventory[i] = NULL;
            }
        }
        size = other.getsize();
        name = getName();
    }
    return (*this);
}

const std::string &Character::getName() const{
    return (name);
}

const int Character::getsize() const{
    return (size);
}

const AMateria* const* Character::getInventory() const{
    return (this->inventory);
}


void Character::equip(AMateria* m){
    if (size < 3)
        inventory[size++] = m;
}

void Character::unequip(int idx) {
    if (idx >=0 && idx < getsize())
    {
        if(inventory[idx] != NULL)
        {
            delete (inventory[idx]);
            for (int i = idx; i < (getsize() - 1); i++)
            {
                inventory[i] = inventory[i+1];
            }
            inventory[getsize() - 1] = NULL;
        }
    }
}


void Character::use(int idx, ICharacter& target){

    if (idx >=0 && idx < (getsize() - 1))
    {
        if (inventory[idx])
            inventory[idx]->use(target);
    }
}


Character::~Character(){
    std::cout << "Character deconstructor applied " << std::endl;
    for (int i=0; i < 4 ; i++)
    {
        if (inventory[i] != NULL)
        {
            delete (inventory[i]);
        }
    }
}






