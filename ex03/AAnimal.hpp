#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include "Brain.hpp"


class AAnimal{
    protected :
        std::string type;
    public :
        AAnimal();
        AAnimal(const AAnimal& newAAnimal );
        AAnimal& operator=(const AAnimal& newAAnimal);
        virtual void makeSound() const = 0;
        const std::string& getType() const;
        void setType(std::string& newtype);
        virtual ~AAnimal();
};





#endif