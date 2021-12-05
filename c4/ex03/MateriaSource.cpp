//
// Created by Shandy Mephesto on 8/29/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource created" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		_materials[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructed" << std::endl;
	for (int i = 0; i < 4 ; ++i)
		if (_materials[i])
			delete _materials[i];
//	delete [] _materials;
}

MateriaSource::MateriaSource(MateriaSource &materiaSource)
{
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator = (MateriaSource &materiaSource)
{
	for (int i = 0; i < 4 ; ++i)
	{
		if (materiaSource._materials[i])
		{
			_materials[i] = materiaSource._materials[i]->clone();
		}
		else
		{
			_materials[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if( _materials[i] == NULL){
			_materials[i] = m;
			std::cout << "learnt materia source " << m->getType() << std::endl;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materials[i]->getType() == type)
			return _materials[i]->clone();
	}
	return NULL;
}