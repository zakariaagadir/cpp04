#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"

#include <iostream>
#include "Brain.hpp"



class Cat : public AAnimal{
    private:
        Brain* brain;
    public :
        Cat();
        Cat(const Cat& newcat);
        Cat& operator=(const Cat& newcat);
        const std::string& getType() const;
        const Brain* getBrain() const;
        void setBrain(Brain* newbran) ;
        void setType(std::string& newtype);
        void makeSound() const;
        ~Cat();
};





#endif