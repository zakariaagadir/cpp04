#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

#include <iostream>


class Cat : public Animal{
    public :
        Cat();
        void makeSound() const;
        ~Cat();
};





#endif