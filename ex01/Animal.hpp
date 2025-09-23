#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"


class Animal{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal& newanimal );
        Animal& operator=(const Animal& newanimal);
        virtual void makeSound() const;
        const std::string& getType() const;
        void setType(std::string& newtype);
        virtual ~Animal();
};





#endif