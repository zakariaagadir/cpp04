#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:

    public:
        AMateria();
        AMateria(std::string const & type);
        virtual std::string const & getType() const = 0;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
        virtual ~AMateria();
};




#endif