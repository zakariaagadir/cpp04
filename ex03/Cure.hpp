#ifndef CURE_HPP
#define CURE_HPP


#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{
    public:
        Cure();
        Cure(const Cure &other);
        Cure& operator=(const Cure& other);
        void setType(std::string const &other);
        AMateria* clone() const override;
        void use(ICharacter& target) override;
        virtual ~Cure();
};







#endif
