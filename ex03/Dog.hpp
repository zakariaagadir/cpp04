#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

#include <iostream>


class Dog: public AAnimal{
    private:
        Brain* brain;
    public :
        Dog();
        Dog(Dog& newdog);
        Dog& operator=(const Dog& newdog);
        const std::string& getType() const;
        const Brain* getBrain() const;
        void  setBrain(Brain* newbrain);
        void setType(std::string& newtype);
        void makeSound() const;
        ~Dog();
};





#endif