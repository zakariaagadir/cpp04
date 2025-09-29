#include "AMateria.hpp"



AMateria::AMateria(){
}



AMateria::AMateria(std::string const & type){
    this->type = type ;
}

const std::string& AMateria::getType() const {
    return (type);
}


