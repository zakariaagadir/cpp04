#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>



class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource &test);
        MateriaSource& operator=(MateriaSource &test);
        ~MateriaSource();
        void learnMateria(AMateria* mater) override;
        AMateria* createMateria(std::string const & type) override;
};






#endif
