#ifndef CURE_HPP
#define CURE_HPP


#include "AMateria.hpp"

class Cure : public AMateria{
    private:
        std::string type;
    public:
        Cure();
        Cure(const Cure &other);
        Cure& operator=(const Cure& other);
        std::string const & getType() const;
        void setType(std::string const &other);
        AMateria* clone() const ;
        void use(ICharacter& target) ;
        ~Cure();
};







#endif
