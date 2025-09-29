#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria{
    public:
        Ice();
        Ice(const Ice &other);
        Ice& operator=(const Ice& other);
        void setType(std::string const &other);
        AMateria* clone() const ;
        void use(ICharacter& target) ;
        virtual ~Ice();
};









#endif