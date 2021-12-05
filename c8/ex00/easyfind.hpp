//
// Created by Shandy Mephesto on 9/15/21.
//

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iterator>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
	typename T::iterator res = find(container.begin(), container.end(), n);
	if (res == container.end())
		throw std::out_of_range("Didn't found the element");
	return res;
}

// fill array with -5 2 9 16 23
template <typename T>
void fill(T &container)
{
	for(int i = 0; i < 5; ++i)
		container.push_back(i * 7 - 5);
}

#endif
