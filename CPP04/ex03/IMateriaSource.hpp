

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP


#include "Amateria.hpp"
#include <iostream>


class IMateriaSource
{
  public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
