//
// Created by Shandy Mephesto on 9/15/21.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	using std::stack<T>::c;

public:
	MutantStack();

	virtual ~MutantStack();

	MutantStack(const MutantStack &mutantStack);

	MutantStack &operator=(const MutantStack &mutantStack);


	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();

	iterator end();
};


template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template<typename T>
MutantStack<T>::~MutantStack()
{}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &mutantStack)
{
	*this = mutantStack;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &mutantStack)
{
	std::stack<T>::operator=(mutantStack);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{ return std::begin(c); }

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{ return std::end(c); }

#endif
