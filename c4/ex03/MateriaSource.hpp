//
// Created by Shandy Mephesto on 8/29/21.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource &materiaSource);
	MateriaSource &operator = (MateriaSource &materiaSource);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

private:
	AMateria *_materials[4];
};


#endif
